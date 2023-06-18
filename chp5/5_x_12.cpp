#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<int> solution{1,2,3,4};
    vector<int> guess{};
    string answer = "yes";
    int bull = 0;
    int cow = 0;

    cout << "Welcome to Bulls and Cows! Think a 4 digit without repetition (i.e.: 3214)." << endl;

    while(answer=="yes"){
        guess = {};
        bull = 0;
        cow = 0;

        cout << endl << "Type in your number digit-by-digit:" << endl;

        for(int input; cin >>input;){
            if(guess.size()==3){
                break;
            }
            guess.push_back(input);
        }

        for(int i=0; i<solution.size(); ++i){
            for(int j=0; j<solution.size(); ++j){
                if((solution[i] == guess[j]) && i==j){
                    bull += 1;
                }

                if((solution[i] == guess[j]) && i!=j){
                    cow += 1;
                }
            }
        }

        cout << "You have " << bull << " Bulls and " << cow << " Cows." << endl;

        answer = "";

        if(bull==4){
            cout << "Congratulations! You are won!" << endl;
            return 0;
        }

        cout << "Would you like to continue?" << endl;
        while(cin >> answer){
            if(answer == "yes" || answer == "no"){
                break;
            } else {
                cout << "Invalid answer, exiting!" << endl;
                return -1;
            }
        }
    }

    return 0;
}
