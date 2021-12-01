#pragma once
#ifndef JOB

class Job {
private: 
	int priority;
	float arrivalTime;
	float serviceTime;
	float remainingTime;
	float finishTime;
	float turnaroundTime;
	float normalizedTurnaroundTime;
	float waitingTime;

public:
	Job(float aTime, float sTime);
	Job(int p, float aTime, float sTime);
	int getPriority() const;
	float getArrivalTime() const;
	float getServiceTime() const;
	float getRemainingTime() const;
	float getFinishTime() const;
	float getTurnaroundTime() const;
	float getNormalizedTurnaroundTime() const;
	void executingInCPU(float timeQuantum);
	void setFinishTime(float fTime);
	void setWaitTime(float wTime);
	void setTurnaroundTime(float tat);
	void setNormalizedTurnaroundTime(float nTat);

};
#endif // !JOB
