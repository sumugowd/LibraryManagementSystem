#ifndef REPORTMANAGER_H
#define REPORTMANAGER_H

#include "BookManager.h"
#include "UserManager.h"
#include "TransactionManager.h"

class ReportManager{

    public:

        void generateReport(BookManager& bookManager,
                            UserManager& userManager,
                            TransactionManager& transactionManager);
};

#endif