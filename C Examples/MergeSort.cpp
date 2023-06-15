// Merge Sort algorithm
#include <iostream>
#include <iomanip>
using namespace std;
// NOTE: PHẢI DÙNG DYNAMIC MEMORY ALLOCATION, VÌ COMPILER YÊU CẦU SIZE1, SIZE2 PHẢI LÀ KÍCH THƯỚC CỐ ĐỊNH (VÀ PHẢI KHAO BÁO TRƯỚC)
void merge( int arr[], int const left, int const right, int const middle )
{
    int i, j, k; // i là phần tử mảng con left, j là phần tử mảng con right, k là phần tử mảng merge
    const int size1 = middle - left + 1; // Size của mảng con left
    const int size2 = right - middle; // Size của mảng con right
    
    // Tạo các mảng con left, right:
    int *leftArray = new int[ size1 ];
    int *rightArray = new int[ size2 ];
    // Copy các phần tử vào mảng con left, right
    for ( int i = 0; i < size1; ++i )
        leftArray[ i ] = arr[ left + i ];
    for ( int j = 0; j < size2; ++j )
        rightArray[ j ] = arr[ middle + 1 + j ];
    
    // Gộp hai mảng tạm vừa rồi vào mảng arr (mảng merge)
    int indexLeft = 0; // Khởi tạo chỉ số bắt đầu của mảng con đầu tiên
    int indexRight = 0; // Khởi tạo chỉ số bắt đầu của mảng con thứ hai
    int mergeIndex = left; // Khởi tạo chỉ số bắt đầu của mảng arr (mảng merge)

    while ( indexLeft < size1 && indexRight < size2 )
    { // Tiến hành so sánh các phần tử giữa 2 mảng con, sắp xếp và gắn vào mảng merge
        if ( leftArray[ indexLeft ] <= rightArray[ indexRight ] )
        {
            arr[ mergeIndex ] = leftArray[ indexLeft ];
            ++indexLeft;
        }
        else
        {
            arr[ mergeIndex ] = rightArray[ indexRight ];
            ++rightArray;
        }
        ++mergeIndex;
    } // End while

    // Copy các phần tử còn lại của mảng leftArray vào arr nếu có 
    while ( indexLeft < size1 )
    {
        arr[ mergeIndex ] = leftArray[ indexLeft ];
        ++indexLeft;
        ++mergeIndex;
    }
    // Copy các phần tử còn lại của mảng rightArray vào arr nếu có 
    while ( indexRight < size2 )
    {
        arr[ mergeIndex ] = rightArray[ indexRight ];
        ++indexRight;
        ++mergeIndex;
    }

    // Deallocate memory
    delete[] leftArray;
    delete[] rightArray;
} // End function merge

void mergeSort( int arr[], int const left, int const right )
{   // l là chỉ số left, right là chỉ số rigth (NOTE: k phải là giá trị của phần tử array[l] và array[r])
    // (Ví dụ: mảng có 10 phần tử, thì vị trí phần tử đầu tiên của mảng là 0 (l=0), vị trí phần tử cuối của mảng là 9 (r=9))
    // Base case để dùng recursion:
    if ( left >= right )
        return;

    int middle = ( left + right ) / 2; // Chia đôi mảng cha thành 2 mảng con

    mergeSort( arr, left, middle ); // Recursive, chia đôi mảng con, từ left tới middle
    mergeSort( arr, middle + 1, right ); // Recursive, chia đôi mảng con, từ middle tới right
    
    // Sau khi chia đôi 2 mảng tới khi các mảng con chỉ còn 1 phần tử (base case), tiến hành so sánh, sắp xắp ascending và merge
    merge( arr, left, right, middle );
} // End function mergeSort

void printArray( int arr[], int size )
{
    for ( int i = 0; i < size; ++i )
        cout << setw( 3 ) << arr[ i ];
} // End function printArray

int main()
{
    const int arraySize = 10;
    int a[ arraySize ] = { 10, 22, 2, 35, 8, 6, 42, 14, 7, 3 };

    int l = 0; // Left index of array a[]
    int r = 9; // Right index of array a[]

    cout << "Original array: " << endl;
    printArray( a, arraySize );

    mergeSort( a, l, r );
    cout << "\nSorted array: \n";
    printArray( a, arraySize );

}