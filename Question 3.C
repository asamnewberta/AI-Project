def roman_to_decimal(roman):
 roman_numerals = {'I': 1, 'V': 5, 'X': 10, 'L': 50, 'C': 100, 'D': 500, 'M': 1000}
 decimal = 0
 prev_value = 0
 for numeral in reversed(roman):
 value = roman_numerals[numeral]
 if value < prev_value:
 decimal -= value
 else:
 decimal += value
 prev_value = value
 return decimal
def main():
 roman_numeral = input("Enter a Roman numeral: ").upper()
 decimal = roman_to_decimal(roman_numeral)
 print(f"The decimal equivalent of {roman_numeral} is {decimal}")
if __name__ == "__main__":
 main()