#ifndef __USER_H__
#define __USER_H__

struct User {
	char name[256];
	char password[256];
	bool isAdmin;
};

struct UserArray {
	User * users;

	unsigned int count;
	unsigned int allocated;

	void add(const User & user);
	User * find(char * username);
};

UserArray newUserArray(unsigned int allocatedSize);
void deleteUserArray(UserArray & ua);

#endif //!__USER_H__
