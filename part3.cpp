void averPrice(vector<int>& list){

int sum, avr_price = 0, price_range = 0;

int total_element = list.size();

for(auto it = list.begin() ; it != list.end() ; it++){

sum = sum + list[it];

}

avr_price = sum / total_element;

price_range = ( list.begin() + list.end()-1 ) / 2;

cout << avr_price << " ," << price_range << endl;

}