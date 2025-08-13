bool isPowerOfThree(int n) {
    int x=0,c=3;
    while(n>=pow(c,x)) {
        if(n==pow(c,x))     return true;
        else                x++;
    }
    return false;
}