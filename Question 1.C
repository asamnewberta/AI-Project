import random

def get_user_choice():
    while True:
        user_choice = input("Enter your choice (rock, paper, or scissors): ").lower()
        if user_choice in ['rock', 'paper', 'scissors']:
            return user_choice
        else:
            print("Invalid choice. Please enter rock, paper, or scissors.")

def get_computer_choice():
    return random.choice(['rock', 'paper', 'scissors'])

def determine_winner(user_choice, computer_choice):
    if user_choice == computer_choice:
        return "draw"
    elif (user_choice == 'rock' and computer_choice == 'scissors') or \
         (user_choice == 'paper' and computer_choice == 'rock') or \
         (user_choice == 'scissors' and computer_choice == 'paper'):
        return "user"
    else:
        return "computer"

def print_statistics(user_wins, computer_wins, draws):
    print("\nGame statistics:")
    print("User wins:", user_wins)
    print("Computer wins:", computer_wins)
    print("Draws:", draws)

def play_game():
    user_wins = 0
    computer_wins = 0
    draws = 0

    while True:
        user_choice = get_user_choice()
        computer_choice = get_computer_choice()

        print("\nYou chose:", user_choice)
        print("Computer chose:", computer_choice)

        winner = determine_winner(user_choice, computer_choice)

        if winner == "user":
            print("You win!")
            user_wins += 1
        elif winner == "computer":
            print("Computer wins!")
            computer_wins += 1
        else:
            print("It's a draw!")

        print_statistics(user_wins, computer_wins, draws)

        play_again = input("\nDo you want to play again? (yes/no): ").lower()
        if play_again != "yes":
            break

if __name__ == "__main__":
    play_game()
