#include "iostream"
#include "string"
#include "chrono"
#include "thread"

using namespace std;
void kamboj();
void karan();
void singh();
void bir();

int main() {
    
    cout << "Welcome to the function machine!" << endl;
    cout << "================================" << endl;
    cout << endl;
    cout << "Enter a number to select the program you want to run:" << endl;
    cout << endl;
    cout << "1: Calculate your grade on a test" << endl;
    cout << "2: Tell me a joke" << endl;
    cout << "3: Count to 10" << endl;
    cout << "Any other key: Exit" << endl;

    int selection;
    cin >> selection;
    if(selection==1)
    {
        kamboj();
    }
else if(selection==2)

   {
       karan();
   }
   else if (selection==3)
   {
       singh();
   }
   else if(cin.fail() || selection < 1 || selection > 3)
   {
       bir();
   }}
   void bir()
    {
        cout << endl;
        cout << "Have a nice day, goodbye!" << endl;
    }
    void kamboj()
     {
        float marksReceived = 0;
        float totalMarksAvailable = 0;
        double gradePercentage = 0;

        // Read in 2 integer values
    cout<<"marks recieved : "<<endl;
    cin>>marksReceived;
    cout<<"total marks from : "<<endl;
    cin>>totalMarksAvailable;
    gradePercentage= marksReceived/totalMarksAvailable*100;



        /* 
           Pass the integer values to a function. 
           The function should calculates the grade
           as a percentage out of 100 and return as
           as a double
        */



        cout << "You achieved a grade of: " << gradePercentage << "%" << endl;

        
    }
    void karan()
     {
int a;
    cout<<"what is your Name :";
    cin>>a;

    cout<<"A bear walks into a bar and says to the bartender"<<endl; 
    cout<<"I'll have a pint of beer and a.......... packet of peanuts."<<endl;

     cout<<"The bartender asks, Why the big pause?"<<endl;


        // Call a function that tells them a joke
        // The function should not return a value


    }
    void singh()
    {
        

        // Replace the while loop with a for loop
        for(int studentNumber=1; studentNumber<=10; studentNumber++) {
         cout<<studentNumber<<endl;
            
            // Call a function here to increase the count


            
        }
    }

    
