/**
 * Asuro development library
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

#ifndef ASURO_LED_H
#define ASURO_LED_H

    /** LEDs states **/
    #define ASURO_LED_INTERNAL_STATE_FRONT 16
    #define ASURO_LED_INTERNAL_STATE_STATUS_RED 2
    #define ASURO_LED_INTERNAL_STATE_STATUS_GREEN 1
    #define ASURO_LED_INTERNAL_STATE_BACK_RIGHT 8
    #define ASURO_LED_INTERNAL_STATE_BACK_LEFT 4

    /** LEDs state formatter **/
    #define LED_STATE(f, br, bl, sr, sg) f * 16 + br * 8 + bl * 4 + sr * 2 + sg

    /**
     * Sets the LEDs of ASURO to their respective states
     * @param states char: formatted LEDs states
     */
    void setLed(char states);

#endif //ASURO_LED_H
