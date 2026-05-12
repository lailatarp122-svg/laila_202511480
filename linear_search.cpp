#include <iostream>
#include <string>

using namespace std;

int main()
{
    long keyNumber = 796399312;
    int phoneLaila[3];
    int i = 0;

    //filling numbers
    do{
        cout << "Enter your phone Laila" << endl;
        cin >> phoneLaila[i];
        i = i + 1;
    }while(i < 3);

    //linear search
    //number Laila
    for (int i = 0; i < 3; i++) {

        if(phoneLaila[i] == keyNumber){
            cout << "Laila number's found" << endl;
            break;
        }
    }

    /*
    string name;
    char singleCharacter;
    float phoneLaila;

    cout << "enter your Laila" << endl;
    cin >> Laila;

    cout << "enter your phone Laila" << endl;
    cin >> phoneLaila;
    cout << endl;
    cout << "hello " << Laila << " this is your phone: " << phoneLaila << endl;
    */

    return 0;
}
