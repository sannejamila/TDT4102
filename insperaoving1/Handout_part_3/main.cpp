#include "std_lib_facilities.h"
#include "InsuranceContract.h"
#include "ContractDataBase.h"
#include "Utilities.h"

//------------------------------------------------------------------------------'

int main()
{
	srand(static_cast<unsigned int>(time(nullptr)));
	ContractDataBase db{};
	db.loadContracts("DataBase.txt");
	InsuranceContract contract{"Jonas Lie", InsuranceType::Car, 1000, 1242, ""};
	//You can test your code under here

	srand((unsigned) time(0));

	cout << contract;

	cout << db.numberOfInsuranceType(InsuranceType::Car) << endl;

	InsuranceContract c = db.getContract(1234);

	cout << c;

	db.saveContracts("kontrakter.txt");

	cout << toGreek("Hei på deg") << endl;

	vector<vector<string>> all_groups = loadSvada();

	int len = all_groups.size();

	cout << len << endl;

	return 0;
}

//------------------------------------------------------------------------------
