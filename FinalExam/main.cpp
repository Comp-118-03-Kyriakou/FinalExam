/**
*file FinalExam.cpp
*brief The program will manipulate a matrix of doubles, with dimensions 5x2, which is declared in main
*details matrix program
*author  Christos Kyriakou
*date 27/05/2024
*copyright University of Nicosia
 */

#include <iostream>
#include <cassert>

using namespace std;

//Prototypes
void ShowMenu();

/** <code>main</code>main function
 <BR>
 @Return 0
 */
int main(){
    
    int choice=0;
    double matrix[5][2];
    
    do {
        switch(choice){
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                assert(choice);
        }
        
    }while (choice !=5);
        
            return 0;
    }

/** <code>ShowMenu</code>This Function show the menu
 <BR>

 */
void ShowMenu(){
    
    int choice=0;
    
    cout<<"1) Show Data in matrix"<<endl;
    cout<<"2) Enter Data in matrix (range -0,5 to 4,5)"<<endl;
    cout<<"Sum of all positive numbers (i.e. values > 0"<<endl;
    cout<<"4) Exit..."<<endl;
    cin>> choice;
}
