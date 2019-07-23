bool function(string str) 
{ 
    int l = str.length(); 
    int counter[MAX]; 
    memset(counter, 0, sizeof(counter)); 
    for (int i = 0; i < l / 2; i++) 
        counter[str[i] - 'a']++; 
    for (int i = l / 2; i < l; i++) 
        counter[str[i] - 'a']--; 
    for (int i = 0; i < MAX; i++) 
        if (counter[i] != 0) 
            return true; 
 return false; 
} 
  
 
int main() 
{ 
    string str = "abcasdsabcae"; 
    if (function(str)) 
        cout << "Yes, both halves differ"
             <<" by at least one character"; 
    else
        cout << "No, both halves do"
             <<" not differ at all"; 
    return 0; 
} 
