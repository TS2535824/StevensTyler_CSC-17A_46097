
#include<stdio.h>

#include<stdlib.h>

typedef struct Prime {

unsigned char prime;

unsigned char power;

}Prime;

typedef struct Primes {

Prime *prime;

unsigned char nPrimes;

} Primes;

Primes *factor(int num) {

Primes* primes = (Primes*)malloc(sizeof(Primes));

primes->prime = (Prime*)malloc(sizeof(Prime) * 100);

int i = 2;

int count = 0;

int nprimes = 0;

while (num > 1) {

if (num % i == 0) {

count++;

num = num / i;

continue;

}

else {

if (count > 0) {

Prime prime;

prime.prime = i;

prime.power = count;

primes->prime[nprimes] = prime;

nprimes++;

}

i++;

count = 0;

}

}

if (count > 0) {

Prime prime;

prime.prime = (unsigned char)i;

prime.power = count;

primes->prime[nprimes] = prime;

nprimes++;

}

primes->nPrimes = nprimes;

}

void prntPrm(Primes *primes) {

int nprimes = (int) primes->nPrimes;

int i;

Prime prime;

for (i = 0; i < nprimes-1; i++) {

prime = primes->prime[i];

printf("%d^%d*", prime.prime, prime.power);

}

prime = primes->prime[i];

printf("%d^%d", prime.prime, prime.power);

}

int main() {

int num;

printf("Enter number: ");

scanf("%d", &num);

prntPrm(factor(num));

return 0;
}