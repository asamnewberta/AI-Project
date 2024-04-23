def character_frequency(string):
 frequency = {}
 for char in string:
 if char in frequency:
 frequency[char] += 1
 else:
 frequency[char] = 1
 return frequency
def main():
 input_string = input("Enter a string: ")
 frequency_count = character_frequency(input_string)
 print("\nCharacter Frequency Count:")
 for char, count in frequency_count.items():
 print(f"{char}: {count}")
if __name__ == "__main__":
 main()