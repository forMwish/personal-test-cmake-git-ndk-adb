#include "MyMath.h"
#include <math.h>
#include <stdio.h>

int VectorMul(const int *src, int *kernel, int *des, 
                int src_len, int kernel_len, int step)
{
    int loop, i, j, temp;
    if ((src_len - kernel_len)%step != 0)
    {
        printf("src_len = %d\n", src_len);
        printf("kernel_len = %d\n", kernel_len);
        printf("there is wrong\n");
        return -1;
    }

    loop = (src_len - kernel_len)/step + 1;
    for(i = 0; i < loop; i++)
    {
        temp = 0;
        for(j = 0; j < kernel_len; j++)
        {
            temp += src[i*step + j] * kernel[j];
        }
        des[i] = temp;
    }
    return 0;
}