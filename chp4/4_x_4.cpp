#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

//Known issue: cannot find 100 -> will guess 99 to it.

int main()
{
    string answer="";
    int diff=0;
    int max=100;
    int min=1;
    vector<int> past_nums;
    cout << "Let's start the guessing game! Think a number between 1 and 100!\n";
    for (int i=0; i<=6; ++i){
        diff=(max+min)/2;

        if((max-min)<=1){
            break;
        }

        cout << i+1 << ". Is the number you are thinking of less than " << diff << "? (yes/no)\n";
        cin >> answer;

        if(answer == "yes"){
            cout << "diff: " << diff << endl;
            cout << "max: " << max << endl;
            cout << "min: " << min << endl;

            max=diff;

        } else if(answer == "no"){
            cout << "diff: " << diff << endl;
            cout << "max: " << max << endl;
            cout << "min: " << min << endl;

            min=diff;

        } else {
            cout << "Invalid answer! Start again!\n";
            return -1;
        }
    }

    if(diff<max){
        diff=max;
    }

    if(min<diff){
        diff=min;
    }

    cout << "Your number is " << diff << "!\n";

    return 0;
}
