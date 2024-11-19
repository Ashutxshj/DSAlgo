class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int, unordered_set<char>> rows, cols, boxes;
        int n = 9;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                char c = board[i][j];
                if (c == '.') continue;

                if (rows[i].count(c)) return false;
                rows[i].insert(c);

                if (cols[j].count(c)) return false;
                cols[j].insert(c);

                int boxIndex = (i / 3) * 3 + j / 3;
                if (boxes[boxIndex].count(c)) return false;
                boxes[boxIndex].insert(c);
            }
        }

        return true;
    }
};
