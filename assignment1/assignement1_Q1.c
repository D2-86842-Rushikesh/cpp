 #include<stdio.h>

/*Q1. Write a menu driven program for Date in a C. Declare a structure Date having data members 
day, month, year. Implement the following functions.
void initDate(struct Date* ptrDate);
void printDateOnConsole(struct Date* ptrDate);
void acceptDateFromConsole(struct Date* ptrDate);*/

struct Date {
    int day;
    int month;
    int year;

};
void initDate(struct Date* ptrDate){
    ptrDate->day = 1;
    ptrDate->month = 1;
    ptrDate->year = 2024;
}
void printDateOnConsole(struct Date* ptrDate){
    printf("Date : %d-%d-%d \n",ptrDate->day, ptrDate->month, ptrDate->year);

}
void acceptDateFromConsole(struct Date* ptrDate){
    printf("Enter the day : month :year \n");
    scanf("%d%d%d",&ptrDate->day, &ptrDate->month, &ptrDate-> year);
}

int menu(){
    int choice;
    printf("0 --> Exit \n");
    printf("1 --> initDate \n");
    printf("2 --> acceptDateFromConsole \n");
    printf("3 --> printDateOnConsole \n ");
    printf("Enter the chioce :");
    scanf("%d",&choice);
    return choice;
}

int main(){
    struct Date d1;
    int choice;


    while((choice = menu()) != 0 ){
        switch (choice)
        {
        case 1 :
             initDate(&d1); 
             printDateOnConsole(&d1); 
            break;
        case 2 :  
             acceptDateFromConsole(&d1);
            break;
        case 3 : 
            printDateOnConsole(&d1); 
            break;
    
        default:
            printf("Wrong Choice");
        }
    }


    return 0;
}