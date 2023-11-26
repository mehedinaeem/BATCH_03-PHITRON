file_path1 = r"D:\BATCH_03 (PHITRON)\5.Python\File\demofile.txt"
file_path2 = r"D:\BATCH_03 (PHITRON)\5.Python\File\desti.txt"

# Read content from file_path1
with open(file_path1, "r") as source_file:
    content = source_file.read()

# Write content to file_path2
with open(file_path2, "w") as destination_file:
    destination_file.write(content)

# Now let's read the updated content from file_path2
with open(file_path2, "r") as read_file:
    print(read_file.read())
