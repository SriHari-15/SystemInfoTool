# System Info Tool
**System Info Tool** is a command-line application written in **C++**. This program is exclusively for **Linux** and it was written in KDE Neon. It provides real-time information on the following components:
- CPU Information
- Memory Usage
- Disk Space
- OS Details
- System Uptime
- GPU Information

All the information is displayed and logged in a file named `Sysinfo-<date>-<time>.log` for future reference.

**Note:** This program uses certain commands and functions that is available only in **Linux** and hence it will not work in Windows whatsoever!

---
### Features:
- **CPU Information**: Displays CPU model, cores, threads and other details from `/proc/cpuinfo`
- **Memory Information**: Shows total, free and used memory details from `/proc/meminfo`
- **Disk Space**: Shows available and used disk space from `/proc/mounts`
- **OS Information**: Provides OS Name, version and other system details from `/etc/os-release`
- **Uptime**: Displays the uptime
- **GPU Information:** Fetches the GPU information from `lspci` command
- **Logging**: Automatically generates a log file named `Sysinfo-<date>-<time>.log` which stores the output for later use

---
### Usage:
- Go to the releases tab and download the latest release
- Open terminal in the downloaded folder
- Run the program:
```
./SIT
```

---
### Building the project:
**Prerequisites:**
- Linux distro (Preferably Ubuntu-based. Haven't tested on others)
- Any C++ compiler - I used `g++`

**Steps to Build and Run:**
- Clone this repo
```
git clone https://github.com/SriHari-15/SystemInfoTool.git
```
- Build the project using `g++` or directly in VSCode. Ensure that you include **all** of the file names in your compilation!
```
g++ main.cpp CPUInfo.cpp MemoryInfo.cpp DiskInfo.cpp OSInfo.cpp UptimeInfo.cpp GPUInfo.cpp -o SIT
```
- Run the program
```
./SIT
```
The program will display system information on the console and create a log file in the format `SysInfo-YYYY-MM-DD-HH-MM-SS.log`

---
This is a one-off project, bugs or any other issues will most likely not be fixed.
