#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

#include "vector_tracking.h"

void exampleTrackingVector(void)
{
    vector<uint32_t> vec;
    for (uint32_t i = 0; i < 10; i++)
    {
        vec.push_back(i);
    }
}

int main(int /* argc */,const char ** /* argv */)
{
    exampleTrackingVector();
	return 0;
}
