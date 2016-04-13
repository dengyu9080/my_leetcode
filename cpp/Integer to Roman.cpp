class Solution {
public:
    string intToRoman(int num) {
    vector<string>roman={"","I","II","III","IV","V","VI","VII","VIII","IX","","X","XX","XXX","XL","L","LX","LXX","LXXX","XC","","C","CC","CCC","CD","D","DC","DCC","DCCC","CM","","M","MM","MMM","MMMM"};
    
    return roman[30+num/1000%10]+roman[20+num/100%10]+roman[10+num/10%10]+roman[num%10];
    }
};