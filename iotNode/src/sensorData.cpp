#include "sensorData.h"
#include <stdlib.h>
#include <iostream>
//include time to initialise srand with a different seed every time the program is run
#include <time.h>

using namespace std;

sensorData::sensorData()
{
    //ctor
    srand (time(NULL));
}

sensorData::~sensorData()
{
    //dtor
}

int sensorData::dataGet()
{

    int data = rand()% 100;
    //cout << data << "\n";
    return data;

}
