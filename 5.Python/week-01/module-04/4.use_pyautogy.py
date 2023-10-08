import pyautogui

def input_number(n):
    pyautogui.write(str(n))
    pyautogui.press('enter')

def print_pattern(n):
    for i in range(n + 1):
        for j in range(i):
            pyautogui.write('#', interval=0.1)
        pyautogui.write('\n', interval=0.1) 


pyautogui.alert("Please enter the value of n.")
n = int(pyautogui.prompt("Enter n:"))


input_number(n)
print_pattern(n)

