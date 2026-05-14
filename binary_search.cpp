include <iostream>
using namespace std;

int main() {

    // Names must be sorted for Binary Search
    string names[5] = {"Ali", "Sara",
                       "Ahmed", "Mona",
                       "Khalid"};

    int ages[5] = {45, 20,30 , 25, 50};

    string key;
    int low = 0, high = 4, mid;
    bool found = false;

    // Ask user for the name
    cout << "Enter name to search: ";
    cin >> key;

    // Binary Search
    while(low <= high) {

        mid = (low + high) / 2;

        if(names[mid] == key) {

            cout << key << " was found and is aged "
                 << ages[mid];

            found = true;
            break;
        }

        else if(names[mid] < key) {
            low = mid + 1;
        }

        else {
            high = mid - 1;
        }
    }

    // If not found
    if(found == false) {
        cout << "Not found";
    }

    return 0;
}
