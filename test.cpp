        #include<bits/stdc++.h>
        using namespace std;
       
        int main()
        {
            std::random_device rd; // obtain a random number from hardware
            std::mt19937 eng(rd()); // seed the generator

            long long int A=10000000000000000;
            long long int B=1000000000000000000;
            std::uniform_int_distribution<long long int> distr(A,B); // define the range


            cout<<10000<<"\n";
            for(int n=0; n<10000; ++n){
                long long int val = distr(eng);
                assert(A<=val && val<=B);    
                std::cout << val <<"\n"; // generate numbers
            }
        }
        