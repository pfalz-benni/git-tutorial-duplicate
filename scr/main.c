#include<stdio.h>
#include<espl_lib.h>

int main(int argc, char* argv[]) {
    printf("Hello ESPL");
    
    unsigned int inputNumber;
    char enterAnotherNumber = 'y';

    do {
        printf("\nPlease enter a number to convert into a word: ");
        scanf("%u", &inputNumber);
        getchar(); //scanf() leafes a \n in the input buffer. getchar() cleans it up
        printf("%s\n", num_to_words(inputNumber));

        printf("Do you want to enter another number? (y/n) ");
        scanf("%c", &enterAnotherNumber);
        getchar();
    } while(enterAnotherNumber == 'y');
}