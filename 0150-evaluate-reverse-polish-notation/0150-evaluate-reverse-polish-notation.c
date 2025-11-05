/*int is_digit(char *ch)
{
    if(ch=='+' || ch=='-' || ch=='*' ||ch=='/') 
    {
        return 0;
    }
    return 1;
}*/
int evalRPN(char** tokens, int tokensSize) 
{
  int stack[tokensSize];
    int top = -1;
    
    for (int i = 0; i < tokensSize; i++) {
        if (isdigit(tokens[i][0]) || (tokens[i][0] == '-' && strlen(tokens[i]) > 1)) {
            stack[++top] = atoi(tokens[i]);
        } else {
            int res;
            int op1 = stack[top--];
            int op2 = stack[top--];
            
            if(strcmp(tokens[i],"+")==0)
            {
                res=op2+op1;
            } 
            else if (strcmp(tokens[i], "-") == 0) {
                res = op2 - op1;
            } 
            else if (strcmp(tokens[i], "*") == 0) {
                res = op2 * op1;
            } 
            else if (strcmp(tokens[i], "/") == 0) {
                res = op2 / op1;
            }
            
            stack[++top] = res;
        }
    }
    
    return stack[top];
}