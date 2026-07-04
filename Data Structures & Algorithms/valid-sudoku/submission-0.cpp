class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        for (int row = 0; row < 9; row++) {

            unordered_set<char> seen;

            for (int col = 0; col < 9; col++) {

                char num = board[row][col];

                if (num == '.')
                    continue;

                if (seen.count(num))
                    return false;

                seen.insert(num);
            }
        }

        for (int col = 0; col < 9; col++) {

            unordered_set<char> seen;

            for (int row = 0; row < 9; row++) {

                char num = board[row][col];

                if (num == '.')
                    continue;

                if (seen.count(num))
                    return false;

                seen.insert(num);
            }
        }
        for (int boxRow = 0; boxRow < 9; boxRow += 3) {

            for (int boxCol = 0; boxCol < 9; boxCol += 3) {

                unordered_set<char> seen;

                for (int row = boxRow; row < boxRow + 3; row++) {

                    for (int col = boxCol; col < boxCol + 3; col++) {

                        char num = board[row][col];

                        if (num == '.')
                            continue;

                        if (seen.count(num))
                            return false;

                        seen.insert(num);
                    }
                }
            }
        }

        return true;
    }
};