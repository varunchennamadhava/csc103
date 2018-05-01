#include <iostream>
using std::cin;
using std::cout;
#include <vector>
using std::vector;


int findIndexOfSmallest(const vector<int>& V, size_t start)
{
	int i = start;
	for (int j = start+1; j < V.size(); j++) {
		if (V[j] < V[i])
			i = j;
	}
	return i;
}

void selectionSort(vector<int>& V)
{
	for (int i = 0; i < V.size()-1; i++) {
		int smallest = findIndexOfSmallest(V,i);
		int temp = V[smallest];
		V[smallest] = V[i];
		V[i] = temp;
	}
}

int main()
{
	vector<int> V;
	int n;
	while(cin >> n) V.push_back(n);
	selectionSort(V);
	for (int i = 0; i < V.size(); i++) {
		cout << V[i] << "\n";
	}
	return 0;
}


