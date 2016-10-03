#include <iostream>
#include <iotDataQueue.h>

using namespace std;

//class is syntactically similar to a structure.
//The class is C++'s basic unit of encapsulation



int main()
{
    iotDataQueue temperature, humidity, pressure; //create two queue objects

    int pressureVar, pressureVar2;

    cout << "please Enter Pressure Values: ";
    cin >> pressureVar;
    cout << "Please enter a second value: ";
    cin >> pressureVar2;


    temperature.init();
    humidity.init();
    pressure.init();

    temperature.qput(10);
    humidity.qput(19);
    pressure.qput(pressureVar);

    temperature.qput(20);
    humidity.qput(1);
    pressure.qput(pressureVar2);


    cout << "Contents of Temperature queue: ";

    cout << temperature.qget() << " ";
    cout << temperature.qget() << "\n";

    cout << "Contents of Humidity queue: ";
    cout << humidity.qget() << " ";
    cout << humidity.qget() << "\n";

    cout << "Contents of Pressure queue: ";
    cout << pressure.qget() << " ";
    cout << pressure.qget() << "\n";

    return 0;
}
