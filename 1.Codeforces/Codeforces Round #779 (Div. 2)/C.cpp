// C++ program to display all permutations
// of an array using STL in C++

#include <bits/stdc++.h>
using namespace std;

int cnt, tot;
// Function to display the array
void display(int a[], int n)
{
    int x = a[0];
	for (int i = 2; i <= n; i++) {
		x = __gcd(x, i*a[i-1]);
	}
	tot++;
	if(x > 1)
        cnt++;
}

// Function to find the permutations
void findPermutations(int a[], int n){

	do {
		display(a, n);
	} while (next_permutation(a, a + n));
}

// Driver code
int main()
{
    int n;
	cin>> n;
    int a[n];

    for(int i=1; i<=n; i++)
        a[i-1]=i;

	findPermutations(a, n);

	cout<<tot++<<' '<<cnt<<endl;

	return 0;
}
