#include <iostream>
#include <Windows.h>
#include "SerialClass.h"
using namespace std;

int main()
{
    Serial* Arduino = new Serial("COM4");

    while( Arduino->IsConnected() )
    {
        char StrSent    [] = "a";
        char StrReceived[] = "\0";

        cout << "-------------------" << endl;
        cout << "Arduino conected" << endl;

        Arduino->WriteData(StrSent, sizeof(StrSent)-1);
        cout << "Sent:" << StrSent << endl;

        Sleep(500);

        Arduino->ReadData(StrReceived, sizeof(StrReceived)-1);
        cout << "Received: " << StrReceived << endl;

        cout << "-------------------" << endl;
        Sleep(1000);
    }
    return(0);
}
