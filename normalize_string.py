def normalize_string(string):
    string = string.strip()    
    string = " ".join([word for word in string.split()])
    string = string.replace(" ,", ",")
    string = string.replace(" .", ".")
    string = string.replace(" ;", ";")
    string = string.replace(" ?", "?")
    string = string.replace(" !", "!")
    string = ", ".join([(sentence.lower()[0] + sentence[1:]) for sentence in string.split(", ")])
    string = "; ".join([(sentence.lower()[0] + sentence[1:]) for sentence in string.split("; ")])
    string = ". ".join([(sentence.upper()[0] + sentence[1:]) for sentence in string.split(". ")])
    string = "? ".join([(sentence.upper()[0] + sentence[1:]) for sentence in string.split("? ")])
    string = "! ".join([(sentence.upper()[0] + sentence[1:]) for sentence in string.split("! ")])
    return string

string = input()
print(normalize_string(string))
