#include <bits/stdc++.h>
#define ALPHABET_SIZE 26

using namespace std;

// root node does is only an sattelite node
struct TrieNode {
    // already create all 26 possibilities
	struct TrieNode* childNode[ALPHABET_SIZE];

	// count the number of words, so it can calculate
	// even if prefix word are 'hidden' inside the tree
	// like 'an' and 'and' where the 'and' will not show
	// that the 'an' as an terminal, but the word count will
	int wordCount = 0;
};

void put(TrieNode* root, string& key) {
	TrieNode* curNode = root;

	for(auto c : key) {
	    // calculate the place where the character is (lower case)
		if(curNode->childNode[c - 'a'] == NULL) {
			TrieNode* newNode = new TrieNode();

			curNode->childNode[c - 'a'] = newNode;
		}

		curNode = curNode->childNode[c-'a'];
	}

	curNode->wordCount++;
}

bool isPrefixExist(TrieNode* root, string& key) {
    TrieNode* curNode = root;

    for(auto c : key) {
        if(curNode->childNode[c - 'a'] == NULL) {
            return false;
        }

        curNode = curNode->childNode[c-'a'];
    }

    return true;
}

bool search_key(TrieNode* root, string& key) {
    TrieNode* curNode = root;

    for(auto c : key) {
        if(curNode->childNode[c - 'a'] == NULL) {
            return false;
        }

        curNode = curNode->childNode[c-'a'];
    }

    return (curNode->wordCount > 0);
}

bool delete_key(TrieNode* root, string& word) {
    TrieNode* curNode = root;
    TrieNode* lastBranchNode = NULL;
    char lastBranchChar = 'a';

    for(auto c : word) {
        if(curNode->childNode[c - 'a'] == NULL) {
            return false;
        } else {
            int count = 0;
            for(int i = 0; i < 26; i++) {
                if(curNode->childNode[i] != NULL) {
                    count++;
                }
            }
            if(count > 1) {
                lastBranchNode = curNode;
                lastBranchChar = c;
            }
            curNode = curNode->childNode[c - 'a'];
        }
    }

    int count = 0;
    for(int i = 0; i < 26; i++) {
        if(curNode->childNode[i] != NULL) {
            count++;
        }
    }

    if(count > 0) {
        curNode->wordCount--;
        return true;
    }

    if(lastBranchNode != NULL) {
        lastBranchNode->childNode[lastBranchChar] = NULL;
    } else {
        root->childNode[word[0]] = NULL;
        return true;
    }
}

int main() {

}
