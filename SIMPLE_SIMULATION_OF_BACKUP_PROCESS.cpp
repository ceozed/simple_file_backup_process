    
    #include <iostream>
    using namespace std;



int main() {
    int files;

cout << "Enter number of files to back up:" << endl;
    cin >> files;

    if (files < 0) {
        cout << "Invalid input. Please enter a positive number." << endl;
    } else if (files == 0) {
        cout << "No files to back up" << endl;
    } else {

    for (int i = 1; i <= files; i++) {
        cout << "Backing up file " << i << "..." << endl;
    }
    cout << "Backup Complete" << endl;

}

  
        return 0;
}
