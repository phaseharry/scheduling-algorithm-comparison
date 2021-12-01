#include "Job.h"

Job::Job(float aTime, float sTime) {
	arrivalTime = aTime;
	serviceTime = sTime;
}

Job::Job(int p, float aTime, float sTime) {
	priority = p;
	arrivalTime = aTime;
	serviceTime = sTime;
}

int Job::getPriority() const {
	return priority;
}

float Job::getArrivalTime() const {
	return arrivalTime;
}

float Job::getServiceTime() const {
	return serviceTime;
}

float Job::getRemainingTime() const {
	return remainingTime;
}

float Job::getFinishTime() const {
	return finishTime;
}

float Job::getTurnaroundTime() const {
	return turnaroundTime;
}

float Job::getNormalizedTurnaroundTime() const {
	return normalizedTurnaroundTime;
}

void Job::executingInCPU(float timeQuantum) {
	if (remainingTime < timeQuantum) {
		remainingTime = 0;
	} else {
		remainingTime -= timeQuantum;
	}
}

void Job::setFinishTime(float fTime) {
	finishTime = fTime;
}

void Job::setWaitTime(float wTime) {
	waitingTime = wTime;
}

void Job::setTurnaroundTime(float tat) {
	turnaroundTime = tat;
}

void Job::setNormalizedTurnaroundTime(float nTat) {
	normalizedTurnaroundTime = nTat;
}

