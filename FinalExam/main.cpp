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
void ShowDataInMatrix();
void EnterDataInMatrix();
void SumOfAllPositive();
void countValues();
/** <code>main</code>main function
 <BR>
 @Return 0
 */
int main(){
    double matrix[5][2];
    int choice=0;
        
    
    do {
        ShowMenu();
        
        switch(choice){
            case 1:ShowDataInMatrix();
                break;
            case 2:EnterDataInMatrix();
                break;
            case 3:SumOfAllPositive();
                    cout<<"
                break;
            case 4://No code needed
                break;
            case 5:
                assert(choice);
        }
        
    }while (choice !=5);
        
            return 0;
    }

/** <code>ShowMenu</code>This Function show the menu
 <BR>
@paramchoice
 */
void ShowMenu(int choice){
    
    
    cout<<"1) Show Data in matrix"<<endl;
    cout<<"2) Enter Data in matrix (range -0,5 to 4,5)"<<endl;
    cout<<"Sum of all positive numbers (i.e. values > 0"<<endl;
    cout<<"4) Exit..."<<endl;
    cout<<"Please enter a choice: "<<endl;
    cin>> choice;
}
/** <code>ShowDataInMatrix</code>This Function show the menu
 <BR>
 @Paramdouble matrix[]
 */
void ShowDataInMatrix(double matrix[]){
  
    for(int i=0; i<5;i++)
      for(int j=0; j>5; i++)
          
    cout<<matrix[5]<<"Data in matrix ";
    
}
/** <code>EnterDataInMatrix</code>You can enter the data  in matrix in range of( -0.5 to -4.5).
 <BR>
 @Paramdouble matrix[]
 */
void EnterDataInMatrix(double matrix[]){
    
    int choice=0;
    
    int i=(-0.5 - 4.5);
    
    if (choice >= -0.5 && choice <= 4.5) {
        cout<<matrix[i];
        
    } else {
        cout<<"Error!";
    }
}

/** <code>SumOfAllPositive</code>Shows the sum of all positive numbers in array
 <BR>
 *@ParamPositiveNums shows all positive numbers
 */
void SumOfAllPositive(double PositiveNums){
    
    int choice=0;
 
 for(int i =0; i<choice;i++)
        cout<<"Enter your Positive choices: "<<endl;
    
}
/** <code>countValues</code>Shows the elements with value 1.5 and counts them.
 */
void countValues(){
    
    int count;
    
    for (int i=1.5;i<5;count++);
    
    cout<<"The elements with value 1.5 are: "<<count;
}

