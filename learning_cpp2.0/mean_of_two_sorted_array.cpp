#include<iostream>
#include<vector>

double findMedianSortedArrays(std::vector<int>& nums1, std::vector<int>& nums2) {
    int total_size = nums1.size() + nums2.size();
    std::vector<int> *merged_array = new std::vector<int>(total_size);
    for (int i = 0; i < nums1.size(); i++) {
        (*merged_array)[i] = nums1[i];
    }
    for (int i = 0; i < nums2.size(); i++) {
        (*merged_array)[nums1.size() + i] = nums2[i];
    }
    for (int i = 0; i < total_size; i++) {
        for (int j = i + 1; j < total_size; j++) {
            if ((*merged_array)[i] > (*merged_array)[j]) {
                int temp = (*merged_array)[i];
                (*merged_array)[i] = (*merged_array)[j];
                (*merged_array)[j] = temp; 
            }
        }
    }
    for (int i = 0; i < total_size; i++) {
        std::cout << (*merged_array)[i] << std::endl;
    }
    double sum = 0.0;
    double median;
    for (double i = 0; i < total_size; i++) {
        sum += (*merged_array)[i];
    }
    median = (sum / total_size);
    return median;
}

int main() {
    std::vector<int> v1 = {1, 2};
    std::vector<int> v2 = {3, 4};
    double median = findMedianSortedArrays(v1, v2);
    std::cout << median << std::endl;
}