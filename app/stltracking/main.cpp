#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

#include "vector_tracking.h"
#include "string_tracking.h"

void exampleTrackingVector(void)
{
    printf("==============================\n");
    printf("ExampleTrackingVector\n");
    printf("==============================\n");
    vector<uint32_t> vec;
    for (uint32_t i = 0; i < 10; i++)
    {
        vec.push_back(i);
    }
    printf("==============================\n");
    printf("\n");
}

void exampleTrackingString(void)
{
    printf("==============================\n");
    printf("ExampleTrackingString\n");
    printf("==============================\n");
    string s("This is a test string");
    s += "more data";
    printf("==============================\n");
    printf("\n");
}

int main(int /* argc */,const char ** /* argv */)
{
    exampleTrackingVector();
    exampleTrackingString();
	return 0;
}
