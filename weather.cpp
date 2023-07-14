#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(NULL));

    cout << "Name:Yamini Aruna"<<endl;
    cout <<" CollegeName:Vivekanadha College of Engineering For Women "<<endl;
    cout << "Email:yamini@gmail.com "<<endl;
   
    cout << "Please enter your location: ";
    string location;
    getline(cin, location);

    string weather[] = {"Cloudy", "arid", "Rainy", "Thunderstorm", "Heatwaves"};
    int index = rand() % 5;
    string prediction = weather[index];

    string weather1[] = {"Cloudy", "arid", "Rainy", "Thunderstorm", "Heatwaves"};
    int index1 = rand() % 5;
    string prediction1 = weather1[index1];

    string weather2[] = {"Cloudy", "arid", "Rainy", "Thunderstorm", "Heatwaves"};
    int index2 = rand() % 5;
    string prediction2 = weather2[index2];

    string weather3[] = {"Cloudy", "arid", "Rainy", "Thunderstorm", "Heatwaves"};
    int index3 = rand() % 5;
    string prediction3 = weather3[index3];

    cout << "\t Today's weather in " << location << " is " << prediction << endl;
    cout << "\t Yesterday's weather in " << location << " was " << prediction1 << endl;
    cout << "\t Tomorrow's weather in " << location << " will be " << prediction2 << endl;
    cout << "\t Weekly report in " << location << " could " << prediction3 << endl;

    return 0;
}
