#include <stack>

bool isValid(string s) {
        
        std::stack<char> brackets;

        for (auto c : s)
        {
            switch (c) 
            {
                case '(' :
                    brackets.push(')');
                    break;

                case '[':
                    brackets.push(']');
                    break;

                case '{':
                    brackets.push('}');
                    break;

                default:

                    if (brackets.empty() || brackets.top() != c) return false;
                    brackets.pop();
                    break;
            }
        }

        return brackets.empty();
    }