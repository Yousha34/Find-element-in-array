#include<iostream>
using namespace std ;
int main(){

    int size, difference, even = 0, odd = 0 ;

    cout << "Enter size : " ;
    cin >> size ;

    int arr[size] ;

    for( int j = 0; j < size; j++ ){

        cout << "Enter " << j+1 << " element of array : " ;
        cin >> arr[j] ;

        if( j % 2 == 0 ){
            even += arr[j] ;
        }
        else{
            odd += arr[j] ;
        }

    }

    difference = even - odd ;
    cout << "The difference is : " << difference ;

    return 0 ;
}