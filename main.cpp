//COMSC-210 | Lab 12 | Hannah Saeed
//IDE: VS Code

#include <iostream>
#include <fstream>
#include <algorithm>
#include <numeric>
#include <array>
using namespace std;

const int SIZE = 30;

int main(){
    array<int, SIZE> mph;

    ifstream fin;
    fin.open("mph.txt");
    if (fin.good()){
        for(int i = 0; i < SIZE;  i++){
            fin >> mph[i];
        }
        fin.close();
        cout << "mph in zones nearby:" << endl;
        for(int i = 0; i < SIZE; i++){
            cout <<mph[i] << " ";
        }
    }


 
    return 0;
}