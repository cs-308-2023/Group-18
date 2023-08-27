int gcd(int x, int y) {
    if(y != 0) {
    	return gcd(y, x % y);
    }
    return x;
}
