#include <SPI.h>

const uint8_t SS_PIN = 10; // Chân SS của Slave

void setup() {
  SPI.begin(); // Khởi tạo giao thức SPI
  pinMode(SS_PIN, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(SS_PIN) == LOW) { // Nếu được chọn bởi Master
    uint8_t data = SPI.transfer(84); // Nhận dữ liệu từ Master và gửi dữ liệu về
    SPI.transfer(data * 2); // Gửi dữ liệu về Master (nhân đôi giá trị nhận được)
  }
}
