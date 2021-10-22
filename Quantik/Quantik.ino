#define CVInPin 14
#define CVRangePin 15
#define CVOffsetPin 16
int levels[49];
int range,offset, x;	

void setup(){
	for(int i=0; i<49; i++){
		levels[i] = i*4095/49;
	}
}

void loop(){
	range = map(analogRead(CVRangePin), 0, 1023,1, 5);
	offset = map(analogRead(CVOffsetPin), 0, 1023,0, 4);
	x = map(analogRead(CVInPin), 0, 1023, offset, 12 * constrain( offset+range, 0, 5));
}