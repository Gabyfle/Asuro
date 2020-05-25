![ASURO Library made by Gabyfle](https://github.com/Gabyfle/Asuro/blob/master/asuro_banner.png)
# Asuro library
A tiny C library to program the ATMega8L chipped on ASURO.

## Usage
### Initialization

Every program have to initialize its state by using the `init` function provided in `asurolib.h`.

### Playing with LEDs

ASURO has a total of 5 LEDs. Here are available LEDs on ASURO:

* Status (<span style="color=green !important;">GREEN</span> and <span style="color=red !important;">RED</span>)
* Front (<span style="color=red !important;">RED</span>)
* Back LEDs (<span style="color=red !important;">LEFT</span> and <span style="color=red !important;">RIGHT</span>)

**Example 1**: turn on the Front LED:

```c
#define ASUROLIB_LEDS // we'll be using the LED module from Asuro Library

#include "asurolib.h"

int main(void)
{
    init(); // ASURO initialization

    while(1)
    {
        /* Setting Front led ON */
        setLed(LED_STATE(ON, OFF, OFF, OFF, OFF));
        /* This is equivalent to:
         * setLed(16);
         */
    }

    return 0;
}
```

`LED_STATE` is defined from the preprocessor. This mean it's not a function that will be stored into ASURO.

Here is the order in which `LED_STATE` takes LEDs:


  1. `FRONT`
  2. `STATUS_RED`
  3. `STATUS_GREEN`
  4. `BACK_LEFT`
  5. `BACK_RIGHT`

**Example 2:** make the LEDs blink during 5 seconds

```c
#define ASUROLIB_LEDS // we'll be using the LED module from Asuro Library

#include "asurolib.h"

int main(void)
{
    init(); // ASURO initialization
    
    blinkLed(
        LED_STATE(ON, ON, ON, ON, ON), /* LEDs that have "ON" state will blink */
        5000, /* 5k milliseconds which is exactly 5 seconds */
        30 /* LEDs will blink 30 times during these 5 seconds */
    );

    return 0;
}
```

## Credits
* A lot of ideas have been taken from: [Asuro](http://www.arexx.com/downloads/asuro/asuro_src.zip) by Jan Grewe

## License
The present work is licensed under the Apache 2.0 license.
