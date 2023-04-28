#include <arduino_homekit_server.h>

void my_homekit_setup();
void my_homekit_loop();
void set_on(const homekit_value_t v);
void set_bright(const homekit_value_t v);
void set_sat(const homekit_value_t v);
void set_hue(const homekit_value_t v);
void updateColor();
void HSV2RGB(float h,float s,float v);