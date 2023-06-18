#include <iostream>
#include <vector>
#include <limits>

using namespace std;

constexpr int imax = std::numeric_limits<int>::max();
constexpr int imin = std::numeric_limits<int>::min();
constexpr double dmax = std::numeric_limits<double>::max();
constexpr double dmin = std::numeric_limits<double>::min();

bool checkOverFlow(int a, int b){
    bool valid = true;
    if(a >= 0){
        if(b > (imax-a)){
            cout << "ERROR: The sum is larger, than the int type size!" << endl;
            valid = false;
            return valid;
        }
    } else {
        if(b < (imin-a)){
            cout << "ERROR: The sum is larger, than the int type size!" << endl;
            valid = false;
            return valid;
        }
    }

    return valid;
}

bool d_checkOverFlow(double a, double b){
    bool valid = true;
    if(a >= 0){
        if(b > (dmax-a)){
            cout << "ERROR: The sum is larger, than the double type size!" << endl;
            valid = false;
            return valid;
        }
    } else {
        if(b < (dmin-a)){
            cout << "ERROR: The sum is larger, than the double type size!" << endl;
            valid = false;
            return valid;
        }
    }

    return valid;
}


int main()
{
    int count = 0;
    //int sum = 0;
    double d_sum = 0;
    //vector<int> numbers;
    vector<double> d_numbers;
    vector<double> diffs;

    cout << "Please enter the number of values you want to sum: " << endl;
    cin >> count;

    cout << "Please enter some integers (press '|' to stop): " << endl;
    for(double num; cin>>num;){
        d_numbers.push_back(num);
    }

    if(d_numbers.size() < count){
        cout << "ERROR: Asked more numbers of sum, than you gave!" << endl;
        return 1;
    }

    for(int i = 0; i < d_numbers.size(); ++i){
        //5_x_9
        if(!d_checkOverFlow(d_sum, d_numbers[i])){
            return -1;
        }
        d_sum+=d_numbers[i];

        if(i>=1){
            diffs.push_back((d_numbers[i]-d_numbers[i-1]));
        }

        if(i == (count-1)){
            break;
        }
    }

    cout << "The sum of the first " << count << " numbers ( ";

    for(int i = 0; i < d_numbers.size(); ++i){
        cout << d_numbers[i] << " ";
        if(i == (count-1)){
            break;
        }
    }

    cout << ") is " << d_sum << "." << endl;

    cout << "Differences between adjacent values:";
    for(int i = 0; i < diffs.size(); ++i){
        cout << diffs[i] << " ";
    }

    cout << endl;

    return 0;
}
