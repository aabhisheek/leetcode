class Solution {
public:
    int search(vector<int>& arr, int k) {
        int n=arr.size();
           int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;

        //if mid points the target
        if (arr[mid] == k) return mid;
         
         //whole part is sorted
        // if((arr[low]<=arr[mid]) &&  (arr[mid]<=arr[high]))
        // {    
        //    if (arr[mid] == k) return mid;

        //     if(arr[mid]>k)
        //     { 
        //         high=mid-1;
        //     }
        //     else
        //     {
        //         low=mid+1;
        //     }
        // } 
         
        //if left part is sorted:
        else if (arr[low] <= arr[mid]) {
            if (arr[low] <= k && k <= arr[mid]) {
                //element exists:
                high = mid - 1;
            }
            else {
                //element does not exist:
                low = mid + 1;
            }
        }
        else if(arr[mid] <= arr[high]) { //if right part is sorted:
            if (arr[mid] <= k && k <= arr[high]) {
                //element exists:
                low = mid + 1;
            }
            else {
                //element does not exist:
                high = mid - 1;
            }
        }
    }
    return -1;

    }
};