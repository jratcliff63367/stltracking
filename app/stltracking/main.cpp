#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

#include "vector_tracking.h"
#include "string_tracking.h"
#include "map_tracking.h"
#include "unordered_map_tracking.h"

void exampleTrackingVector(void)
{
    vector<uint32_t> vec;
    for (uint32_t i = 0; i < 10; i++)
    {
        vec.push_back(i);
    }
}

void exampleTrackingString(void)
{
    string s("This is a test string");
    s += "more data";
}

void exampleTrackingMap(void)
{
    map< uint32_t, uint32_t > testMap;
    testMap[1] = 1;
    testMap[3] = 2;
    testMap[4] = 3;
    testMap[5] = 4;
}

void exampleTrackingUnorderedMap(void)
{
    unordered_map< uint32_t, uint32_t > testMap;
    testMap[1] = 1;
    testMap[3] = 2;
    testMap[4] = 3;
    testMap[5] = 4;
}

int main(int /* argc */,const char ** /* argv */)
{
    printf("==============================\n");
    printf("ExampleTrackingVector\n");
    printf("==============================\n");
    exampleTrackingVector();
    printf("==============================\n");
    printf("\n");

    printf("==============================\n");
    printf("ExampleTrackingString\n");
    printf("==============================\n");
    exampleTrackingString();
    printf("==============================\n");
    printf("\n");

    printf("==============================\n");
    printf("ExampleTrackingMap\n");
    printf("==============================\n");
    exampleTrackingMap();
    printf("==============================\n");
    printf("\n");

    printf("==============================\n");
    printf("ExampleTrackingUnorderedMap\n");
    printf("==============================\n");
    exampleTrackingUnorderedMap();
    printf("==============================\n");
    printf("\n");

	return 0;
}
