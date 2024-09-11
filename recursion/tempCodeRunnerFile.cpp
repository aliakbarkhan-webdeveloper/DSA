int rec(int n){
    if (n<=1)
    {
        return n;
    }
    
    return rec(n-2)+rec(n-1);
}