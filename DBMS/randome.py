import random
import string

cityBD = ['Gopalganj' , 'Dhaka' , 'Syhlet' , 'Rangpur' , 'Cumilla','Chitagong', 'Rajbari']
cityIND = ['Mumbai','Delhi','Bangalore','Hyderabad','Chennai','Kolkata','Ahmedabad','Pune','Jaipur','Lucknow']
cityAmerica = ['Karachi', 'Lahore', 'Islamabad', 'Rawalpindi', 'Faisalabad', 'Multan', 'Peshawar', 'Quetta', 'Sialkot', 'Gujranwala']
Country = ['Bangladehs' , 'India', 'America']

def gender():
    x = number(3,29)%2
    if x%2 == 0:
        return 'Male'
    else:
        return 'Female'
    
def postalcode():
    return ''.join([str(random.randint(0, 9)) for _ in range(10)])

def country():
    return Country[(number(1,100)%3)]

def pick_random_value(my_list):
    if not my_list:
        return None  # Return None if the list is empty
    return random.choice(my_list)

def city(x):
    if x == 'Bangladehs':
        return pick_random_value(cityBD)
    elif x == 'India':
        return pick_random_value(cityIND)
    else:
        return pick_random_value(cityAmerica)

def genname(length):
    characters = string.ascii_letters
    random_string = ''.join(random.choice(characters) for _ in range(length))
    return random_string

def number(l,r):
    return random.randint(l, r)