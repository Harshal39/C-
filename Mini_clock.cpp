#include <iostream>
#include <unistd.h>
#include <windows.h>
using namespace std;
int main()
{
    int hr = 0, min = 0, sec = 0;
    while (true)
    {
        system("cls");
        cout << "\t**********************\n";
        cout << "\t"  << hr << " : " << min << " : " << sec << endl;
        cout << "\t**********************";
        sec++;
        if (sec == 60)
        {
            min++;
            sec = 0;
            if (min == 60)
            {
                hr++;
                min = 0;
                if (hr == 60)
                {
                    hr = 0;
                }
            }
        }
     sleep(1);   
    }
    return 0;
}