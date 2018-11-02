#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

#include "vector_tracking.h"
#include "string_tracking.h"
#include "map_tracking.h"
#include "unordered_map_tracking.h"
#include "unordered_set_tracking.h"
#include "list_tracking.h"
#include "queue_tracking.h"

void exampleTrackingVector(void)
{
    stdt::vector<uint32_t> vec;
    for (uint32_t i = 0; i < 10; i++)
    {
        vec.push_back(i);
    }
}

void exampleTrackingString(void)
{
    stdt::string s("This is a test string");
    s += "more data";
}

void exampleTrackingMap(void)
{
    stdt::map< uint32_t, uint32_t > testMap;
    testMap[1] = 1;
    testMap[3] = 2;
    testMap[4] = 3;
    testMap[5] = 4;
}

void exampleTrackingUnorderedMap(void)
{
    stdt::unordered_map< uint32_t, uint32_t > testMap;
    testMap[1] = 1;
    testMap[3] = 2;
    testMap[4] = 3;
    testMap[5] = 4;
}

void exampleTrackingUnorderedSet(void)
{
    stdt::unordered_set< uint32_t > testMap;
    testMap.insert(1);
    testMap.insert(2);
    testMap.insert(3);
    testMap.insert(4);
}

void exampleTrackingUnorderedSetString(void)
{
    stdt::unordered_set< stdt::string > testMap;
    testMap.insert(stdt::string("bob"));
    testMap.insert(stdt::string("steve"));
    testMap.insert(stdt::string("fred"));
}

void exampleTrackingList(void)
{
    stdt::list< uint32_t > testMap;
    testMap.push_back(1);
    testMap.push_front(2);
    testMap.push_back(3);
    testMap.push_front(4);
}

void exampleTrackingQueue(void)
{
    stdt::queue< uint32_t > testMap;
    testMap.push(1);
    testMap.push(2);
    testMap.push(3);
    testMap.push(4);
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

    printf("==============================\n");
    printf("ExampleTrackingUnorderedSet\n");
    printf("==============================\n");
    exampleTrackingUnorderedSet();
    printf("==============================\n");
    printf("\n");

    printf("==============================\n");
    printf("ExampleTrackingList\n");
    printf("==============================\n");
    exampleTrackingList();
    printf("==============================\n");
    printf("\n");

    printf("==============================\n");
    printf("ExampleTrackingQueue\n");
    printf("==============================\n");
    exampleTrackingQueue();
    printf("==============================\n");
    printf("\n");


	return 0;
}
