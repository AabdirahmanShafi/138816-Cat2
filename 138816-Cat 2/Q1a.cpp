#include <iostream>
using namespace std;


int main() 
    
    {
        //variable
        int num1; 
        int num2;
        int num3;

    // enter three numbers
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    

     int opt =1;

  
//use switch case for finding the smallest number
    switch(opt){
        case 1:
            if (num1 <= num2 && num1 <= num3)
                cout << "Smallest number: " << num1 << endl;
    
        break;
          case 2:
           if (num2 <= num1 && num2 <= num3)
                cout << "Smallest number: " << num2 << endl;
           
        break;
          case 3:
            if (num3 <= num2 && num3 <= num1)
                cout << "Smallest number: " << num3 << endl;        
        break;
    
    default:
                cout << "Invalid choice..\n";
                break;
    }return 0;
    }