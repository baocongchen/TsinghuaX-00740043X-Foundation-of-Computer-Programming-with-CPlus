#include <iostream>

using namespace std;

int main()
{
    long int total = 0;
    int inputs;
    cin >> inputs;
    int input;
    int maxValue;
    int minValue;
    if (inputs <= 100) {
        for (int i=0; i<inputs; i++) {
            cin >> input;
            if (i==0) {
                minValue = input;
                maxValue = input;
            } else {
                if (minValue >= input) {
                    minValue = input;
                } else {
                    if (maxValue < input) {
                        maxValue = input;
                    }
                }
                
            }
            
            total+=input;
        }
    cout << total << " " << minValue << " " << maxValue;
    }
    
    
   return 0;
}

