import tkinter as tk
from PIL import Image, ImageTk

root = tk.Tk()
root.title("GPT-3 Interface")
root.attributes("-fullscreen", True)

# Create and set the image
image = Image.open("https://i.ytimg.com/vi/PSpwWV_200c/maxresdefault.jpg")
photo = ImageTk.PhotoImage(image)
label = tk.Label(root, image=photo)
label.pack()

# Create the input and answer widgets
input_text = tk.Entry(root)
input_text.pack()
answer_button = tk.Button(root, text="Pesquisar", command=get_answer)
answer_button.pack()
answer_label = tk.Label(root)
answer_label.pack()

root.mainloop()

