#include <fx2usb.h>

void handle_usb_get_interface(uint8_t index) {
  index;
  EP0BUF[0] = 0;
  SETUP_EP0_BUF(1);
}
