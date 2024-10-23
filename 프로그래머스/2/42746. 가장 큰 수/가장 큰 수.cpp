#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

bool compare(const string &num1, const string &num2) {
    return num1 + num2 > num2 + num1;
}

string get_largestNum(vector<int> numbers) {
    vector<string> nums_str;

    // 숫자 배열을 문자열 배열로 변환
    for (int num : numbers) {
        nums_str.push_back(to_string(num));
    }

    sort(nums_str.begin(), nums_str.end(), compare);

    if (nums_str[0] == "0")
        return "0";

    string result;
    for (const string& num : nums_str) {
        result += num;
    }

    return result;
}

string solution(vector<int> numbers) {
    string answer = get_largestNum(numbers);
    return answer;
}