from tkinter import *
from tkinter import ttk
from tkinter import messagebox

root = Tk()

#위치 표시
root.title("Practice code")
root.geometry("300x200+100+100")
root.resizable(False,False)

#글자 표시
lbl1 = Label(root, text = "이름")
lbl1.grid(row=0, column=0)
lbl1.pack()

#입력창 생성
txt = Entry(root)
txt.grid(row=0, column=1)
txt.pack()

#파일 생성
f = open("새파일.txt", 'w')
line = f.readline()
f.close()

#리스트 박스 생성
listbox = Listbox(root, height=0, selectmode="extended")
listbox.insert(0,"국어")
listbox.insert(0,"영어")
listbox.insert(0,"수학")
listbox.insert(0,"과학")
listbox.pack()

#버튼 표시
btn = Button(root, text = "OK")
btn.pack()

#창 표시
root.mainloop()