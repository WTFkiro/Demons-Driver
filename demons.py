import cv2 as cv
import numpy as np
from tqdm import tqdm

#读取每一帧中64个led灯珠的bgr值，转换成rgb并写入led.txt文件中
def led_output(file):
    sum = 0
    file = open(file,'a')
    for y in range(0,8):
        for x in range(0,8):
            if y%2 == 0:
                color = frame[25+y*70,520-x*70]
            else:
                color = frame[25+y*70,25+x*70]
            text = ('leds['+str(sum)+'] = CRGB('+str(color[2])+','+str(color[1])+','+str(color[0])+');\n')
            file.write(text)
            sum+=1
        file.write('\n')
    file.write('FastLED.show();\n'+'delay(30);\n')
    file.close()
    
cap = cv.VideoCapture('video/demons.mp4')
file = 'output/led.txt'
frames_num=cap.get(cv.CAP_PROP_FRAME_COUNT)
pbar = tqdm(total = frames_num)
nowframe = 0
while True:
    ret,frame = cap.read()
    led_output(file)
    nowframe+=1
    pbar.update(1)  
    if nowframe == frames_num:
        pbar.close()
        print('\nDecide UP!')
        break
cap.release()


