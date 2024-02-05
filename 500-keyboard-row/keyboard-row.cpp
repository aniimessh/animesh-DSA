class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        map<char, int> keyToRowMp;
        vector<string> keyboardRows = {"qwertyuiop", "asdfghjkl", "zxcvbnm"};
        for (int i = 0; i < keyboardRows.size(); i++) {
            for (auto& ch : keyboardRows[i]) {
                keyToRowMp.insert(make_pair(ch, i));
                keyToRowMp.insert(make_pair(ch - 'a' + 'A', i));
            }
        }

        vector<string> oneRowWords;
        for (auto& word : words) {
            bool oneRowWord = true;
            for (int i = 1; i < word.size(); i++) {
                if (keyToRowMp[word[i - 1]] != keyToRowMp[word[i]]) {
                    oneRowWord = false;
                    break;
                }
            }
            if (oneRowWord)
                oneRowWords.push_back(word);
        }
        return oneRowWords;
    }
};