#include <stdint.h>

typedef struct{
  uint8_t memory[4096];  
  uint8_t registers[16];
  uint16_t indexRegister;
  uint16_t stack[16];
  uint16_t program_counter;
  uint8_t *stack_pointer;
  uint8_t sound_timer;
  uint8_t delay_timer;
}chip8_t;