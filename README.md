# Piano Sustain Pedal → Google Meet Mute Controller

Convert a piano sustain pedal into a USB HID (Human Interface Device) to control mute/unmute in Google Meet and other online meeting platforms in a hands-free manner.
youtube link - https://youtu.be/XOG5tDjzbpw?si=t-NqWyFVjxtOgFKC
---

## Overview

Refer this link for more details:  
https://www.instructables.com/Sustain-Pedal-Mute-Un-Mute-for-Google-Meet/

This project uses a piano sustain pedal and a microcontroller with USB HID support to toggle the microphone state using a foot press instead of a keyboard.

---

## Features

- Hands-free mute/unmute control  
- Plug-and-play USB HID device  
- Works with Google Meet, Zoom, MS Teams (customizable shortcuts)  
- Low-cost and easy to build  
- No additional software required  

---

## How It Works

1. The sustain pedal acts as a switch  
2. When pressed, the microcontroller detects input  
3. It sends a keyboard shortcut (e.g., `Ctrl + D`) via USB HID  
4. The meeting application toggles mute/unmute  

---

## Hardware Required

- Piano Sustain Pedal  
- Microcontroller (Arduino / STM32 with USB HID support)  
- USB Cable  

---

## Circuit

The sustain pedal is connected as a digital input to the microcontroller.  
When pressed, it completes the circuit and triggers the HID command.

circuit diagram on link - https://www.instructables.com/Sustain-Pedal-Mute-Un-Mute-for-Google-Meet/

---

## Software

- Arduino IDE / STM32CubeIDE  
- USB HID library (Keyboard emulation)

---

## Key Mapping

| Action        | Shortcut    |
|--------------|------------|
| Mute/Unmute  | Ctrl + D   |

(Customizable for different platforms)

---

## Applications

- Online teaching  
- Presentations  
- Meetings and webinars  
- Content creation  

---

## Contributing

Contributions, improvements, and suggestions are welcome.

---

## License

This project is open-source and can be modified as needed.
