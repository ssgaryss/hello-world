//作业：完成以下框架的代码细节，程序能编译运行得到正确结果 

#include <iostream>

class SuperPrime {

  public:

  	SuperPrime():number(0) {
		
	}

  	~SuperPrime() {

	}

  	bool isSuperPrime() {

  	  split();

  	  int a = sum();

	  int b = multi();

	  int c = squareSum();

	  if (isPrime(number) && isPrime(a) && isPrime(b) && isPrime(c))

	    return true; 

  	  return false;

	}

  private:

	const int number;

  	int N[100], size;

  	bool isPrime(int n) { 

  		int num = 0; 
  		for(int i=0;i < n;i++){
  			if(n % i == 0 ){
  				num++;
			  } 
		  } 
  	if(num == 1)
  	return true;

  	  return false;

	}

	void split() {
		int temp=number;
		for(int i=0;temp==0;i++){
			N[i]=temp%10;
			temp = temp/10;
		}

	  // number split into N

	}

	int sum() {
		int temp;
		for(int i=0;N[i]==0;i++){
			temp += N[i];
		}
	  return temp;
	}

	int multi() {
		int temp;
		for(int i=0;N[i]==0;i++){
			temp *= N[i];
		}
	  return temp;

	}

	int squareSum() {
		int temp;
		for(int i=0;N[i]==0;i++){
			temp += N[i]*N[i];
		}
	  return temp;
	}

};

class Set {

  public:

  	Set(int from, int to) {
  	  size = to - from + 1;
  	  for(int i=0;i < size;i++){
		set[i]::SuperPrime():number(from + i);
		} 

	}

  	~Set() {

	}

  	int count() {

  	  int count = 0;

  	  for (int i = 0; i < size; i++)

  	    if(set[i].isSuperPrime())

  	      count += 1;

	  return count; 

	}

  	int sum() {

  	  int sum = 0;

  	  

  	  for (int i = 0; i < size; i++)

  	    if(set[i].isSuperPrime())

  	      sum += set[i];

  	

	  return sum; 

	}

  private:

  	SuperPrime set[1000];

  	int size;

};

int main() {

  Set ss(100, 999);

  std::cout << "How Many: " << ss.count() << std::endl;

  std::cout << "Sum is " << ss.sum() << std::endl;

  return 0;

}
