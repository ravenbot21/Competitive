import urllib 
from bs4 import BeautifulSoup 
from urllib.request import urlopen
wiki="https://www.analyticsvidhya.com/blog/2015/10/beginner-guide-web-scraping-beautiful-soup-python/"
page=urlopen(wiki)
soup=BeautifulSoup(page)
print(soup.find_all('table'))
