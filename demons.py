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
            RGB = (int(color[2]),int(color[1]),int(color[0]))
            text = ('leds['+str(sum)+'] = CRGB('+str(color[2])+','+str(color[1])+','+str(color[0])+');\n')
            #简单的效验，但是挺管用
            code = abs(RGB[0]-memR[x][y])+abs(RGB[1]-memG[x][y])+abs(RGB[2]-memB[x][y])  
                      
            if code > 10:  #条件判断直接分配颜色，根据动画颜色自定义
                if RGB[0]+RGB[1]+RGB[2]<20:
                    file.write('leds['+str(sum)+'] = CRGB::Black;\n')
                elif RGB[0]>200 & RGB[1]+RGB[2]<100:
                    file.write('leds['+str(sum)+'] = CRGB::Red;\n')
                elif RGB[0]+RGB[1]<100 & RGB[2]>200:
                    file.write('leds['+str(sum)+'] = CRGB::Blue;\n')
                elif RGB[0]+RGB[1]+RGB[2]>600:
                    file.write('leds['+str(sum)+'] = CRGB::Purple;\n')
                else:
                    file.write('leds['+str(sum)+'] = CRGB::Blue;\n')
            sum+=1
            memR[x][y] = RGB[0]
            memG[x][y] = RGB[1]
            memB[x][y] = RGB[2]
    file.write('FastLED.show();\n'+'delay(35);\n')
    file.close()
    
cap = cv.VideoCapture('video/killloop2.mp4')
file = 'output/killloop.txt'
frames_num=cap.get(cv.CAP_PROP_FRAME_COUNT)
pbar = tqdm(total = frames_num)
nowframe = 0

memR = np.arange(500,564,1,dtype=list).reshape(8,8)
memG = np.arange(500,564,1,dtype=list).reshape(8,8)
memB = np.arange(500,564,1,dtype=list).reshape(8,8)

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



