#include "UptimeInfo.h"
#include <fstream>
#include <sstream>

std::string getUptimeInfo() {
    std::ifstream uptimeFile("/proc/uptime");
    std::stringstream uptimeInfo;

    std::string line;
    std::getline(uptimeFile, line);
    uptimeInfo << line << " seconds" << std::endl;

    uptimeFile.close();
    return uptimeInfo.str();
}
