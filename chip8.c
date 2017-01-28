#include <stdio.h>
#include <stdlib.h>
#include "chip8.h"

unsigned char chip8_fontset[80] = {
    0xF0, 0x90, 0x90, 0x90, 0xF0, //0
    0x20, 0x60, 0x20, 0x20, 0x70, //1
    0xF0, 0x10, 0xF0, 0x80, 0xF0, //2
    0xF0, 0x10, 0xF0, 0x10, 0xF0, //3
    0x90, 0x90, 0xF0, 0x10, 0x10, //4
    0xF0, 0x80, 0xF0, 0x10, 0xF0, //5
    0xF0, 0x80, 0xF0, 0x90, 0xF0, //6
    0xF0, 0x10, 0x20, 0x40, 0x40, //7
    0xF0, 0x90, 0xF0, 0x90, 0xF0, //8
    0xF0, 0x90, 0xF0, 0x10, 0xF0, //9
    0xF0, 0x90, 0xF0, 0x90, 0x90, //A
    0xE0, 0x90, 0xE0, 0x90, 0xE0, //B
    0xF0, 0x80, 0x80, 0x80, 0xF0, //C
    0xE0, 0x90, 0x90, 0x90, 0xE0, //D
    0xF0, 0x80, 0xF0, 0x80, 0xF0, //E
    0xF0, 0x80, 0xF0, 0x80, 0x80  //F
};

void CHIP8_Init(){
    pc = 0x200;
    opcode = 0;
    i = 0;
    sp = 0;

    int j;
    // Clear display
    for(j = 0; j < 64 * 32; j++)
           SCREEN[j] = 0;
    // Clear stack
    for(j = 0; j < 16; j++)
           STACK[j] = 0;
    // Clear registers V0-VF
    for(j = 0; j < 16; j++)
           V[j] = 0;
    // Clear memory
    for(j = 0; j < 4096; j++)
        MEM[j] = 0;
    // Load the fontset
    for(j = 0; j < 80; j++)
        MEM[j] = chip8_fontset[j];
}

void CHIP8_EmulateCycle(){

}
