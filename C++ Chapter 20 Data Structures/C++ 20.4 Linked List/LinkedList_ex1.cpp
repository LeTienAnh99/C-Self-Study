// Linked List example from Youtube
#include <iostream>
#include <iomanip>
using namespace std;

struct Node
{
    int data;
    Node *next; // Tham chiếu đến phần tử tiếp theo
}; // Không cần biết kiểu dữ liệu của con trỏ là gì, nhưng kích thước của nó sẽ là 8byte
   // Do đó, struct có kích thước là 8 + 8 = 16 bytes

typedef struct Node* node; // Khai báo 1 tên ngắn gọn cho kiểu struct Node*

// Dynamic allocated a new node, take an integer x 
node makeNode( int x ) // Function
{   // Do đã dùng typedef r nên k cần cấp phát động = cú pháp thông thường như ở dưới:
    // Node *temp = new Node()
    node temp = new Node();
    temp->data = x; // -> access a data member using pointer (Vì temp là con trỏ nên k thể dùng dot operator để truy cập vào data member)
    temp->next = NULL;
    return temp;
}

// Kiểm tra rỗng
// Quản lí Linked List chỉ cần 1 node đầu tiên, node a tượng trưng cho node đầu tiên
// Ban đầu khi node đầu tiên chưa có phần tử nào, thì node đầu tiên trong danh sách sẽ là con trỏ NULL
bool checkEmpty( node a )
{
    return a == NULL;
} // End function checkEmpty()

// Đếm số phần tử trong list
int checkSize( node a ) // Nhận vào node đầu tiên
{
    int i = 0;
    while ( a != NULL )
    {
        ++i;
        a = a->next; // Lần lượt trỏ tới các node sau, cho tới khi gặp NULL thì dừng
    }
    return i; // Trả về i, tượng trưng cho số phần tử 
} // End function checkSize()

// Thêm 1 phần tử vào đầu Linked List
void insertFirst( node &a, int x )
{
    node temp = makeNode( x );
    if ( a == NULL ){
        a = temp;
    }
    else { // Trỏ temp vào a trước, rồi mới gán a = temp, khi đó mới thành 1 linked list dc
        temp->next = a; // Nếu thì a chỉ trỏ vào NULL, k liên kết dc vs list cũ
        a = temp;
    }
} // End function insertFirst()

// Thêm phần tử vào cuối list
void insertLast( node &a, int y )
{
    node temp = makeNode( y );
    if ( a == NULL ) {
        a = temp;
    }
    else {
        node p = a;
        while( p->next != NULL ) 
            p = p->next; // K đc dùng trực tiếp a, vì như vậy sẽ thay đổi toàn bộ list cũ
        p->next = temp;
    } // End if
} // End function insertLast() 

// Add new node at the middle of the list
void insertMiddle( node &a, int x, int pos )
{
    int n = checkSize( a );
    if ( pos <= 0 || pos > n + 1 ) // If position out of the list range
        cout << "Invalid position\n";

    // If add at the head or tail of linked list    
    if ( n == 1 )  // If add at the head of linked list
    {
        insertFirst( a, x );
        return;
    } // End if
    else if ( n == pos + 1 ) // If add at the tail
    {    
        insertLast( a, x );
        return;
    } // End else if

    // If add at a random position in the linked list
    node p = a;
    for ( int i = 1; i < pos - 1; ++i )
    {// Chỉ cần chạy tới pos - 1, vì p sẽ trỏ tới next tiếp theo, nếu chạy tới pos thì sẽ trỏ lố qua node sau
        p = p->next; 
    } // End for
    // Sau for loop, p đang ở vị trí pos - 1; p->next là vị trí pos; ví dụ pos = 3 thì pos - 1 = 2 (p ở vị trí 2)
    // **Nếu làm ngược lại thứ tự, sẽ sai vì mất hết list cũ ở sau
    node temp = makeNode( x );
    temp->next = p->next;
    p->next = temp;
} // End functon insertMiddle()

// Delete one node at the head
void deleteFirst( node &a )
{
    if ( a == NULL ) // Nếu rỗng thì k làm gì
        return;
    a = a->next; // Gán a vào phần tử 2
} // End function deleteFirst()

void deleteLast( node &a )
{
    if ( a == NULL );
        return;
    node pre = NULL;
    node following = a;
    while ( following->next != NULL )
    {
        pre = following;
        following = following->next;
    } // End while

    if ( pre == NULL ) { // List chỉ có 1 phần tử
        a = NULL;
    } // End if
    else {
        pre->next = NULL;
    } // End else
} // End function deleteLast()

void deleteMiddle( node &a, int pos )
{
    if ( pos <= 0 || pos > checkSize( a ) )
        return;
    node pre = NULL, following = a;
    for ( int i = 1; i < pos; ++i )
    {
        pre = following;
        following = following->next;
    } // End for
    
    // Nếu chỉ có 1 phần tử
    if ( pre == NULL )
        a = a->next;
    else {
        pre->next = following->next;
    } // End else
} // End function deleteMiddle

void printLinkedList( node a ) 
{
    cout << "-------------------\n";
    while ( a != NULL ) 
    {
        cout << a->data << setw( 4 );
        a = a->next;
    } // End while 
} // End function printLinkedList()

int main()
{
    int option; // Mode selection
    int data; // Value to be inserted
    int pos; // Position in the List

    node head = NULL; // Initialize the head node
    while( 1 ) // Loop until break
    {
        cout << "---------MENU---------\n";
        cout << "1. Insert first node\n";
        cout << "2. Insert last node\n";
        cout << "3. Insert middle node\n";
        cout << "4. Delete first node\n";
        cout << "5. Delete last node\n";
        cout << "6. Delete middle node\n";
        cout << "7. Print the Linked List\n";
        cout << "------------------------\n";

        cout << "Select option:\n";
        cin >> option;
        if ( option == 1 )
        {
            cout << "Insert value: ";
            cin >> data;
            insertFirst( head, data );
        } // End if

        else if ( option == 2 )
        {
            cout << "Insert value: ";
            cin >> data;
            insertLast( head, data );
        } // End else if

        else if ( option == 3 )
        {
            cout << "Insert data and position: ";
            cin >> data >> pos;
            insertMiddle( head, data, pos );
        } // End else if

        else if ( option == 4 )
        {
            cout << "First data is deleted: ";
            deleteFirst( head );
        } // End else if

        else if ( option == 5 )
        {
            cout << "Last data is deleted: ";
            deleteLast( head );
        } // End else if

        else if ( option == 6 )
        {
            cout << "Enter position to be deleted: ";
            cin >> pos;
            deleteMiddle( head, pos );
        } // End else if

        else if ( option == 7 )
        {
            cout << "The Linked List is: \n";
            printLinkedList( head );
        } // End else if
    } // End while

    return 0;
} // End main