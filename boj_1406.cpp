#include <iostream>
#include <string>
#include <list>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int m;
    string input;
    string output;
    cin >> input;
    list<char> list(input.begin(), input.end());
    auto pointer = list.end();
    cin >> m;
    for(int i = 0; i < m ; i++){
        char cmd, cha; 
        cin >> cmd; 
        if( cmd == 'L'){
            if (pointer != list.begin())
            pointer --;
        }
        else if( cmd == 'D'){
            if (pointer != list.end())
            pointer ++;
        }
        else if( cmd == 'B'){
            if( pointer != list. begin()){
                pointer--;
                pointer = list.erase(pointer);
            }
        }
        else if( cmd == 'P'){
            cin >> cha;
            list.insert(pointer, cha);
        }
    }
    for (pointer = list.begin(); pointer != list.end(); pointer ++){
        cout << *pointer;
    }
    return 0;
}