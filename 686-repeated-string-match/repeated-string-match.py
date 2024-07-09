class Solution:
    def repeatedStringMatch(self, a: str, b: str) -> int:
        # Check if string 'b' is already contained in string 'a'
        if b in a:
            return 1
        
        # Check if all unique characters in 'b' are present in 'a'
        for i in set(b):
            if i not in a:
                return -1
        
        # Save the original string 'a' for later use
        n = a
        
        # Initialize counter for the number of repetitions of 'a'
        i = 1
        
        # Repeat 'a' and check if 'b' is contained within 'a'
        # Also, limit the maximum length of 'a' to 20 times the length of 'b'
        while b not in a and len(a) <= 20 * len(b):
            a = a + n
            i += 1
        
        # If 'b' is found in 'a' after repetition, return the number of repetitions
        if b in a:
            return i
        
        # If 'b' is not found in 'a' within the length limit, return -1
        return -1