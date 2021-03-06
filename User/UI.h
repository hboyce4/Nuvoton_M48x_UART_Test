/*
 * UI.h
 *
 *  Created on: Jan 10, 2021
 *      Author: Hugo Boyce
 */

#ifndef UI_H_
#define UI_H_


/*---------------------------------------------------------------------------------------------------------*/
/* Includes           				                                                                      */
/*---------------------------------------------------------------------------------------------------------*/

#include <stdio.h>
#include <string.h>
#include "user_sys.h"
#include "PLL.h"
#include "inverter_control.h"


/*---------------------------------------------------------------------------------------------------------*/
/* Macros           				                                                                      */
/*---------------------------------------------------------------------------------------------------------*/

#define UI_FRAME_INTERVAL_MS	200	/* interval between UI refreshes */
#define LINE_WIDTH 128
#define ESCAPE_SEQUENCE_LENGTH 16

#define UI_MENU_NB_ROWS 2
#define UI_MENU_NB_COLUMNS 2

#define COLOUR_DEFAULT "\x1B[97m\x1B[40m" /* white text, black background \x1B[40m */
#define COLOUR_SELECTED "\x1B[30m\x1B[105m" /* black text, bright magenta backgroung*/
#define COLOUR_NOT_SELECTED "\x1B[95m\x1B[40m" /* bright magenta text, black background*/

#define FLOAT_INCREMENT 0.50

/*---------------------------------------------------------------------------------------------------------*/
/* Type definitions           				                                                               */
/*---------------------------------------------------------------------------------------------------------*/


/*---------------------------------------------------------------------------------------------------------*/
/* Global variables to be made available externally                                                        */
/*---------------------------------------------------------------------------------------------------------*/


/*---------------------------------------------------------------------------------------------------------*/
/* Functions declaration                                                                              */
/*---------------------------------------------------------------------------------------------------------*/

void draw_UI(int8_t, int8_t);


void draw_UI_line_0_1(uint8_t*);
void draw_UI_line_2(uint8_t*);
void draw_UI_line_3(uint8_t*);
void draw_UI_line_4(uint8_t*);
void draw_UI_line_5(uint8_t*);
void draw_UI_line_6(uint8_t*);
void draw_UI_line_7(uint8_t*);
void draw_UI_line_8(uint8_t*);
void draw_UI_line_9(uint8_t*);

void draw_UI_line_separator(uint8_t*);

void draw_UI_line_A(uint8_t* , int8_t, int8_t);
void draw_UI_line_B(uint8_t* , int8_t, int8_t);

void read_user_input(int8_t*, int8_t*);
void increment_UI_value(int8_t, int8_t);
void decrement_UI_value(int8_t, int8_t);

#endif /* UI_H_ */
