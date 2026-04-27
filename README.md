# 📌 ESP32 MAC Address Reader

A simple Arduino project to retrieve and display the MAC address of an ESP32 board using WiFi.

---

## 📖 What is ESP32 MAC Address?

The **MAC (Media Access Control) address** is a unique identifier assigned to the ESP32’s network interface.

It looks like this:

```
24:6F:28:XX:XX:XX
```

Each ESP32 has a **unique MAC address**, which helps identify it on a network.

---

## ❓ Why is MAC Address Used?

The MAC address is used for:

* Identifying devices on a network
* Connecting to routers and WiFi networks
* Network security and filtering
* IoT device tracking and communication

---

## ✅ Advantages of Using MAC Address

* 🔹 Unique for every device
* 🔹 Useful for device identification
* 🔹 Helps in network security (MAC filtering)
* 🔹 Important in IoT projects

---

## 🧰 Requirements

### 🔧 Hardware

* ESP32 Development Board
* USB Data Cable

### 💻 Software

* Arduino IDE
  Download: https://www.arduino.cc/en/software

---

## 📚 Required Libraries

### 1. WiFi Library

* Comes pre-installed with ESP32 board package

### 2. ESP32 Board Package

Install from:

1. Open Arduino IDE
2. Go to **File → Preferences**
3. Add this URL in "Additional Board Manager URLs":

```
https://dl.espressif.com/dl/package_esp32_index.json
```

4. Go to **Tools → Board → Boards Manager**
5. Search **ESP32** and install

---

## 📜 Code

```cpp
#include <WiFi.h>
#include "esp_wifi.h"

void setup() {
  Serial.begin(115200);
  delay(1000);

  WiFi.mode(WIFI_MODE_STA);
  WiFi.begin();
  delay(500);

  uint8_t mac[6];
  esp_wifi_get_mac(WIFI_IF_STA, mac);

  Serial.print("ESP32 MAC Address: ");
  Serial.printf("%02X:%02X:%02X:%02X:%02X:%02X\n",
                mac[0], mac[1], mac[2],
                mac[3], mac[4], mac[5]);
}

void loop() {
}
```

---

## ▶️ How to Use

1. Connect ESP32 to your computer
2. Open Arduino IDE
3. Select your ESP32 board
4. Upload the code
5. Open Serial Monitor (115200 baud)

---

## 📷 Output Example

```
ESP32 MAC Address: 24:6F:28:XX:XX:XX
```

---

## ⚙️ How It Works

* Initializes WiFi in station mode
* Retrieves MAC address using `esp_wifi_get_mac()`
* Displays it on Serial Monitor

---

## 📄 License

This project is open-source and free to use.

---

## 🙌 Contributing

Feel free to fork this repository and improve it!

---
