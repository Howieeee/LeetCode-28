class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.size()==0 || haystack == needle)
            return 0;
        
        int left=0 , right = haystack.size()-1;
        
        for(int i=0;i<haystack.size();i++){
            
            bool match =false;
            int left = i+1 , right = haystack.size()-1;
            if(haystack[i] == needle[0]){ //第一個字配對到
                if(needle.size()==1)
                    return i;
                int max_length = right-left+2; //最長可容許的size
                if(needle.size() > max_length) 
                    return -1;
                else{
                    for(int j=1;j<needle.size();j++,left++){//needle的size
                        //if(i==4)
                            //cout << haystack[left] << " " << needle[j] << endl;
                        if(haystack[left] != needle[j]){//不同
                            break;
                        }
                        if(j==needle.size()-1){
                            match = true;
                        }
                    }
                }        
            }
            if(match){
                return i;
            }
            
            
        }
        
        
        
        
        
        return -1;
    }
};
