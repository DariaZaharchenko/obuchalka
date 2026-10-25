#include "menu_items.hpp"

#include <cstddef>

#include "menu_functions.hpp"

const DZaharchenko::MenuItem DZaharchenko::STUDY_SUMM = {
	"1 - Хочу научиться складывать!", DZaharchenko::study_summ, &DZaharchenko::STUDY
};
const DZaharchenko::MenuItem DZaharchenko::STUDY_SUBSTRACT = {
	"2 - Хочу научиться вычитать!", DZaharchenko::study_substract, &DZaharchenko::STUDY
};
const DZaharchenko::MenuItem DZaharchenko::STUDY_MULTIPLY = {
	"3 - Хочу научиться умножать!", DZaharchenko::study_multiply, &DZaharchenko::STUDY
};
const DZaharchenko::MenuItem DZaharchenko::STUDY_DIVIDE = {
	"4 - Хочу научиться делить!", DZaharchenko::study_divide, &DZaharchenko::STUDY
};
const DZaharchenko::MenuItem DZaharchenko::STUDY_GO_BACK = {
	"0 - Выйти в главное меню", DZaharchenko::study_go_back, &DZaharchenko::STUDY
};

namespace {
	const DZaharchenko::MenuItem* const study_children[] = {
		&DZaharchenko::STUDY_GO_BACK,
		&DZaharchenko::STUDY_SUMM,
		&DZaharchenko::STUDY_SUBSTRACT,
		&DZaharchenko::STUDY_MULTIPLY,
		&DZaharchenko::STUDY_DIVIDE
	};
	const int study_size = sizeof(study_children) / sizeof(study_children[0]);
}

const DZaharchenko::MenuItem DZaharchenko::STUDY = {
	"1 - Хочу учиться математике!", DZaharchenko::show_menu, &DZaharchenko::MAIN, study_children, study_size
};
const DZaharchenko::MenuItem DZaharchenko::EXIT = {
	"0 - Я лучше пойду полежу...", DZaharchenko::exit, &DZaharchenko::MAIN
};

namespace {
	const DZaharchenko::MenuItem* const main_children[] = {
		&DZaharchenko::EXIT,
		&DZaharchenko::STUDY
	};
	const int main_size = sizeof(main_children) / sizeof(study_children[0]);
}

const DZaharchenko::MenuItem DZaharchenko::MAIN = {
	nullptr, DZaharchenko::show_menu, nullptr, main_children, main_size
};
