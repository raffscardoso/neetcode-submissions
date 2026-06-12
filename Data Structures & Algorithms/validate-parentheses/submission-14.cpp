#include <stack>
#include <string>

using namespace std;

class Solution {
public:
  bool isValid(string s) {
    stack<char> st;
    for (char ch : s) {
      if (ch == '(' || ch == '{' || ch == '[') {
        st.push(ch);
        continue;
      }


      if ((ch == ')' || ch == ']' || ch == '}') && st.empty())
        return false;

      

      if (ch == ')' && st.top() != '(')
        return false;
      if (ch == '}' && st.top() != '{')
        return false;
      if (ch == ']' && st.top() != '[')
        return false;

    
      st.pop();
    }

    if(!st.empty()) return false;
    return true;
  }
};