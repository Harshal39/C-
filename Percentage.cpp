#include <iostream>
#include<conio.h>
using namespace std;

int main() {
    float marks[5], total = 0.0;
    for (int i = 0; i < 5; i++) {
        cout << "Enter marks in subject " << i + 1 << ": ";
        cin >> marks[i];
        total += marks[i];
    }
    float percentage = total / 5.0;
    cout << "Percentage: " << percentage << "%" << endl;
    return 0;
}
