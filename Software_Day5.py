a_binary_string = "01000110 01010101 01000011 01001011 01011001 01001111 01010101 00100001"

binary_values = a_binary_string.split()

ascii_string = ""
for binary_value in binary_values:
    an_integer = int(binary_value, 2)



    ascii_character = chr(an_integer)


    ascii_string += ascii_character

print(ascii_string)

#easter egg = EUREKA
