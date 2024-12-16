#ifndef DISPLAY_H
#define DISPLAY_H

#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include "./sdl/include/SDL2/SDL.h"
#include "chip8.h"

#define DISPLAY_WIDTH  62
#define DISPLAY_HEIGHT 32
#define SCALE_FACTOR   20

typedef struct{
   uint8_t screen[62*32];
   SDL_Window *window;
//    SDL_Renderer *renderer;
}display_t;

/**
 * Initialize the window with default values
 * @param display_t
 *@return bool
 */
bool init_display(display_t *display);

/** 
  Updates the screen on anychange
  @param display_t screen display type
  @param chip8_t   chip8 contains the data to update the screen  
  @return Nothing 
  
*/
void update_screen(display_t *display,chip8_t *chip8);


/**
 * Clear the screen on game exit
 * @param display_t 
 * @return Nothing
 */
void clear_screen(display_t *display);

/**
 * Display help screen
 * @param display_t 
 * @return Nothing
 */
void help_click(display_t *display);

#endif // DISPLAY_H