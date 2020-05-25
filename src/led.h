/**
 * Asuro development library
 * @author Gabriel Santamaria <gaby.santamaria@outlook.fr>
 *
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

#ifndef ASURO_LED_H
#define ASURO_LED_H

    /** LEDs states **/
    #define ASURO_LED_INTERNAL_STATE_FRONT (unsigned char) 16
    #define ASURO_LED_INTERNAL_STATE_STATUS_RED (unsigned char) 8
    #define ASURO_LED_INTERNAL_STATE_STATUS_GREEN (unsigned char) 4
    #define ASURO_LED_INTERNAL_STATE_BACK_LEFT (unsigned char) 2
    #define ASURO_LED_INTERNAL_STATE_BACK_RIGHT (unsigned char) 1

    /** LEDs state formatter **/
    #define LED_STATE(f, sr, sg, bl, br) f * 16 + sr * 8 + sg * 4 + bl * 2 + br

    /**
     * Sets the LEDs of ASURO to their respective states
     * @param states unsigned char: formatted LEDs states
     */
    void setLed(unsigned char states);

    /**
     * Makes the LEDs blink during a certain amount of time
     * @param states unsigned char: formatted LEDs states
     * @param time double: blink duration
     * @param repeats int: number of time we should repeat the blinks
     */
    void blinkLed(unsigned char states, double time, int repeats);
#endif //ASURO_LED_H
