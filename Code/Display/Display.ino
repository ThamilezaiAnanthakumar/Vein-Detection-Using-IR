#include <Adafruit_GFX.h>    // Core graphics library
#include <Adafruit_ST7735.h> // Hardware-specific library for ST7735
#include <SPI.h>

// Pin definitions for ESP32
#define TFT_CS      10    
#define TFT_RST     19   
#define TFT_DC      17   
#define TFT_MOSI    13  
#define TFT_SCLK    12   

// Create Adafruit ST7735 instance
Adafruit_ST7735 tft = Adafruit_ST7735(TFT_CS, TFT_DC, TFT_MOSI, TFT_SCLK, TFT_RST);

void setup(void) {
  Serial.begin(115200);

  // Initialize the display
  tft.initR(INITR_BLACKTAB);  // Init ST7735S chip, black tab

  // Set the background color to black
  tft.fillScreen(ST77XX_BLACK);

  // Display "Initializing....."
  tft.setTextColor(ST77XX_WHITE);
  tft.setTextSize(1);
  tft.setCursor(10, 50);
  tft.println("Initializing.....");
  
  delay(5000);

  // Clear the screen and display IP information
  tft.fillScreen(ST77XX_BLACK);
  tft.setTextColor(ST77XX_WHITE);
  tft.setTextSize(1);

  // Set cursor for each line
  tft.setCursor(10, 30);  // Set cursor for "IP Address"
  tft.print("IP Address:");
  
  tft.setCursor(10, 50);  // Set cursor for the actual IP address
  tft.println("192.168.10.30");

  tft.setCursor(10, 70);  // Set cursor for "Browse it"
  tft.println("Browse it");
}

void loop() {
  // The loop function remains empty since we only want to display the text once.
}