#include <iostream>

using namespace std;

int main()
{
    int num, maxSpace;
    cin >> num;
    maxSpace = 2*num-1;
    if (num < 11) {
        for (int i=1; i<2*num-1; i+=2) {
            
            for ( int l=0; l<(2*num-1-i)/2; l++) {
                cout << ' ';
            }
            
            for (int j=0; j<i; j++) {
                
                cout << '*';
            }
            cout << '\n';
        }
        for (int i=2*num-1; i>0; i-=2) {
            
            for (int l=(2*num-1-i)/2; l>0; l--) {
                cout << ' ';
            }
            
            for (int j=i; j>0; j--) {
                cout << '*';
            }
            cout << '\n';
        }
        
    }
     
    return 0;
}

