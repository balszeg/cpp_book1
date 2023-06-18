#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

//Known issue: when you type in your numbers you must terminate the input with a 5th number otherwise the programs quit

using namespace std;

int main()
{
    vector<int> solution{};
    vector<int> guess{};
    string answer = "yes";
    string restart = "yes";
    int bull = 0;
    int cow = 0;
    int seed = 0;
    int input = 0;

    cout << "Welcome to Bulls and Cows! Think a 4 digit without repetition (i.e.: 3214)." << endl;

    while(answer=="yes"){
        guess = {};
        bull = 0;
        cow = 0;

        if(restart == "yes"){
            cout << endl <<"Please enter a random seed:" << endl;
            cin >> seed;
            cout << "Given seed is: " << seed << endl;
            srand(seed);
            solution = {};

            while(solution.size()!=4){
                int number = rand() % 10;
                if(find(solution.begin(), solution.end(), number) == solution.end()) {
                    //cout << "DEBUG ONLY: Solution number: " << number << endl;
                    solution.push_back(number);
                }
            }
            restart="no";
        }

        cout << endl << "Type in your number digit-by-digit:" << endl;


        while(cin >>input && guess.size()!=4){
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

        if(bull==4){
            cout << "Congratulations! You are won!" << endl;
            cout << "Would you like to restart with a new number?" << endl;
            while(cin >> restart){
                if(restart == "yes") {
                    answer == "yes";
                    break;
                } else if(restart == "no") {
                    return 0;
                } else {
                    cout << "Invalid answer, exiting!" << endl;
                    return -1;
                }
            }
        }

        if(restart!="yes"){
            answer = "";
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
    }

    return 0;
}
