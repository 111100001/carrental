#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//     • A menu that lets a user choose whether to add a new customer or a new vehicle, print all customers’ or vehicles’ information, or exit the program, like the one shown here:
// Choose one of the following options:
// 1 - to add a new customer
// 2 - to add a new vehicle
// 3 - to print all customers’ information
// 4 - to print all vehicles’ information
// 5 - to quit

int main()
{
    int choice;
    
    while(choice != 5)
    {
        printf("Choose one of the following options:\n1 - to add a new customer\n2 - to add a new vehicle\n3 - to print all customers’ information\n4 - to print all vehicles’ information\n5 - to quit\n");

        scanf("%d", &choice);
        
    
    
    
  
     
     
    







// • If the user chooses option 1, the program will ask the user to enter new customer information. Customer information should be maintained in array data structures. Customer information includes the following:
//         ▪ Customer ID number
//         ▪ Name
//         ▪ Phone number

if(choice==1)
{
    int customerID[20]={0};
    char *name[20]={};
    int phone[20]= {0};

    
    





// • If the user chooses option 2, the program will ask the user to enter new vehicle information. Vehicle information should be maintained in array data structures. Vehicle information includes the following:
//     ▪ Model year
//     ▪ Make
//     ▪ Model name
//     ▪ License plate number
//     ▪ Customer number who is currently renting vehicle
   else if (choice==2){

    }







// • If the user chooses option 3, the program will print all customers’ information (in tabular format), including the following fields:
// ▪ Customer ID number
// ▪ Name
// ▪ Phone number
else if (choice==3){

    }






// • If the user chooses option 4, the program will print all vehicles’ information (in tabular format), including the following fields:
//         ▪ Model year + Make + Model name
//         ▪ License plate number
//         ▪ Customer number who is currently renting vehicle

else if (choice==4){


    }












    else {

    
        printf("PLease try again and enter vaild vaule: ");
        
    

    }





// • Please note that the program will display the same menu again after performing the required operations in options 1,2,3 and 4.
// • If the user chooses option 5, the program exits.

    }
}