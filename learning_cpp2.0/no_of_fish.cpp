#include <iostream>
#include <vector>

class Solution {
public:
    int findMaxFish(std::vector<std::vector<int>>& grid) {
        int fisherman_start_pos_x, fisherman_start_pos_y;
        std::cout << grid[0].size() << std::endl;
        bool found = false;
        int collect = 0;
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid.size(); j++) {
                if (grid[i][j] > 0) {
                    found = true;
                    fisherman_start_pos_x = i;
                    fisherman_start_pos_y = j;
                    break;
                }
            }
            if (found) {
                break;
            }
        }
        for (int i = fisherman_start_pos_x; i < grid.size(); i++) {
            for (int j = fisherman_start_pos_y; j < grid.size(); j++) {
                if (grid[i][j] > 0) {
                    collect += 1;
                }
            }
        }
        if (fisherman_start_pos_y > 0) {
            for (int i = fisherman_start_pos_x; i < grid.size(); i++) {
                for (int j = fisherman_start_pos_y - 1; j >= 0; j--) {
                    if (grid[i][j] > 0) {
                        collect += 1;
                    }
                }
            }
        }
        return collect - 1;
    }
};

int main() {
    std::cout << "hello world" << std::endl;
    std::vector<std::vector<int>> grid = {{0,2,1,0}, {4,0,0,3},{1,0,0,4},{0,3,2,0}};
    Solution s1;
    int collect = s1.findMaxFish(grid);
    std::cout << "Number of fish collected: " << collect << std::endl;
}