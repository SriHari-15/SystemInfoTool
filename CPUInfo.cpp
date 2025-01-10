#include "CPUInfo.h"
#include <fstream>
#include <sstream>
#include <iostream>

std::string getCPUInfo() {
    std::ifstream cpuInfoFile("/proc/cpuinfo");
    std::stringstream cpuInfo;

    std::string line;
    while (std::getline(cpuInfoFile, line)) {
        if(line.find("model name") != std::string::npos) {
            cpuInfo << line << std::endl;
            break;
        }
    }

    while (std::getline(cpuInfoFile, line)) {
        if (line.find("cpu cores") != std::string::npos) {
            cpuInfo << line << std::endl;
            break;
        }
        
    }

    cpuInfoFile.close();
    return cpuInfo.str();
}