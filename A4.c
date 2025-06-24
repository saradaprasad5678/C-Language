//Iterative Control Statements
//1. Write a program to print MySirG 5 times on the screen
#include <stdio.h>
int main() {
    int i;
    for(i=1;i<=5;i++)
        printf("MySirG\n");
    return 0;
}

//2. Write a program to print the first 10 natural numbers.
#include <stdio.h>
int main() {
    int i;
    for(i=1;i<=10;i++)
        printf("%d\t",i);
    return 0;
}

//3. Write a program to print the first 10 natural numbers in reverse order
#include <stdio.h>
int main() {
    int i;
    for(i=10;i>=1;i--)
        printf("%d\t",i);
    return 0;
}

//4. Write a program to print the first 10 odd natural numbers
#include <stdio.h>
int main() {
    int i;
    for(i=1;i<=10;i++)
        printf("%d\t",2*i-1);
    return 0;
}

//5. Write a program to print the first 10 odd natural numbers in reverse order.
#include <stdio.h>
int main() {
    int i;
    for(i=10;i>=1;i--)
        printf("%d\t",2*i-1);
    return 0;
}
