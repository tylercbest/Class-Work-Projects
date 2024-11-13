with open('text_file_1.txt') as file_object:
    file_contents = file_object.read()
    print(file_contents)

with open("/Users/tylerbest/Documents/text_file_2.txt") as file_object2:
    file_contents2 = file_object2.read()
    print(file_contents2)

# r (raw string marker) treats path as single file name (not needed on mac?)
file_name = r"/Users/tylerbest/Documents/text_file_2.txt"
'''with open(file_name) as file_object:
    for line in file_object:
        print(line)

#'r' read mode, 'w' write mode, 'a' append mode
with open(file_name, 'r') as file_object:
    lines = file_object.readlines()
    print(type(lines))

    for line in lines:
        print(line)'''


with open(file_name, 'a') as file_object:
    file_object.write(f"\n\n123456678")

print(file_object)

import csv
filename = "/Users/tylerbest/Desktop/CSV_Data/data.csv"

with open(filename, 'r') as file_object:
    csv_reader = csv.reader(file_object)
    header_row = next(csv_reader)

    for index, column_header in enumerate(header_row):
        print(index, column_header)