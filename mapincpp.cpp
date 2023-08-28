#include <iostream> 
#include <map>
#include <string>

using namespace std;

int main()
{
   // map<string, string> myDictionary;
   // myDictionary.insert(pair<string, string>("apple", "der Apfel"));
   // myDictionary.insert(pair<string, string>("banana", "die banane"));
   // myDictionary.insert(pair<string, string>("orange", "die Orange, die Apfelsine"));
   // myDictionary.insert(pair<string, string>("strawberry", "die Erdbeere"));

    //for (auto pair : myDictionary)
      //  cout << pair.first << " - " << pair.second << endl;
    

    //this is my hash map 
    
    cout << "week four practice" << endl;
    
    map<string, int> myDictionary01;
    myDictionary01.insert(pair<string, int> ("a", 4));
    myDictionary01.insert(pair<string, int> ("b", 3));
    myDictionary01.insert(pair<string, int> ("c", 2));
    myDictionary01.insert(pair<string, int> ("d", 5));

    for (auto pair : myDictionary01) {
        cout << pair.first << " - " << pair.second << endl; 
    }
         
    //increment the values of our keys 
    myDictionary01['b']++;
    myDictionary01['c']++;
    myDictionary01['c']++;

    cout << "\n\n";

    for (auto pair:myDictionary01) {
        cout << pair.first << " - " << pair.second << endl; 
    }
    return 0; 
}