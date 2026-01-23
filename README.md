🔐 Project Overview

Dharma Dwar – Celestial AI Gate is an advanced multimodal authentication system that combines computer vision, speech recognition, and hardware control to secure a physical door or gate.
Access is granted only when two conditions are satisfied simultaneously:

A specific hand gesture (closed-fist mudra) is detected via webcam

A spoken command (“open the door”) is recognized via microphone

This dual-factor approach ensures intentional, human-verified access, eliminating accidental or unauthorized triggers.

👁️ Computer Vision (Hand Gesture Authentication)

Built using MediaPipe Hands with real-time landmark tracking

Detects 21 hand landmarks per frame

Implements geometric logic to distinguish:

Closed fist (authorized mudra)

Open hand (unauthorized)

Visual HUD overlays show live gesture status for transparency

This acts as the visual key for access.

🎤 Voice Recognition (Speech Authentication)

Powered by Vosk Offline Speech-to-Text

Fully offline, no internet or cloud dependency

Continuously listens for voice input

Triggers only on the exact phrase:
“open the door”

This acts as the verbal key for access.

🔗 Multimodal Fusion Logic

Access is granted only when both conditions match at the same time

Voice command without correct gesture → ❌ denied

Gesture without voice command → ❌ denied

Correct gesture + correct voice → ✅ access granted

This design mimics high-security biometric systems used in real-world facilities.

🤖 Hardware Integration (Arduino Control)

Communicates with Arduino via Serial (USB)

Sends an OPEN command when authentication succeeds

Arduino handles:

Servo motor actuation

Gate opening, hold time, and closing sequence

System status is tracked as:

CLOSED → OPENING → OPEN (5s) → CLOSING → CLOSED

🌐 Web Application Interface

Built using Flask (Python backend)

Live MJPEG video streaming from webcam

Real-time status dashboard displaying:

Hand gesture state

Last recognized voice command

Gate/door status

Futuristic, mythological-tech themed UI for immersive interaction

⚙️ Technical Stack

Python

OpenCV (camera & rendering)

MediaPipe Hands (gesture detection)

Vosk (offline speech recognition)

Flask (web server & streaming)

Arduino + Servo Motor (physical gate control)

🧠 Key Design Principles

🔒 Dual-factor authentication (gesture + voice)

📴 Fully offline operation

🚫 No facial recognition or biometric storage

🎯 Intent-based access control

🧩 Modular and extensible architecture

🏛️ Applications & Use Cases

Smart doors and gates

Robotics and humanoid projects

Secure lab or room access demos

AI + IoT educational projects

Human–computer interaction research

🚀 Future Enhancements

Face presence validation (third factor)

Custom gesture registration

Multi-user access profiles

Encrypted serial communication

IoT/cloud access logs

⚠️ Disclaimer

This system is intended for educational and prototype purposes and demonstrates multimodal AI authentication concepts. It is not designed for high-risk security deployments without further hardening.
