class Solution {
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        int num1=0, num2=0, num3=0;
        for(int i=0; i<firstWord.length(); i++){
            int num = (int)(firstWord[i]-'a');
            num1 = num1*10 + num;
        }
        for(int i=0; i<secondWord.length(); i++){
            int num = (int)(secondWord[i]-'a');
            num2 = num2*10 + num;
        }
        for(int i=0; i<targetWord.length(); i++){
            int num = (int)(targetWord[i]-'a');
            num3 = num3*10 + num;
        }
       
        return (num3 == num1+num2);
    }
};
