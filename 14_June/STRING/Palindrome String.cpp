int isPlaindrome(char S[])
{
    // Your code goes here
    int n = strlen(S) - 1;
    int i = 0;
    while(i<n){
        if(S[i] != S[n])
        return 0;
        i++;
        n--;
    }
    return 1;
}
