def character_frequency_count(input_string):
    frequency = {}
    for char in input_string:
        if char in frequency:
            frequency[char] += 1
        else:
            frequency[char] = 1
    return frequency

def print_frequency_count(frequency): 
    for char, count in frequency.items():
        print(f"{count} {char}'s")

if __name__ == "__main__":
    input_string = input("Enter a string: ")
    frequency = character_frequency_count(input_string)
    print("\nCharacter frequency count:")
    print_frequency_count(frequency)
