#include <stdio.h>
#include "display.h"
#include "display.c"


int main(int argc,char **argv ){
    (void)argc;
    (void)argv;
    display_t display;
    
    if(!init_display(&display))exit(EXIT_FAILURE);

     // Wait for 3 seconds
    SDL_Delay(3000);

    // Clean up
    SDL_DestroyWindow(display.window);
    SDL_Quit();
    
    
    return 0;
}