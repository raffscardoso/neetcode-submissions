#include <stack>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
  int calPoints(vector<string> &operations) {
    stack<int> stack;

    for (string o : operations) {
        if (o == "+") {
          int val1 = stack.top();
          stack.pop();
          int val2 = stack.top();
          int sum = val1 + val2;
          stack.push(val1);
          stack.push(sum);
        } else if (o == "D") {
          int val1 = stack.top();
          int num = val1 * 2;
          stack.push(num);
        } else if (o == "C"){
          stack.pop();
        } else {
        int num = stoi(o);
        stack.push(num);
      }
    }

    int sum = 0;
    while(!stack.empty()){
      sum += stack.top();
      stack.pop();
    }

    return sum;
  }
};