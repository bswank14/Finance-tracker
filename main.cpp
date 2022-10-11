#include <iostream>
#include <string>
using namespace std;

int x;
string y;
int salary;
int expenses;

int start(){
    cout<<"Welcome to Brandon's Expense Tracker.";
    cout<<"\n\n 1. Input Salary";
    cout<<"\n\n 2. Add expense";
    cout<<"\n\n 3. Delete expense";
    cout<<"\n\n 4. See all expenses";
    cout<<"\n\n 5. Exit\n";
    cout<<"Choose option (1-5):";
    cin>>x;

    return x;
}

int choice(int x, string y){
         if(x==1){
            cout<<"You have choosen to input salary, is this correct Y or N?";
            cin>>y;

            if(y == "N"){
                start();
            }    
            else if(y == "Y"){
                cout<<"Please input your salary.";
                cin>>salary;
            }
         }
        if(x==2){
            cout<<"You have choosen to add an expense is this correct Y or N?";
            cin>> y;
            
            if(y == "N"){
                start();
            }
            else if(y == "Y"){
                cout<<"Type the expense name followed by the amount.";
                cin>>expenses;
            }

        }   
        if(x==3){
            cout<<"You have choosen to delete an expense is this correst Y or N?";
            cin>> y;

            if(y == "N"){
                start();
            }
            else if(y == "Y"){
                cout<<"Type the expense you would like to delete.";
                cin>>expenses;
            }
        }
        if(x==4){
            cout<<"You have choosen to show all expenses is this correct Y or N?";
            cin>>y;

            if(y == "N"){
            start();
            }
            else if(y == "Y"){
            cout<<expenses;
            } 
        }
        if(x==5){
            cout<<"This program has to exit feature please choose again.";
            start();
            }
            else{
            cout<<"Incorrect input please try again.";
            start();
            }
}

