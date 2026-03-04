void reverseString(char* s, int sSize) {
    
    int i=0,j=sSize-1;
    while(i<j)
    {
        int t=s[i];
        s[i]=s[j];
        s[j]=t;
        i++;
        j--;
    }
}