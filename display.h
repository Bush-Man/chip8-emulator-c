#include <stdlib.h>
#include <cstdint>
#include <SDL.h>
#include "chip8.h"

typedef struct{
   size_t  window_height;
   size_t  window_width;
   size_t  scale_factor;
   uint8_t screen[62*32];
   SDL_Window *window;
   SDL_Renderer *renderer;
}display_t;

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