import json
import os

def adding_guess():
    print("\n")
    if not os.path.exists("guess.json") or os.path.getsize("guess.json") == 0:
         data = []
    else:
       with open("guess.json", "r") as file:
        data = json.load(file)
    name_of_the_guess = input("Enter Frist & Last Name: ")
    age_of_the_guess = input("age: ")
    
    data.append({"name": name_of_the_guess, "age": age_of_the_guess})

    with open("guess.json", "w") as file:
     json.dump(data, file, indent=4)
     
    print("Guess added")