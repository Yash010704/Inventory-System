#include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;

// Function to print the map
void printMap(const map<string, string>& list) {
    for (const auto& item : list) {
        cout << item.first << " " << item.second << endl;
    }
}

// Function to search for an item in the map
void Searchlist(const map<string, string>& list) {
    string indexx_id;
    cout << "Enter index ID: ";
    cin >> indexx_id;

    if (list.count(indexx_id) == 1) {
        cout << "Item: " << list.at(indexx_id) << endl;
    } else {
        cout << "Enter a valid ID or item not in the list." << endl;
    }
}

// Function to edit an item in the map
void editlist(map<string, string>& list) {
    printMap(list);

    string indexx_id;
    cout << "Enter index ID: ";
    cin >> indexx_id;

    if (list.count(indexx_id) == 1) {
        cout << "Current Item: " << list.at(indexx_id) << endl;

        string newItemName;
        cout << "Enter the new item name: ";
        cin >> newItemName;

        list[indexx_id] = newItemName; // Corrected assignment
        printMap(list);
    } else {
        cout << "Enter a valid ID or item not in the list." << endl;
    }
}

// Function to insert items into the map
void InsertInlist(map<string, string>& list) {
    string index_id, item_name;

    cout << "Enter the index ID: ";
    cin >> index_id;

    cout << "Enter the item name: ";
    cin >> item_name;

    list[index_id] = item_name;

    string question;
    cout << "Do you want to add more items? (yes/no): ";
    cin >> question;

    if (question == "yes" || question == "Yes") {
        InsertInlist(list);
    } else if (question == "no" || question == "No") {
        return;
    } else {
        cout << "Enter a valid answer." << endl;
    }
}

// Main function
int main() {
    map<string, string> list;

    if (list.empty()) {
        cout << "The list is empty. Please insert items." << endl;
        InsertInlist(list);
    }

    char choice;
    do {
        cout << "Choose an operation:"<<endl;
        cout << "1. Edit an item"<<endl;
        cout << "2. Search for an item"<<endl;
        cout << "3. Print the list"<<endl;
        cout << "4. Exit"<<endl;;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case '1':
                editlist(list);
                break;
            case '2':
                Searchlist(list);
                break;
            case '3':
                printMap(list);
                break;
            case '4':
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != '4');

    return 0;
}
