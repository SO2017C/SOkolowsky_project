
#pragma once
//strktura wykorzystywana przez procesy oraz pamiec
struct PageTableData // tablica stronic indeks->nrStronicy tworze dla ka¿dego procesu
{
	int frame; // ramka w ktorej znajduje sie stronica
	bool bit; // bit sprawdzajacy czy stronica jest w pamieci

	PageTableData(int frame, bool bit) {
		this->frame = frame;
		this->bit = bit;
	}
};
//page_table w procesie
struct PCB
{
	std::vector<PageTableData> *page_table;
	int PID;
};