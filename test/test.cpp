#include <iostream>
#include <cstdlib>

#include "CmakeConfig.h"
#include "MyMath.h"

int main(int argc, char** argv)
{
    int src_array[1000];
    int des_array[1000];
    int kernel[10] = {  1, 4, 2, 2, 5,
                        2, 6, 8, 3, 7};
    int i;
    for(i = 0; i < 1000; i++)
    {
        src_array[i] = rand()%100;
    }

    VectorMul(src_array, kernel, des_array, 1000, 10, 1);
    for(i = 0; i < 10; i++)
    {
        printf("%d ", des_array[i]);
    }
    printf("\n");

    if (argc < 2) 
    {
    // report version
        std::cout << argv[0] << " Version " << Test_VERSION_MAJOR << "."
                << Test_VERSION_MINOR << std::endl;
        std::cout << "Usage: " << argv[0] << " number" << std::endl;
        return 1;
    }
}
