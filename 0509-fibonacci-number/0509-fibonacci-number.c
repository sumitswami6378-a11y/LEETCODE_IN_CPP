int fib(int n){

    if(n==0){

        return 0;
    }
    if(n==1){

        return 1;
    }

    int fibonacci = fib(n-1) + fib(n-2);

   return fibonacci;

}