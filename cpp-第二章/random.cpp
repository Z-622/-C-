#include<iostream>
using namespace std;
#include<ctime>
#include<cstdio>
#include<cstdlib>
class RandomNum
{
public:
	RandomNum();
	RandomNum(unsigned int seed);
	void setSeed(unsigned int seed);
	int random(int max);
	int random(int min, int max);
	double random();
};