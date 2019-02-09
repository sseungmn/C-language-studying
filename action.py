from selenium import webdriver
import time

now = time.localtime()
date = '%d-%.2d-%.2d'%(now.tm_year,now.tm_mon,now.tm_mday)
pummok = {
    'minari' : '%B9%CC%B3%AA%B8%AE',
    'buchu' : '%BA%CE%C3%DF',
    'yangsangchu' : '%BE%E7%BB%F3%C3%DF'
}
bubin = {
    'donghwa' : '11000104',
    'hankuk' : '11000105'
}
url = 'https://www.garak.co.kr/gongsa/jsp/yt/auction/result/result1.jsp?s_date={}&s_pummok={}&s_bubin={}'
driver_m = webdriver.Chrome('C:/Users/asuspc/Desktop/chromedriver.exe') # 미나리
# driver_b = webdriver.Chrome('C:/Users/asuspc/Desktop/chromedriver.exe') # 부추
# driver_y = webdriver.Chrome('C:/Users/asuspc/Desktop/chromedriver.exe') # 양상추
driver_m.get(url.format(date,pummok['minari'],bubin['donghwa']))
