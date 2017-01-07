#include <iostream>
#include <iotDataQueue.h>
#include <sensorData.h>

using namespace std;

//class is syntactically similar to a structure.
//The class is C++'s basic unit of encapsulation

int main()
{
    //initialise objects of type iotDataQueue
    iotDataQueue dataQueue;

    //initialise 2 objects of type sensorData.
    sensorData temperature, humidity;

    int dataIn;
    char temp;

    cout << "Press any key to access sensor data";
    temp = cin.get();
    //access the init method of the dataqueue object
    dataQueue.init();

    //keep looping until the queueFull method returns a 0;
    cout << "Setting up data queue \n";
    while(dataQueue.queueFull()){

    //access the dataGet method of the humidity object and store it in the dataIn variable
    dataIn = humidity.dataGet();
    dataQueue.qput(dataIn);
    dataIn = temperature.dataGet();
    dataQueue.qput(dataIn);

    }

    dataQueue.qDisplay();

    return 0;
}

