from data_package import remove_duplicates, strip_whitespaces
from data_package import calculate_mean, find_maximum, find_minimum

raw_input = input("Enter a comma-separated list of numbers (e.g., 12, 5, 12, 8 , 21): ")

string_list = raw_input.split(",")
string_list = strip_whitespaces(string_list)

try:
    num_list = [float(x) for x in string_list]
except ValueError:
    print("Data Error: Please make sure you only enter numbers separated by commas.")
    exit()

cleaned = remove_duplicates(num_list)

print(f"Cleaned and unique data: {cleaned}")
print("-" * 20)
print(f"Mean: {calculate_mean(cleaned):.2f}")
print(f"Maximum: {find_maximum(cleaned)}")
print(f"Minimum: {find_minimum(cleaned)}")