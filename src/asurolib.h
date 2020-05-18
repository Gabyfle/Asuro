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

#ifndef ASURO_ASUROLIB_H
    #define ASURO_ASUROLIB_H

    /** Asuro library constants **/

    /* Boolean values */
    #define  false    0
    #define  true    1

    /* State values */
    #define  OFF    0
    #define  ON     1

    /** Asuro library functions **/

    /*
     * Initialization function
     * This has to be called before any program startup
     */
    void init(void);

    #ifdef ASUROLIB_LEDS
        /** Asuro LED functions **/
        #include "led.h"
    #endif
#endif //ASURO_ASUROLIB_H