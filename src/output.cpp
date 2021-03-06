#include "output.h"

void Output::loadingDNA_DatabaseMessage(string file_name) {
    cout << "> Loading the DNA database [" << file_name << "]..." << endl;
}
void Output::loadingSequenceDatabaseMessage(string file_name) {
    cout << "> Loading the unknown DNA sequence [" << file_name << "]..." << endl;
}

void Output::inputSuccessLoadedMessage() {
    cout << "> Input files successfully loaded." << endl;
    cout << endl;
}

void Output::someFilesDontExistMessage() {
    cout << "> A input file don't exist." << endl;
}

void Output::errorWithArgumentsMessage() {
    cout << "Error with arguments in execution." << endl;
}

void Output::processingMessage() {
    cout << "> Processing data, please wait..." << endl;
}

void Output::DNA_ProfilingMessage() {
    cout << "> DNA Profiling..." << endl;
}

void Output::foundPersonMessage(string person_name) {
    cout << "Identified person: " << person_name << endl;
}

void Output::notFoundPersonMessage() {
    cout << "Person not found" << endl;
}