/*Floyd's Triangle Pattern*/

#include <iostream>
 using namespace std;

 int main(){

    int n = 4;
    int temp = 1;

    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
           cout << temp << " ";
           temp++;
        }

        cout << endl;
    }

    return 0;
 }