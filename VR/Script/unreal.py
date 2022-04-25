from tensorflow.keras.models import load_model
from cv2 import imread, resize, cvtColor, COLOR_BGR2GRAY, IMREAD_UNCHANGED, imwrite
from time import sleep
from sys import path
indexToLabel = {
    0 : "A", 1 : "I", 2 : "U", 3 : "E", 4 : "O",
    5 : "KA", 6 : "KI", 7 : "KU", 8 : "KE", 9 : "KO", 
    10 : "SA", 11 : "SHI", 12 : "SU" , 13 : "SE" , 14 : "SO", 
    15 : "TA" , 16 : "CHI", 17 : "TSU", 18 : "TE" , 19 : "TO" , 
    20 : "NA" , 21 : "NI" , 22 : "NU" , 23 : "NE" , 24 : "NO" , 
    25 : "HA" , 26 : "HI" , 27 : "FU" , 28 : "HE" , 29 : "HO" , 
    30 : "MA" , 31 : "MI" , 32 : "MU" , 33 : "ME" , 34 : "MO" , 
    35 : "YA" , 36 : "YU" , 37 : "YO" , 
    38 : "RA" , 39 : "RI" , 40 : "RU" , 41 : "RE" , 42 : "RO" , 
    43 : "WA" , 44 : "WI" , 45 : "WE" , 46 : "WO" , 
    47 : "N" , 48: "Itération"
}

model = load_model("C:/Users/Matis_CAFFIAUX/Documents/Dev_Lab/Unreal/VRgame/VR/Script/Hiragana_CNN_v1")

# Loading
img = imread(f"C:/Users/Matis_CAFFIAUX/Documents/Dev_Lab/Unreal/VRgame/VR/Saved/{'test.png'}", IMREAD_UNCHANGED) #load with alpha

# Image process 
for indexL, ligne in enumerate(img):
    for indexC, col in enumerate(ligne):
        if(col[3] <125):
            img[(indexL,indexC)] = [255,255,255,255] #change transparentcy to white

# Image Rescale
resized = resize(img, (28,28)) # resizing to 28,28 px
#imwrite("Saved/altered.png", resized)

# Image Reshape
test = cvtColor(resized, COLOR_BGR2GRAY).reshape(1,28,28) # grayscale conversion & reshape for tensorflow

# Predicting
result = model.predict(test)[0].tolist()

# Result
print(indexToLabel[result.index(max(result))])

# File Writing
f = open("C:/Users/Matis_CAFFIAUX/Documents/Dev_Lab/Unreal/VRgame/VR/Saved/resultNN.txt", "w")
f.write(f"{indexToLabel[result.index(max(result))]}")
f.close()