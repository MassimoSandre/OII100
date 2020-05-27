#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int n;
    scanf("%d\n",&n);

    vector<string> numbers(n);
    vector<string> digits(10);

    for(int i = 0; i < n; i++) {
        getline(cin, numbers[i]);
    }

    for(int i = 0; i < 10;i++) {
        getline(cin, digits[i]);
    }


    for(int i = 0; i < n; i++) {
        while(numbers[i].length() > 0) {
            for(int j = 0; j < 10; j++) {
                if(numbers[i].length() >= digits[j].length()) {
                    if(numbers[i].substr(0,digits[j].length()) == digits[j]) {
                        cout << j;
                        numbers[i] = numbers[i].substr(digits[j].length(),numbers[i].length()-digits[j].length());
                        j = 10;
                    }
                }
            }
        }
        cout << endl;
    }
    return 0;
}
