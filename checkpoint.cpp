#include <iostream>
using namespace std; 

int main()
{
    //for (int i = 0; i < 5; i++)
    {
        //cout << "i is " << i; 

    }
    //int i = 0; 
    //while (i < 1) 
    {
        //cout << "i is " << i; 
        //i++;

    }
    //string myStr; 
    
    //myStr = "abcdefghij "; 
    //string mysubstring = myStr.substr (0, 10); 

    //cout << myStr[0] << endl; 
    
    //for(int i = 9; i >= 0; i--)
    {
        //cout << myStr.at(i) << endl; 
    }
        
    char myChars[10] = {'a', 'b','c','d','e','f','g','h','i','j'};

    cout << myChars[4];

    for (int i = 0; i < 10; i++){
            cout << "myChars[" << i << "] is " << myChars[i] << "\n\n";
    }
        int num1 = 10; 
        int num2 = 33; 
        if (num1 > num2) {
            cout << "\n The test condition was true";
        }
    else { 
        cout << "\n The test condtion was false";
    }


    return 0;
}