# ifndef FUZZYQUEUE_H_
# define FUZZYQUEUE_H_
# include <omnetpp.h>
# include <IPPacket_m.h>
using namespace omnetpp;
class FuzzyQueue : public cSimpleModule{
    private:
        int LMAX;
        double L_LP;
        cQueue queue;
        cMessage *endServiceMsg;
    protected:
        virtual void initialize() override;
        virtual void handleMessage(cMessage *msg) override;
};
# endif
