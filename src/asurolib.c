/**
 * Asuro development library
 * -- Asuro library functions
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
#include "asurolib.h"

/**
 * Initialization function
 * This has to be called before any program startup
 */
void init(void) {
    // TODO
}

/**
 * Waits during a certain amount of time
 * @param unsigned int time: time to wait before returning (in seconds)
 */
void wait(unsigned int time)
{
    /* we firstly need to tell which source has to be used for the clock timer */
    TCCR0 = 1; /* no prescaling */
    TCNT0 = x; // we set the needed time in the TCNT0 register (Timer/Counter register)

    unsigned int i = 0; /* this is our counter */

    for (unsigned int i = 0; i <= time; i++)
        while (!TOV0);
}