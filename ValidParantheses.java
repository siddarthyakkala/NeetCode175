class Solution {
    public boolean isValid(String s) {
        Stack<Character> ls = new Stack<>();
        for(char c: s.toCharArray()){
            if(c=='(' || c=='{' || c=='[')
            {
                ls.push(c);
            }
            else if(c==')' && !ls.isEmpty() && ls.peek()=='(')
            {
                ls.pop();
            }
            else if(c=='}' && !ls.isEmpty() && ls.peek()=='{')
            {
                ls.pop();
            }
            else if(c==']' && !ls.isEmpty() && ls.peek()=='[')
            {
                ls.pop();
            }
            else{
                return false;
            }
        }
        
        return ls.isEmpty();
    }
}
