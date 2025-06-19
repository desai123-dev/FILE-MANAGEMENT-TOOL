#include <bits/stdc++.h>
using namespace std;

// Function to write data to file (overwrite mode)
void writeToFile(const string &filename) {
    ofstream file(filename);
    if (file.is_open()) {
        string data;
        cout << "Enter text to write (type 'END' to finish):\n";
        while (getline(cin, data)) {
            if (data == "END") break;
            file << data << endl;
        }
        file.close();
        cout << "Data written successfully.\n";
    } else {
        cout << "Unable to open file.\n";
    }
}

// Function to append data to file
void appendToFile(const string &filename) {
    ofstream file(filename, ios::app);
    if (file.is_open()) {
        string data;
        cout << "Enter text to append (type 'END' to finish):\n";
        while (getline(cin, data)) {
            if (data == "END") break;
            file << data << endl;
        }
        file.close();
        cout << "Data appended successfully.\n";
    } else {
        cout << "Unable to open file.\n";
    }
}

// Function to read and display file content
void readFromFile(const string &filename) {
    ifstream file(filename);
    if (file.is_open()) {
        string line;
        cout << "\nContents of the file:\n";
        while (getline(file, line)) {
            cout << line << endl;
        }
        file.close();
    } else {
        cout << "Unable to open file.\n";
    }
}

int main() {
    string filename = "data.txt";
    int choice;

    do {
        cout << "\n--- CodeTech First Task: File Management Tool ---\n";
        cout << "1. Write to file\n";
        cout << "2. Append data to file\n";
        cout << "3. Display file contents\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore(); // Clear newline character

        switch (choice) {
            case 1: writeToFile(filename); break;
            case 2: appendToFile(filename); break;
            case 3: readFromFile(filename); break;
            case 4: cout << "Exiting program.\n"; break;
            default: cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 4);

    return 0;
}
