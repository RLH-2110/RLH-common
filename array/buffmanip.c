void fillBufferLeftMS(char* buff, size_t length, char fill ,int terminatorPostion) {
	int shifts = length - terminatorPostion - 1;
	int i;

	for (i = length - 2; i >= 0; i--) {

		if (i - shifts >= 0) {
			buff[i] = buff[i - shifts];
		}
		else {
			buff[i] = fill;
		}
	}
}
void fillBufferLeftAS(char* buff, size_t length, char fill) {
	int shifts = length - strlen(buff);
	int i;

	for (i = length - 2; i >= 0; i--) {

		if (i - shifts >= 0) {
			buff[i] = buff[i - shifts];
		}
		else {
			buff[i] = fill;
		}
	}
}