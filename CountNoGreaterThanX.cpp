#include<iostream>
using namespace std ;
int main (){

    int i, size, count = 0 ;

    cout << "Enter an integer : " ;
    cin >> i ;

    cout << "Enter size of array : " ;
    cin >> size ;

    int arr[size] ;

    for( int j = 0; j < size; j++ ){

        cout << "Enter " << j+1 << " element of array : " ;
        cin >> arr[j] ;
            
        if( arr[j] > i ){
        count++ ;
        }

    }
        
    cout << count ;

    return 0 ;
}