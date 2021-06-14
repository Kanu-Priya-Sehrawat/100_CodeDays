char *encode(char *src)
{     
  //Your code here 
 int len = strlen(src);
 char *res = new char[2*len+1];
 char count[100];
 int i,j=0,k;
 int resultlen;
 for(i=0; i<len; i++){
     res[j++] = src[i];
     for(resultlen=1; i+1<len && src[i] == src[i+1]; resultlen++, i++);
     sprintf(count,"%d", resultlen);
     for(k=0;count[k]; k++, j++){
         res[j] = count[k];
     }
    
 }
 res[j] = '\0';
 return res;
}     
