#include <bits/stdc++.h>
using namespace std;
class trinode{
    public:
    char data;
    trinode* children[26];
    bool terminal;

    trinode(char ch){
        data = ch;
        for(int i = 0; i < 26; i++) this->children[i] = NULL;
        terminal = false;
    }
};

class trie{
    public:
    trinode* root;

    trie(){
        root = new trinode('\0');
    }
    void insertchar(trinode* root, string word){
        if(word.length() == 0){
            root->terminal = true;
            return;
        }
        trinode* child;
        int index = word[0] - 'a';
        if(root->children[index] != NULL){
            child = root->children[index];
        }
        else{
            child = new trinode(word[0]);
            root->children[index] = child;
        }
        insertchar(child, word.substr(1));
    }

    void insert(string word){
        insertchar(root, word);
    }

    bool search_word(trinode* root, string word){
        if(word.length() == 0){
            return root->terminal;
        }
        trinode* child;
        int index = word[0] - 'a';
        if(root->children[index] != NULL) child = root->children[index];
        else return false;
        return search_word(child, word.substr(1));
    }

    bool search(string word){
        return search_word(root, word);
    }
};

int main(){
    trie* t = new trie();
    t->insert("arijit");
    cout << "searching result of arijit is: " << t->search("arijit") << endl;
}