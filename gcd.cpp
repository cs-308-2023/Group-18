int gcd(int x, int y) {
    int div = x < y ? x : y;
    
    while(div--) {
    	if(x % div == 0 && y % div == 0) return div;
    }
    
    return 1;
}
