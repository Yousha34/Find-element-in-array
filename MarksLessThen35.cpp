#include<iostream>
using namespace std ;
int main(){

    int arr[10] = { 25, 54, 45, 44, 22, 84, 91, 27, 57, 10 } ;
    
    for( int i = 0; i <= 9; i++ ){

        if( arr[i] <= 35 ){
            cout << i << " " ;
        }

    }

    return 0;
}