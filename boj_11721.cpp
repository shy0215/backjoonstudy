#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string input;
    getline(cin, input);
    for (int i = 0; i<input.size(); i++){
        cout << input[i];
        if(i % 10 == 9){
            cout << "\n";
        }
    }
}