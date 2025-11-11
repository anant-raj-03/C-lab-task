#include<stdio.h>
#include<string.h>

struct Books {
    char title [50];
    char author[10];
    char publisher[20];
    int page_no;
    float price;
    char edition[40];

};
void print_book(struct Books book);
void print_book(struct Books book)
{
    printf("Book title: %s \n, book.title");
    printf("Book author: %s \n, book.author");
    printf("Book publisher: %s \n, book.publisher");
    printf("Book page_no: %d \n, book.page_no");
    print("Book price: %2f \n, book.price");
}
int main(){
struct Books book1; struct Books book2; struct Books book3;
print_book(book1);
print_book(book2);
print_book(book3);

strcpy(book1.title,"The C Programming Language");
strcpy(book2.title,"The C++ Programming Language");
strcpy(book3.title,"The Python Programming Language");

return 0;
}


