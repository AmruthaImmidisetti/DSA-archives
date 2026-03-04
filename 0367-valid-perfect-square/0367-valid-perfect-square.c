bool isPerfectSquare(int num) 
{
   /* long long int t=num,flag=0;
    for(long long int i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            if((i*i)==t)   
            {
                flag=1;
                break;
            }
        }
    }
    if(flag==1)    return true;
    else           return false;*/
    if (num <= 0) // Handling non-positive numbers
        return false;

    int root = sqrt(num);
    return root * root == num;
    
   
} 