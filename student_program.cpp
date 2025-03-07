#include <stdio.h>

void GetMatrix( int value[], int *row, int *col ) ;

int main() {
    int r, c ;

    printf( "Enter the number of rows: " ) ;
    scanf( "%d", &r ) ;
    printf( "Enter the number of columns: " ) ;
    scanf( "%d", &c ) ;

    if ( r == 0 && c == 0 ) {
        printf( "Matrix:\n(Empty)\n" ) ;
        return 0 ;
    } else if ( r == 0 || c == 0) {
        printf( "Error: Invalid matrix dimensions.\n" ) ;
        return 0 ;
    }//end if

    int data[ r * c ] ;
    GetMatrix( data, &r, &c ) ;

    int count = 0 ;     //ตรวจสอบจำนวนสมาชิกในเมทริกซ์
    for ( int i = 0 ; i < r * c ; i++ ) {
        if ( data[ i ] != 0 ) {
            count++ ;
        }//end if

    }//end for

    if ( count < r * c ) {
        printf( "Error: Incorrect number of elements.\n" ) ;
        return 0 ;
    }//end if

    printf( "Matrix (%d x %d):\n", r, c ) ;     //แสดงผลเมทริกซ์
    for ( int i = 0 ; i < r ; i++ ) {
        for ( int j = 0 ; j < c ; j++ ) {
            printf( "%d ", data[ i * c + j ] ) ;
        }//end for

        printf( "\n" ) ;
    }//end for
    
    return 0 ;
}//end function main

void GetMatrix( int value[], int *row, int *col ) {
    printf( "Enter the matrix elements: " ) ;
    for ( int i = 0 ; i < *row ; i++ ) {
        for ( int j = 0 ; j < *col ; j++ ) {
            scanf( "%d", &value[ i * ( *col ) + j ] ) ;
        }//end for

    }//end for

}//end function GetMatrix
