class Solution(object):
    def convertTemperature(self, celsius):
        temp=[]
        Kelvin=celsius+273.15
        temp.append(Kelvin)
        Fahrenheit = celsius * 1.80 + 32.00
        temp.append(Fahrenheit)

        return temp
