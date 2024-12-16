
#include "display.h"

bool init_display(display_t *display){
    if(SDL_Init(SDL_INIT_VIDEO)!=0){
         SDL_Log("FAILED TO INITIALIZE SDL %s\n",SDL_GetError());
        return false;
    }
    display->window = SDL_CreateWindow(
        "CHIP8 EMULATOR",
        SDL_WINDOWPOS_CENTERED,
        SDL_WINDOWPOS_CENTERED,
        DISPLAY_WIDTH *SCALE_FACTOR,
        DISPLAY_HEIGHT *SCALE_FACTOR,
        0
    );
    if(!display->window){
        SDL_Log("FAILED TO INITIALIZE WINDOW: %s \n",SDL_GetError());
        return false;
    }
    return true;


}


