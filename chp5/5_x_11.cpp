#include <iostream>
#include <vector>
#include <limits>

using namespace std;

constexpr int imax = numeric_limits<int>::max();

bool checkOverFlow(int a, int b){
    bool valid = true;
    if(b > (imax-a)){
            valid = false;
            return valid;
        }
    return valid;
}

int main()
{
    vector<int> fib_nums{1,1};
    bool stop=false;

    cout << "The Fibonacci numbers:" << endl;
    cout << "1" << endl;
    cout << "1" << endl;

    while(!stop){
        for(int i=1; i<fib_nums.size(); ++i){
            if(!checkOverFlow(fib_nums[i-1], fib_nums[i])){
                stop = true;
                break;
            }
            int new_fib_nums = fib_nums[i-1]+fib_nums[i];
            cout << new_fib_nums << endl;
            fib_nums.push_back(new_fib_nums);
        }
    }

    return 0;
}
