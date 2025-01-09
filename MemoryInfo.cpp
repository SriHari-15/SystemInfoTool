#include "MemoryInfo.h"
#include <fstream>
#include <sstream>

std::string getMemoryInfo() {
    std::ifstream memInfoFile("/proc/meminfo");
    std::stringstream memInfo;

    std::string line;
    while (std::getline(memInfoFile, line)) {
        if (line.find("MemTotal") != std::string::npos ||
            line.find("MemFree") != std::string::npos ||
            line.find("Buffers") != std::string::npos) {
            memInfo << line << std::endl;
        }
    }

    memInfoFile.close();
    return memInfo.str();
}