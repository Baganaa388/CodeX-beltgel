n = int(input())               # Жагсаалтын уртыг оруулна
first_list = input().split()    # Анхны жагсаалтыг оруулна
second_list = input().split()   # Хоёр дахь жагсаалтыг оруулна

# Анхны жагсаалтын үгсийг нэг бүрчлэн шалгана
for word in first_list:
    found = False  # Үгийг олсон эсэхийг шалгах хувьсагч
    for i in range(len(second_list)):
        if word == second_list[i]:  # Хэрвээ үг хоёр дахь жагсаалтад байгаа бол
            second_list.pop(i)  # Үгийг хасна
            found = True  # Олдсон гэж тэмдэглэнэ
            break  # Дараагийн үг рүү шилжинэ
    if not found:  # Хэрвээ үг олдсонгүй бол
        print(word)  # Тухайн үгийг хэвлэнэ
        break  # Программыг зогсооно
