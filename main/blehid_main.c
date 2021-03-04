
#include "host.h"
#include "debug.h"
#include "suspend.h"


static host_driver_t driver = {
        // keyboard_leds,
        // send_keyboard,
        // send_mouse,
        // send_system,
        // send_consumer
};



host_driver_t *blehid_driver(void)
{
    return &driver;
}
