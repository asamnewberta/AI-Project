import random
def get_user_choice():
 while True:
 user_choice = input("Enter your choice (rock, paper, or scissors): ").lower()
 if user_choice in ['rock', 'paper', 'scissors']:
 return user_choice
 else:
 print("Invalid choice! Please enter rock, paper, or scissors.")
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
def main():
 user_wins = 0
 computer_wins = 0
 draws = 0
 
 print("Welcome to Rock, Paper, Scissors!")
 while True:
 user_choice = get_user_choice()
 computer_choice = get_computer_choice()
 print(f"You chose: {user_choice}")
 print(f"Computer chose: {computer_choice}")
 
 winner = determine_winner(user_choice, computer_choice)
 if winner == "user":
 print("You win!")
 user_wins += 1
 elif winner == "computer":
 print("Computer wins!")
 computer_wins += 1
 else:
 print("It's a draw!")
 draws += 1
 
 play_again = input("Do you want to play again? (yes/no): ").lower()
 if play_again != 'yes':
 break
 
 print("\nGame statistics:")
 print(f"User wins: {user_wins}")
 print(f"Computer wins: {computer_wins}")
 print(f"Draws: {draws}")
 print("Thanks for playing!")
if __name__ == "__main__":
 main()
