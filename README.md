
# DHT11 for Mood Stabilizer

This idea came up when I  don't feel comfortable when the 
temperature gets hot 
it makes me not want to do anything because my mood 
worsens. So, I ended up doing this project that is 
DHT11, for Mood Stabilizer.




## Getting Started

First, Install PySerial. You can install this library
in Annaconda Prompt or Jupyter Notebook. This library 
for facilitates serial 
communication. So, a computer can communicate with 
external hardware and arduino. 
```bash
  !pip install pyserial
```
 To use the new virtual environment arduino, 
 you need to first activate it by typing on python.
```bash
conda activate arduino
```

After you install then install library for DHT11 sensor. You
can click this [DHT sensor library](https://www.arduino.cc/reference/en/libraries/dht-sensor-library/)
then choose the latest version.

### Collect the hardware
    1. Arduino Uno
    2. Jumper Wires - Male to Female
    3. DHT11

### Wire a DHT11 to the arduino


### Write an Arduino Script to upload to the Arduino Uno
```bash
#include "DHT.h"

//Initialise DHT Library and define data pin
#define DHTTYPE DHT11
#define DHTPIN 4 
DHT dht(DHTPIN,DHTTYPE);

//Variables to store temp and hum data


void setup()
{
  Serial.begin(9600);  
  dht.begin();
  int temp = dht.readTemperature();
  Serial.println(temp);
}

void loop()
{

}
```
### Write a Python Script to read the temperature and play music
```bash
import serial
import webbrowser

ser = serial.Serial('COM6', 9600)

k = ser.readline().decode()
s =  int(k)

if (s > 20 and s < 29):
    print("Suhu Normal!")
    print(s)
    webbrowser.open('https://music.youtube.com/watch?v=xQ1aUU5SxNo&list=RDAMVM9PQQ4LYf60M')

elif s >= 29:
    print("Suhu yang Panas!")
    print(s)
    webbrowser.open('https://music.youtube.com/watch?v=qQ_W1w9v-2Y&list=RDAMVMqQ_W1w9v-2Y')
```

### It's done 🎉| Run The Code
Run ```DHT11PY3.ipynb``` file with python 3 and you should see the music youtube pop up, if you have followed each step correctly.

## Demonstration
[Video](https://youtu.be/T0Xy6wBuItM) 
