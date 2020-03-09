//
//  main.cpp
//  project
//
//  Created by Tommy on 3/9/20.
//  Copyright © 2020 Tommy. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

void printOptions() {
    cout << "Choose an option: " << endl;
    cout << "1. Add new data " << endl;
    cout << "2. Delete Data " << endl;
    cout << "3. Search and display using primary key " << endl;
    cout << "4. List data in the hash table sequence " << endl;
    cout << "5. List data in the sorted key sequence " << endl;
    cout << "6. Print indented tree " << endl;
    cout << "7. Efficieny " << endl;
    cout << "8. Quit " << endl;
    
}

int main(int argc, const char * argv[]) {
    int choice;
    bool quit = false;
    do {
        printOptions();
        cin >> choice;
        
        if (choice == 1) {
            cout << "Enter data to add " << endl;
            
        }
        else if (choice == 2) {
            cout << "Select data to delete " << endl;
        }
        else if (choice == 3) {
            cout << "Enter primary key to search " << endl;
        }
        else if (choice == 4) {
            cout << "Listing data in hash table sequence " << endl;
        }
        else if (choice == 5) {
            cout << "Listing data in sorted key sequence " << endl;
        }
        else if (choice == 6) {
            cout << "Printing indented tree " << endl;
        }
        else if (choice == 7) {
            cout << "Displaying efficiency " << endl;
        }
        else if (choice == 8) {
            cout << "Program end" << endl;
            quit = true;
        }
        
        else{
            cout << "enter correct choice " << endl;
        }
         
    } while(!quit);
    
    
}
