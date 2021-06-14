void toBinary(int N)
{
    // your code here
    int bin=0, i=0;
    while(N>0){
        int num = N%2;
        bin += pow(10,i)*num;
        N = N/2;
        i++;
    }
    printf("%d", bin);
        
}
