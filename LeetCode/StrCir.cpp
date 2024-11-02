class Solution {
public:
    bool isCircularSentence(string sentence) {
        // last char of word == first char of next word
        // last char of last word == first char of first word
        if(sentence.length()==0) return false;
        
        for(int i=0;i<sentence.length();i++){
            if (sentence[i]==' ' && sentence[i-1]!=sentence[i+1]){
                return false;
            }
        }
        return sentence[0]==sentence[sentence.size()-1];
    }
};