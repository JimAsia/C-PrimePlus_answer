class golf {
private:
	static const int Len = 40;
	char fullname[Len];
	int handicap;
public:
	golf() { fullname[0] = '\0'; handicap = 0; }
	golf(const char* name, int hc);
	int setgolf();
	void handicapz(int hc);
	void showgolf();
};