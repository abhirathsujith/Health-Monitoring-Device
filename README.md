# HEALTH MONITORING AND ALERTING DEVICE 
 The project includes a pulse sensor and a temperature sensor to measure heart rate and body temperature respectively. The pulse sensor is connected to the server through a GSM module to track the patients' health. The message is sent to the phone.
 
 
\ REPORT \
 
 ABSTRACT OF THE PROJECT 

 

The heartbeat is a measurement of the intensity of the heart's pumping in beats per minute. The heart has pacemaker cells, by emitting electrical waves, produce cardiac rhythm in the right atrium, which then spreads throughout the heart, resulting in blood pumping. The human heart beats at a rate of 60 to 100 beats per minute, which varies depending on the circumstances. Any abnormal heartbeat is a form of cardiac illness that may be identified by humans by monitoring heartbeats in various ways. In this project, we present a heart rate measuring device in which infrared light is transmitted to the fingertip by an infrared sensor, which then reflects light on a Photodiode sensor, which is converted to a suitable signal by Signal Conditioning, and the suitable signal is sent to the microcontroller, in which the heart rate is measured by processing and analysis. 



INTRODUCTION

 
One of the most significant battles is health-related complications. Because of this deadlock, there is widespread aversion to managing health-related illnesses. Travel, workforce, and financial restrictions make hospital visits challenging. Such health-related challenges can be mitigated to some extent by designing and executing a thorough health monitoring system. In this research, we provided a patient monitoring system that is both simple to use and cost effective. The key elements of the proposed system are the heart beat sensor sensing module.


 

OBJECTIVE 

 

The device we suggested has the capability of identifying heart attacks by monitoring pulse and circulatory strain via the internet of things. Each customer will be equipped with a device.  

 

This system is similar to a wearable device that may be worn on the wrist and incorporates a sensor that monitors the pulse and even circulatory strain, allowing us to identify heart attack events.  

 

The sensor is a built-in device. When the device is worn on the wrist, it captures information such as heart rate in order to display the heartbeat. 

 

Heart rate monitoring is now maintained in hospitals and utilized in a variety of public and private settings. This is a little gadget that may easily be carried about. Other devices, such as a microcontroller, MATLAB software, and other compatible hardware and software, can be attached to the heart rate device. 

 
EXISTING PRODUCTS


1) Wearable fitness trackers 

Over the last decade, fitness trackers have grown in popularity as a convenient tool for individuals to track fitness objectives such as steps walked, kilometers done, and even more comprehensive statistics such as calories burnt and, yes, heart rate. 

  

Fitness tracker technology has advanced significantly, to the point that previous accuracy difficulties have mostly been resolved. As the technology has improved, the cost of these gadgets has decreased dramatically, allowing their popularity to increase. 

 

2) Models with a chest strap 

The most popular designs include two parts: a chest strap and a wristwatch receiver. Basic models provide time and heart rate as well as an open signal. 

  

Advanced types include a coded signal and may be used in conjunction with a foot pod to measure cadence, distance, and speed. Some are GPS-enabled, allowing users to mark and identify locations, as well as record prior courses and exercises. 

 
 

METHODOLOGY

 

The proposed technique works by sending infrared light through the bloodstream and measuring the heart rate. This sensor is put on the human fingertip and uses a heartbeat sensor to detect the heart rate. First, the sensor is mounted to a human fingertip, and blood is circulated to the fingertip while infrared light passes through the sensor to the photodiode through blood value to measure blood pressure, which is and sent to the Arduino microcontroller. The value of the sensor output is also shown in the LCD display by the Arduino controller. The photo diode and IR sensor in the heart beat sensor work together to measure the pulse and blood count for 30 seconds after IR is sent to the finger on one side and the photo diode receives the signal. The intensity of the blood decreases and increases, making it easy to determine if the heart is normal or abnormal. 

 

 

 

DETAILED DESCRIPTION OF THE DEVICE

 

HEARTBEAT SENSOR  

The Heartbeat Sensor's Principle 

 

The photo plethysmography principle is being used to operate the heartbeat sensor. It monitors the change in blood volume via any organ of the body that results in a change in the intensity of light passing through that organ  The timing of the pulses is more important in situations where the heart rate is being monitored. The rate of heart pulses determines the flow of blood volume, and because light is absorbed by blood, signal pulses are equivalent to heart beat pulses. 

 

 

ARDUNO UNO  

The ATmega328P microprocessor is used in the Arduino Uno microcontroller board. On the board, there are 14 digital input/output pins, six analogue inputs, a USB connection, a power connector, an ICSP header, and a reset button.  

 

 

LCD Module 

 

 LCDs (Liquid Crystal Displays) are utilized to show different system metrics and status. The LCD 16x2 is a 16-pin device that contains two rows of 16 characters apiece. The LCD 16x2 may operate in either 4-bit or 8-bit mode. Custom characters may be created as well. It includes eight data lines and three control lines for control purposes. 


GSM Module

Sim800L is being used in this project. The SIM800L module is a complete Quad-band GSM/GPRS solution in an LGA package that can be integrated in the client. It has a set of TTL level serial interfaces as well as a set of power supply interfaces. This module also has a series of antenna interfaces. When the speed exceeds the threshold value, the GSM module sends an SMS to the appropriate authorities listed on the number.

Arduino IDE

IDE stands for “Integrated Development Environment” it is an official software introduced by Arduino.cc, that is mainly used for editing, compiling and uploading the code in the Arduino Device. Almost all Arduino modules are compatible with this software that is an open source and is readily available to install and start compiling the code on the go.
 

CLAIMS 

When you use a heart rate monitor during a workout, you can track more than just how rapidly your heart is pumping. While you work out, you're burning energy, and you can tell out what energy source you're using by measuring your pulse rate. 

  

Your heart rate will increase as you burn more calories. However, because your body can't burn fat fast enough, the quicker your heart rate is, the more carbohydrates you burn for energy. Using a heart rate monitor during a workout, you may adjust your energy output to match your heart rate to the appropriate level for fat burning. 

 

 

 

NOVELTY

 

They provide continuous heart rate monitoring without the need to measure or monitor it and sends alert to the phone if BPM is high. This model have a higher level of accuracy. 

 

 

 



 
