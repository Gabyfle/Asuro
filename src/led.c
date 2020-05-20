/**
 * Asuro development library
 * -- LEDs WORK FUNCTIONS
 * @author Gabriel Santamaria <gaby.santamaria@outlook.fr>
 * 18/05/2020
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
        http://www.apache.org/licenses/LICENSE-2.0
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */

#include <avr/io.h>
#include "led.h"

/**
 * Sets the LEDs of ASURO to their respective states
 * @param states unsigned char: formatted LEDs states
 */
void setLed(unsigned char states)
{

    /* Front LED */
    if ((ASURO_LED_INTERNAL_STATE_FRONT ^ states) > ASURO_LED_INTERNAL_STATE_FRONT)
        PORTD |= (1 << PD6);
    else
        PORTD &= ~(1 << PD6);
    /* Status LED Red */
    if ((ASURO_LED_INTERNAL_STATE_STATUS_RED ^ states) > ASURO_LED_INTERNAL_STATE_STATUS_RED)
        PORTD |=  (1 << PD2);
    else
        PORTD &= ~(1 << PD2);
    /* Status LED Green */
    if ((ASURO_LED_INTERNAL_STATE_STATUS_GREEN ^ states) > ASURO_LED_INTERNAL_STATE_STATUS_GREEN)
        PORTB |=  (1 << PB0);
    else
        PORTB &= ~(1 << PB0);
    /* Back LED Left */
    if ((ASURO_LED_INTERNAL_STATE_BACK_LEFT ^ states) > ASURO_LED_INTERNAL_STATE_BACK_LEFT)
        PORTC |= (1 << PC0) | (1 << PC1);
    else
        PORTB &= ~(1 << PB0);
    /* Back LED Right */
    if ((ASURO_LED_INTERNAL_STATE_BACK_RIGHT ^ states) > ASURO_LED_INTERNAL_STATE_BACK_RIGHT)
        PORTB |=  (1 << PB0);
    else
        PORTC &= ~(1 << PC0);
}

/**
 * Makes the LEDs blink during a certain amount of time
 * @param states unsigned char: formatted LEDs states
 * @param time double: blink duration
 * @return unsigned int:
 */
void blinkLed(unsigned char states, double time, )
{
    // TODO
}