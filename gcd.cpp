int gcd(int x, int y) {
    int div = x < y ? x : y;
    
    while(div--) {
    	if(x % div == 0 && y % div == 0) return div;
    }
    
    return 1;
}

int gcd_rec(int x, int y) {
    if(y != 0) {
    	return gcd_rec(y, x % y);
    }
    return x;
}
