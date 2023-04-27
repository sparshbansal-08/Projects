import random

ls = input("Enter a choice (rock, paper, scissors): ")
possible = ["rock", "paper", "scissors"]
computer = random.choice(possible)
print(f"\nYou chose {ls}, computer chose {computer}.\n")

if ls == computer:
    print(f"Both players selected {ls}. It's a tie!")
elif ls == "rock":
    if computer == "scissors":
        print("Rock smashes scissors! You win!")
    else:
        print("Paper covers rock! You lose.")
elif ls == "paper":
    if computer == "rock":
        print("Paper covers rock! You win!")
    else:
        print("Scissors cuts paper! You lose.")
elif ls == "scissors":
    if computer == "paper":
        print("Scissors cuts paper! You win!")
    else:
        print("Rock smashes scissors! You lose.")