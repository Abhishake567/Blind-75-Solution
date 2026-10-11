class Solution {
public:
    bool isValid(string s) {
      stack <char> memory;

      for(char x : s)
      {

        if (x == '(' || x == '{' || x == '[')
        {
            memory.push(x);
        }
        else
        {
            if(memory.size() == 0)
            {
                return false;
            }

            if ( (x == ')' && memory.top() != '(') ||
                  (x == '}' && memory.top() != '{') ||
                  (x == ']' && memory.top() != '['))
                  {
                    return false;
         
         
                  }

                   memory.pop();
        }
       
      }
        return memory.empty();
    }

};
