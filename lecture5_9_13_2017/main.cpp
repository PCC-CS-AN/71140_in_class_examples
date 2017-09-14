#include <iostream>

using namespace std;

int main()
{
    bool done = false;
    char answer;

    // While the user wants to continue
    while(!done){
        // You write this part plz
        cout << "does the thing" << endl;

        // Ask the user if they want to play again.
        cout << "Play again? [Y/n]" << endl;
        cin >> answer;
        // if the answer isn't valid
        while(!(answer == 'n' || answer == 'N' ||
                answer == 'y' || answer == 'Y')) {
            // Prompt the user again
            cout << "Please enter a valid character: y or n" << endl;
            cin >> answer;
        }
        // Check if we're done
        done = answer == 'n' || answer == 'N';
    }
    return 0;
}
