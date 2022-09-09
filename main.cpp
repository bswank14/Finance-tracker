#include <iostream>
#include <string>
using namespace std;

int x;

void start(){
    cout<<"Welcome to Brandon's Expense Tracker.";
    cout<<"\n\n 1. Add expense";
    cout<<"\n\n 2. Delete expense";
    cout<<"\n\n 3. See all expenses";
    cout<<"\n\n 4. Exit\n";
    cout<<"Choose option (1-4):";
    cin>>x;
}

void expenses{expenseCount, string expense[],int cost[]
    expensesCount++;
    break;
}

void x_function(int x){
    for(int i=0; i=500,i++){
        if(x==1){
            cout<<"You have choosen to add an expense is this correct Y or N?";

            string x;
            cin>> x;
            
            if(x == N){
                start();
            }
            else if(x == Y){
                cout<<"Type the expense name followed by the amount.";
                cin>>expenses,cost;
            }

        }   
        else if(x==2){
            cout<<"You have choosen to delete an expense is this correst Y or N?";

            string x;
            cin>> x;

            if(x == N){
                start();
            }
            else if(x == Y){
                cout<<"Type the expense you would like to delete.";
                cin>>expenses;
            }
        }
        else if(x==3){
            cout<<"You have choosen to show all expenses is this correct Y or N?";

            string x;
            in>>x;

            if(x == N){
            start();
            }
            else if(x == Y){
            cout<<expenses;
            } 
        }
            else if(x==5){
            cout<<"This program has to exit feature please choose again.";
            start();
            }
            else{
            cout<<"Incorrect input please try again.";
            start():
            }
    }

}