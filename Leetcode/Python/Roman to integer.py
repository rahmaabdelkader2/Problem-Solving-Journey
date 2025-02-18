class Solution(object):
    def romanToInt(self, s):
        roman_to_int = {
            'I': 1, 'V': 5, 'X': 10, 'L': 50,
            'C': 100, 'D': 500, 'M': 1000
        }
        
        prev_value = 0
        total = 0
        
        for char in s:
            current_value = roman_to_int[char]
            total += current_value
            if current_value > prev_value:
                total -= 2 * prev_value  # Subtract twice 
                # one for the added value and the other one for the main purpose
            prev_value = current_value
            
        return total
