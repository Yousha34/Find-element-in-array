#include <iostream>
using namespace std ;
int main(){

    int size ;
    
    cout << "Enter size : " ;
    cin >> size ;

    int arr[size] ;

    for( int j = 0; j < size; j++ ){

        cout << "Enter " << j+1 << " element of array : " ;
        cin >> arr[j] ;
        
    }

    for( int j = 0; j < size; j++ ){

        for( int k = j+1; k < size; k++ ){

            if( arr[j] == arr[k] ){

                cout << arr[j] << " is the duplicate element\n" ;
                break ;

            }
        }
    }

    return 0 ;
}