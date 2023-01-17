reference from https://github.com/mehulthakral/dijkstra-using-different-heaps/blob/master/binary.h
#include <bits/stdc++.h>

using namespace std;
 

typedef struct Data
{
	int id;
	int value;
} Data;

vector<int> dijkstra_binary(list< pair<int, int> > *adj,int v,int src);
