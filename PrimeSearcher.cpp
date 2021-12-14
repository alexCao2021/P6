bool isPrime(int n){
    bool P = true;

    if (n == 0 || n == 1) {
        P = false;
    }
    else {
        for (int i = 2; i <= n / 2; ++i) {
            if (n % i == 0) {
                P = false;
                break;
            }
        }
    }
    return P;
}
bool primeSearcher(vector<int> arr){
    int n = arr.size();
    for(auto i : arr){//use of iterators, instead of raw for loop
        if(isPrime(i)){
            return true;
        }
    }
    return false;
}