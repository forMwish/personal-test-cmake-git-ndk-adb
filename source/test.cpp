#include <iostream>
#include "CmakeConfig.h"

int main(int argc, char** argv)
{
  if (argc < 2) {
    // report version
    std::cout << argv[0] << " Version " << Test_VERSION_MAJOR << "."
              << Test_VERSION_MINOR << std::endl;
    std::cout << "Usage: " << argv[0] << " number" << std::endl;
    return 1;
  }
}
