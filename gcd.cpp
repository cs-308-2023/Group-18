int gcd(int x, int y) {
    int min = x < y ? x : y;
    
    while(min--) {
    	if(x % min == 0 && y % min == 0) return min;
    }
    
    return 1;
}
