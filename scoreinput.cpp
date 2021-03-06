#include "name_value.h"

class BadInput{};

using namespace std;

int main(void){
    string nameInput;
    int valueInput;

    vector<Name_value> scoreData; //Creates vector of Name_value objects
    cout << "Enter a set of name-and-value pairs. Input a name followed by a value for each pair. When finished, enter \"NoName 0\"." << endl;
    cin >> nameInput >> valueInput; //Input name and value
    Name_value newPair(nameInput, valueInput); //Create new Name_value object with name being the string input and value being the int input.

    while(!(newPair.getName() == "NoName" && newPair.getValue() == 0)){ //While object is not NoName 0,
        
        scoreData.push_back(newPair); //Add new object to vector of data

         cin >> nameInput >> valueInput; //Read in two more inputs from user
         
         try{
            validInput(scoreData, nameInput);
         }
         catch(BadInput){
             cout << "Bad input. The name entered is not unique." << endl;
             return 0;
         }
         
        newPair.setName_value(nameInput, valueInput); //Puts inputs into new object, repeat loop
    }

    cout << "List of data: " << endl;
    printData(scoreData);

}

void validInput(vector<Name_value> scoreData, string nameInput){

    for(Name_value pair : scoreData){

        if(pair.getName() == nameInput) throw BadInput{};
    }
}

void printData(vector<Name_value> data){
    for(Name_value pair : data){
        cout << pair.getName() << " " << pair.getValue() << endl;
    }
}
