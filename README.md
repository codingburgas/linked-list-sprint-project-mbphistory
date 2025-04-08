[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/fMNqOIZ8)

<p align="center">
  <img src="resources/logo.png" alt="Project Logo" width="150">
</p>

# <img src="resources/trophy_icon.png" alt="Trophy Icon" width="32"> MBPHistory

### A C++ Historical Events Manager using Linked Lists & ncurses

## Our Team

- **Milko Barev**
- **Kaloyan Iliev**
- **Kristiyan Dimitrov**
- **Ivailo Gyurov**

## About the App

**MBPHistory** is a C++ application designed for registering and managing historical events using linked lists.  
Key features include:
- **Adding events**: at the beginning, at the end, or sorted by event date (month/year or year).
- **Editing & deleting events**: locate events by date and update or remove them.
- **Searching**: find events by date or topic.
- **Reports**: generate various reports (e.g., brief list of events, detailed view, and themed reports).

The user interface is built using **ncurses** to provide an interactive, text-based menu system.  
This project is designed to run on Linux (or via WSL on Windows) and adheres to the technical assignment requirements.

## Setup & Installation

### Windows (WSL) Dependencies:
- **CMake** (must be installed on both the host OS and in WSL)
- **CLion** (Note: The project does not work on VS2022 due to a known issue)
- **WSL** (Windows Subsystem for Linux – preferably Ubuntu)
    - [WSL Installation Guide](https://learn.microsoft.com/en-us/windows/wsl/install)

### Linux (WSL) Dependencies:
- **cmake, gcc, clang, gdb, build-essential, ncurses, make**  
  *(Install using your distribution’s package manager, e.g., `apt` for Ubuntu.)*

### Opening the Project in CLion:
1. Open **CLion** and select the `CMakeLists.txt` file from the project directory.
2. Choose **Open as Project** if prompted.
3. Go to **Run/Debug Configurations** and enable **Emulate terminal in the output console** so that the ncurses interface works correctly.
4. (Optional) Adjust the **Line Height** in the Editor settings (set to 1.0) for optimal display.

### Building Outside of CLion:
1. Open a WSL terminal and navigate to the project directory.
2. Run:
   ```bash
   cmake .
   make
   ```
3. An executable named `mbphistory` (or similar) should be created.
4. Run the application with:
   ```bash
   ./mbphistory

## Documents
<h4>Documentation</h4>
  <ul>
    <li> <a href="./Documentation/Documentation-MBPHistory.docx">Documentation</a></li>
  </ul> 
  <h4>Presentation</h4>
  <ul>    
    <li><a href="./Documentation/MBP_PRESENTATION.pptx">Presentation</a></li>
  </ul>

<h4>QA Documentation</h4>
  <ul>    
    <li><a href="./Documentation/MPBHistory%20QA%20Documentation.xlsx">QA Documentation</a></li>
  </ul>
  
## Used Technologies

### Code & Collaboration:
[![CLion](https://skillicons.dev/icons?i=clion,linux,github,git)](https://skillicons.dev)

### Programming:
<img src="resources/C++_icon_light.png#gh-dark-mode-only" alt="C++ icon" width="32">
<img src="resources/C++_icon_dark.png#gh-light-mode-only" alt="C++ icon" width="32">

### Documentation & Communication:
<img src="resources/word_logo_big.png" alt="Word Logo" width="32">
<img src="resources/powerpoint_logo_big.png" alt="PowerPoint Logo" width="32">
<img src="resources/microsoft_teams_logo.png" alt="Teams Logo" width="32">
<img src="resources/Excel.png" alt="Excel Logo" width="32">

