#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

struct trie
{
	char mean[20];
	struct trie *next[26];
};

struct trie *add(struct trie *t, char *word, char *wmean, int n, int l)
{
	if(n<l-1 && t->next[n])
	{
		struct trie *temp;
		temp=new trie;
		
	}
}
