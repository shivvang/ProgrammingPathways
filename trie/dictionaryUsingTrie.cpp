#include <iostream>
#include <vector>
using namespace std;

class trieNode
{
public:
    char data;
    trieNode *children[26];
    bool isTerminal;

    trieNode(char ch)
    {
        this->data = ch;
        for (int i = 0; i < 26; i++)
        {
            children[i] = NULL;
        }

        this->isTerminal = false;
    }
};

void insertWord(trieNode *root, string str)
{
    if (str.length() == 0)
    {
        root->isTerminal = true;
        return;
    }

    char ch = str[0];
    int index = ch - 'A';
    trieNode *child;

    if (root->children[index] != NULL)
    {
        child = root->children[index];
    }
    else
    {
        child = new trieNode(ch);
        root->children[index] = child;
    }

    insertWord(child, str.substr(1));
}

void storeSuggestion(trieNode *curr, vector<string> &temp, string &prefix)
{
    if (curr->isTerminal)
    {
        temp.push_back(prefix);
    }

    for (char ch = 'a'; ch <= 'z'; ch++)
    {
        int index = ch - 'a';

        trieNode *next = curr->children[index];

        if (next != NULL)
        {
            prefix.push_back(ch);
            storeSuggestion(next, temp, prefix);
            prefix.pop_back();
        }
    }
}

vector<vector<string>> getSuggestions(trieNode *root, string input)
{
    vector<vector<string>> output;
    trieNode *prev = root;
    string prefix = "";
    for (int i = 0; i < input.size(); i++)
    {
        char lastCh = input[i];
        int index = lastCh - 'a';
        trieNode *curr = prev->children[index];

        if (curr == NULL)
            break;

        else
        {
            vector<string> temp;
            prefix.push_back(lastCh);
            storeSuggestion(curr, temp, prefix);
            output.push_back(temp);
            prev = curr;
        }
    }
    return output;
}

int main()
{

    vector<string> v;

    v.push_back("love");
    v.push_back("lover");
    v.push_back("loving");
    v.push_back("lost");
    v.push_back("last");
    v.push_back("lane");
    v.push_back("lord");

    string input = "lovi";

    trieNode *root = new trieNode('-');

    for (int i = 0; i < v.size(); i++)
    {
        insertWord(root, v[i]);
    }

    vector<vector<string>> ans = getSuggestions(root, input);

    cout << "printing the answer" << endl;

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}