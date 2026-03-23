bool isPerfectSquare(int num) 
{
    if (num <= 0)
        return false;

    int root = sqrt(num);
    return root * root == num;
    
   
} 