/*
 * main.c
 *
 *  Created on: Oct 3, 2022
 *      Author: mohamedmostafamohame
 */
#include"lcd.h"
#include <util/delay.h>

int main(void)
{
	LCD_init();
	LCD_displayCharacter('F');
	_delay_ms(1500);
	LCD_clearScreen();
	LCD_displayString("I was About to ");
	LCD_moveCursor(1,0);
	LCD_displayString("FUCK OFF ");
	_delay_ms(1500);
	LCD_displayStringRowColumn(0,6,"FUCKIn");
	_delay_ms(1500);
	LCD_integerToString(500);
    while(1)
   {

   }
}
