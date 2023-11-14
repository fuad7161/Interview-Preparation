import randome as r
def genlinst():
    name = r.genname(r.number(7,12))
    country = r.country()
    city = r.city(country)
    postalcode = r.postalcode()
    age = r.number(20,60)
    gender = r.gender()
    mylist = [name , city , postalcode , country,age,gender]
    return (mylist)
