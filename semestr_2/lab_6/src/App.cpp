#include "App.h"

using namespace std;

int App::start() {
    
    vector<int> nums = {1, 3, 5, 7, 9};
    bool result1 = my_none_of(nums.begin(), nums.end(), [](int num) {
        return num % 2 == 0;
    });
    cout << "my_none_of result1: " << (result1 ? "true" : "false") << "\n";

    vector<int> nums2 = {1, 2, 5, 7, 9, 11, 13};
    bool result2 = my_is_sorted(nums2.begin(), nums2.end(), less<int>());
    cout << "my_is_sorted result2: " << (result2 ? "true" : "false") << "\n";

    vector<int> nums3 = {1, 3, 4, 5, 7, 8, 11, 12};
    auto result3 = find_not(nums3.begin(), nums3.end(), 5);

    if (result3 != nums3.end())
        cout << "find_not result3: Found " << *result3 << " at position " << (result3 - nums3.begin()) << "\n";
        
    else 
        cout << "find_not result3: Not found" << "\n";
    

    return 0;
}
