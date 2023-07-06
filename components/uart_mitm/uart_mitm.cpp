#include "uart_mitm.h"
#include "esphome/core/log.h"

namespace esphome {
namespace serial {

static const char *const TAG = "uart_mitm";

void UARTMITM::loop() {
  uint8_t r;
  uint8_t t;
  while (this->uart1_->available()) {
    this->uart1_->read_byte(&t);
    // ESP_LOGI(TAG, ">%c", t);
  }
  while (this->uart2_->available()) {
    this->uart2_->read_byte(&r);
    // ESP_LOGI(TAG, ">%c", r);
  }
}

void UARTMITM::dump_config() { ESP_LOGCONFIG(TAG, "UART MITM"); }

}  // namespace serial
}  // namespace esphome
