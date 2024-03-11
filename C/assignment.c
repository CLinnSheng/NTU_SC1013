#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#define MAX 5
#define REMOVE 100

typedef struct{

    int bookID;
    char title[40];
    char author[40];
    double price;
    int quantity;

} Book;

void listBooks(Book [], int);
int addBook(Book [], int *);
int removeBook(Book [], int *);
int findBook(Book [], int);
int updateBook(Book [], int);
Book input();
void sort(Book [], int);
int compare_str(char [], char []);
int checkBook(Book [], int *, char [], char [], int *);
void clear(Book []);

void sort(Book b[], int n){

    //through this automatically the removed book will be placed on the top
    //thus it wont get printed as the n also decrease by 1 at the same time
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - 1 - i; j++)
            if (b[j].bookID > b[j+1].bookID){

                Book temp = b[j];
                b[j] = b[j+1];
                b[j+1] = temp;

            }

}

void listBooks(Book b[], int n){

    puts("listBooks():");

    if (n == 0){
        puts("The bookshop is empty");
        return;
    }

    else
        for (int i = 0; i < n; i++)
            printf("BookID: %d\n"
                   "Book title: %s\n"
                   "Author name: %s\n"
                   "Book price: %.2lf\n"
                   "Quantity: %d\n", b[i].bookID, b[i].title, b[i].author, b[i].price, b[i].quantity);

}

Book input(){

    Book temp;
    char trash, *p;

    puts("Enter bookID:");
    scanf("%d", &temp.bookID);

    puts("Enter book title:");
    scanf("%c", &trash);
    fgets(temp.title, 40, stdin);
    if (p = strchr(temp.title, '\n'))
        *p = '\0';

    puts("Enter author name:");
    fgets(temp.author, 40, stdin);
    if (p = strchr(temp.author, '\n'))
        *p = '\0';

    puts("Enter price:");
    scanf("%lf", &temp.price);

    puts("Enter quantity:");
    scanf("%d", &temp.quantity);
   
    return temp;
}

int addBook(Book b[], int *n){

    //temp store because the question ask for input first before checking
    Book temp;
    
    puts("addBook():");

    temp = input();

    if (*n == MAX)
        return 0;

    //add the book first
    //we dont straight increase the value of n
    //if already existed, then the next time went in to this function *n will be remain the same
    b[*n] = temp;

    //check whether is it already exist in the list
    for (int i = 0; i < *n; i++)
        if (b[i].bookID == b[*n].bookID)
            return 1;

    //increase the value of n as we add it into the list
    *n += 1;
    return 2;    
}

int compare_str(char str[], char s_str[]){

    for (int i = 0; s_str[i] != '\0'; i++)
        s_str[i] = towlower(s_str[i]);

    if ( !(strcmp(str, s_str)) )
        return 10; //found
        
    return -1; //not found
}

int checkBook(Book b[], int *n, char name[], char title[], int *index){

    for (int i = 0; name[i] != '\0'; i++)
        name[i] = towlower(name[i]);
    
    for (int i = 0; title[i] != '\0'; i++)
        title[i] = tolower(title[i]);
    
    for (int i = 0; i < *n; i++){
        
		char author_temp[40]; char title_temp[40];
        strcpy(author_temp, b[i].author); strcpy(title_temp, b[i].title);

		if ( (compare_str(name, author_temp) == compare_str(title, title_temp)) && (compare_str(title, title_temp) == 10)){
			*index = i;
			return 10; //found
		}

    }

    return 1; //not found
}

int removeBook(Book b[], int *n){

    char name[40], title[40];
    char trash, *p;
    int index;

    puts("removeBook():");

    puts("Enter the target book title:");
    scanf("%c", &trash);
    fgets(title, 40, stdin);
    if (p = strchr(title, '\n'))
        *p = '\0';

    puts("Enter the target author name:");
    fgets(name, 40, stdin);
    if (p = strchr(name, '\n'))
        *p = '\0';

    //if empty
    if (*n == 0)
        return 0;

    //check whether the target book is in the list
    int check = checkBook(b, n, name, title, &index);

    if (check == 1)
        return check;     //not in the list

    else{
        
        puts("The target book is removed");
        printf("BookID: %d\n"
               "Book title: %s\n"
               "Author name: %s\n"
               "Book price: %.2f\n"
               "Quantity: %d\n", b[index].bookID, b[index].title, b[index].author, b[index].price, b[index].quantity);

        b[index].bookID = REMOVE;

        return 2;
    }
    
}

int findBook(Book b[], int n){

    char name[40], title[40];
    char trash, *p;
    int index;

    puts("findBook():");

    puts("Enter the target book title:");
    scanf("%c", &trash);
    fgets(title, 40, stdin);
    if (p = strchr(title, '\n'))
        *p = '\0';

    puts("Enter the target author name:");
    fgets(name, 40, stdin);
    if (p = strchr(name, '\n'))
        *p = '\0';

    int check = checkBook(b, &n, name, title, &index);

    if (check == 1)
        return 0; //book not found

    else{

        puts("The target book is found");
        printf("BookID: %d\n"
               "Book title: %s\n"
               "Author name: %s\n"
               "Book price: %.2f\n"
               "Quantity: %d\n", b[index].bookID, b[index].title, b[index].author, b[index].price, b[index].quantity);

    }

    return 100;
}

int updateBook(Book b[], int n){

    char name[40], title[40];
    char trash, *p;
    int index;
    
    puts("updateBook():");

    puts("Enter the target book title:");
    scanf("%c", &trash);
    fgets(title, 40, stdin);
    if (p = strchr(title, '\n'))
        *p = '\0';

    puts("Enter the target author name:");
    fgets(name, 40, stdin);
    if (p = strchr(name, '\n'))
        *p = '\0';
    
	int check = checkBook(b, &n, name, title, &index);
   
    if (check == 1)
        return 0;

    else{

	    double new_p;
	    int new_q;
	    
	    printf("Enter updated book price:\n");
	    scanf("%lf", &new_p);
	
	    printf("Enter updated quantity:\n");
	    scanf("%d", &new_q);
	    
        puts("The target book is updated");
        b[index].price = new_p; b[index].quantity = new_q;

        printf("BookID: %d\n"
               "Book title: %s\n"
               "Author name: %s\n"
               "Book price: %.2f\n"
               "Quantity: %d\n", b[index].bookID, b[index].title, b[index].author, b[index].price, b[index].quantity);
               
    }
    
    return 100;
}

void clear(Book b[]){
	
	for (int i = 0; i < MAX; i++)
		b[i].bookID = REMOVE;
	
}

int main(){

    int choice, r, qty = 0;
    Book books[MAX];
    clear(books);
	
    puts("NTU BOOKSHOP MANAGEMENT PROGRAM:");
    puts("1: listBooks()");
    puts("2: addBook()");
    puts("3: removeBook()");
    puts("4: findBook()");
    puts("5: updateBook()");
    puts("6: quit");
    printf("Enter your choice:\n");
    scanf("%d", &choice);

    while (choice != 6){

        int r;

        switch (choice){

            case 1:
                listBooks(books, qty);
                break;
            
            case 2:
                r = addBook(books, &qty);

                if (r == 0)
                    puts("The bookshop is full! Unable to addBook()");
                
                else if (r == 1)
                    puts("The bookID has already existed! Unable to addBook()");

                else if (r == 2){
                    puts("The book has been added successfully");
                    sort(books, qty);
                }

                break;

            case 3:
                r = removeBook(books, &qty);

                switch (r){

                    case 0:
                        puts("The bookshop is empty");
                        break;

                    case 1:
                        puts("The target book is not in the bookshop");
                        break;

                    case 2:
                        sort(books, qty);
                        qty--;  //decrease after sort to prevent printing the removed book
                        break;
                }

                break;

            case 4:
                r = findBook(books, qty);

                if (r == 0)
                    puts("The target book is not found");
                        
                break;

            case 5:
                r = updateBook(books, qty);

                if (r == 0)
                    puts("The target book is not in the bookshop");
                
                break;
            
            case 6:
                return 0;

        }

        printf("Enter your choice:\n");
        scanf("%d", &choice);

    }

    return 0;
}
