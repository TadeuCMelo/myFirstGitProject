#include <iostream>

using namespace std;

const int dimensao = 10;

int arr3d[3][3][3] = { // 2d só leva a primeira fileira
    {{1,2,3},{1,2,3},{1,2,3}},
    {{1,2,3},{1,2,3},{1,2,3}},
    {{1,2,3},{1,2,3},{1,2,3}}
};


int main(){

    cout << arr3d [1][2][2] << endl;

    return 0;
}