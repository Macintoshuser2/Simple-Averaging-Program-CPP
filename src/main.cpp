#include <iostream>
#include <string>

using namespace std;

int main() {
    double total = 0;
    double average = 0;
    string choice ("");
    double input = 0;
    int numbersEntered = 0;
    
    do {
        cout << "Enter a number: ";
        cin >> input;
        
        total += input;
        numbersEntered++;
        
        cout << "Do you have another number to enter? (y/n)";
        cin >> choice;
    } while(choice.compare("n") != 0 && choice.compare("N") != 0);
    
    average = total / numbersEntered;
    
    cout << "Your Average is: " << average << endl;
    
    return 0;
}
