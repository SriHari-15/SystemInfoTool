#include "OSInfo.h"
#include <fstream>
#include <sstream>

std::string getOSInfo() {
    std::ifstream osInfoFile("/etc/os-release");
    std::stringstream osInfo;

    std::string line;
    while (std::getline(osInfoFile, line)) {
        osInfo << line << std::endl;
    }

    osInfoFile.close();
    return osInfo.str();
}
