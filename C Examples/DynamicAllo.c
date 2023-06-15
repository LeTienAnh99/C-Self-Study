// Dynamic Memory Allocation in C
#include <stdlib.h> // Thư viện này để cấp phát bộ nhớ động
#include <stdio.h>

int main()
{
    int n, i, *ptr, sum = 0;
    printf("Nhap so luong phan tu: ");
    scanf( "%d" , &n );
    ptr = ( int * )malloc( n * sizeof( int ) );

    // Nếu không thể cấp phát, 
    // hàm malloc sẽ trả về con trỏ NULL
    if ( ptr == NULL )
    {
        printf( "Co loi! khong the cap phat bo nho." );
        exit( 0 );
    }
    for ( i = 0; i < n; ++i )
    {
        printf( "Nhap gia tri %d: ", i + 1 ); 
        scanf( "%d", ptr + i );
        printf( "\n") ; 
        sum += *( ptr + i );
    }
    printf( "Tong = %d", sum );

    // Giải phóng vùng nhớ cho con trỏ
    free( ptr );
    return 0;
}