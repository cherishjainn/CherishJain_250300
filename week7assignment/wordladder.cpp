 int ladderLength(string beginWord, string endWord,
                     vector<string>& wordList) {
        set<string> st; 
        st.insert(wordList.begin(), wordList.end());

        queue<string> q;
        q.push(beginWord);
        st.erase(beginWord);
        int level = 1;  
        while (!q.empty()) {
            int size = q.size();
            for (int i = 0; i < size; i++) {
                string ns = q.front();
                q.pop();
                for (int i = 0; i < ns.size(); i++) {
                    char original = ns[i]; 
                    for (char ch = 'a'; ch <= 'z'; ch++) {
                        ns[i] = ch;
                         if (st.find(ns) != st.end()) {
                            q.push(ns);
                            st.erase(ns);
                             if(ns == endWord) return level+1;
                        }
                    }
                    ns[i] = original ;
                }
            }
            level++;
        }
        return 0;
    }