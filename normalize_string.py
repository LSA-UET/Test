def normalize_string(string):
    # Loại bỏ khoảng trắng ở đầu và cuối chuỗi
    string = string.strip()

    # Loại bỏ khoảng trắng dư thừa giữa các từ
    string = " ".join(word for word in string.split())

    # Loại bỏ dấu cách trước dấu câu (, . ; ? !)
    string = string.replace(" ,", ",")
    string = string.replace(" .", ".")
    string = string.replace(" ;", ";")
    string = string.replace(" ?", "?")
    string = string.replace(" !", "!")

    # Chuyển chữ cái đầu của mỗi câu thành chữ thường
    string = ", ".join([sentence.lower()[0] + sentence[1:] for sentence in string.split(", ")])
    string = "; ".join([sentence.lower()[0] + sentence[1:] for sentence in string.split("; ")])
    
    # Chuyển chữ cái đầu của mỗi đoạn thành chữ in hoa
    string = ". ".join([sentence.capitalize() for sentence in string.split(". ")])
    string = "? ".join([sentence.capitalize() for sentence in string.split("? ")])
    string = "! ".join([sentence.capitalize() for sentence in string.split("! ")])
    
    return string

# Nhập chuỗi từ người dùng và hiển thị chuỗi đã được chuẩn hóa
user_input = input("Nhập chuỗi cần chuẩn hóa: ")
print(normalize_string(user_input))
