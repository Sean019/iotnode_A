#include "iotDataQueue.h"

using namespace std;

#include <iostream>

iotDataQueue::iotDataQueue()
{
    //ctor
}

iotDataQueue::~iotDataQueue()
{
    //dtor
}

void iotDataQueue::init()
{
    rloc = sloc = 0;
}

void iotDataQueue::qput(int i)
{
    if(sloc>=10){
        cout << "queue is full. \n";
        return;
    }
    q[sloc] = i;
    sloc++;

}

int iotDataQueue::qDisplay()
{
    cout << "Data Queue is full \n";
    int i;
    for(i = 0;i < 10; i++){

        cout <<"Sensor reading " << i+1 << " is " << q[i] << "\n";

    }

    return 0;
}

int iotDataQueue::queueFull()
{
    if(sloc == 10){
       return 0;
    }

    return 1;
}

