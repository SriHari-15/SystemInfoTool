#include "DiskInfo.h"
#include <fstream>
#include <sstream>
#include <iostream>

std::string getDiskInfo() {
    std::ifstream diskInfoFile("/proc/mounts");
    std::stringstream diskInfo;

    std::string line;
    while (std::getline(diskInfoFile, line)) {
        if (line.find("/dev/sda") != std::string::npos ||
            line.find("/dev/nvme0n1") != std::string::npos) {
            diskInfo << line << std::endl;
        }
    }

    diskInfoFile.close();
    return diskInfo.str();
}
