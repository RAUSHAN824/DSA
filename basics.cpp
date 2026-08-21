#include<iostream>
using namespace std;
int main(){
    int n = 4;   // number of rows
    int i, j;

    for(i = 1; i <= n; i++){
        // Step 1: spaces for centering
        for(j = 1; j <= n - i; j++){
            cout << " ";
        }

        // Step 2: left half - A to current letter (increasing)
        for(j = 0; j < i; j++){
            char ch = 'A' + j;
            cout << ch;
        }

        // Step 3: right half - mirror back to A (decreasing)
        for(j = i - 2; j >= 0; j--){
            char ch = 'A' + j;
            cout << ch;
        }

        cout << endl;
    }

    return 0;
}