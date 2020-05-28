
bool isPrime(ui n) 
{ 
    // Corner cases 
    if (n <= 1) 
        return false; 
    if (n <= 3) 
        return true; 
    if (n % 2 == 0 || n % 3 == 0) 
        return false; 
    for (ui i = 5; i * i <= n; i = i + 6) 
        if (n % i == 0 || n % (i + 2) == 0) 
            return false; 
  
    return true; 
} 

int sumOfDigits(ui n)
{
    int sum=0;
    while(n>0)
    {
        sum=sum+n%10;
        n=n/10;
    }
    return sum;
}

void printPrimeFactors(ui n) {
   while (n%2 == 0){
      cout<<"2\t";
      n = n/2;
   }
   for (ui i = 3; i <= sqrt(n); i = i+2){
      while (n%i == 0){
         cout<<i<<"\t";
         n = n/i; 
         
      }
   }
   if (n > 2)
   cout<<n<<"\t";
}

int binaryExpo(int n,int t)
{
    if(t==0) return 1;
    int res=binaryExpo(n,t/2);
    if(t%2==0) return res*res;
    return res*res*n;
}
