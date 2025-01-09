#include "GPUInfo.h"
#include <cstdlib>
#include <sstream>

std::string getGPUInfo() {
    std::string gpuInfo;
    char buffer[128];
    FILE* fp = popen("lspci | grep VGA", "r");
    if (fp == NULL) {
        return "Unable to retrieve GPU info.";
    }

    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        gpuInfo += buffer;
    }

    fclose(fp);
    return gpuInfo;
}
