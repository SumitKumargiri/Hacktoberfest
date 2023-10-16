int main(){
    int n;
    int reversenum=0;
    int duplicate=n;
    cin>>n;
    while (n>0)
    {
        int lastdigit=n%10;
        reversenum=(reversenum*10)+lastdigit;
        n=n/10;
    }
    if(duplicate==reversenum)
     cout<<"true";
     else
      cout<<"false";  
}
