#pragma once

#include <string>
#include <vector>

class FileSystemEntity
{
public:
	// Folder only
	virtual void add(FileSystemEntity* entity);
	virtual FileSystemEntity* search(std::string name);
	// File only
	virtual std::string readContent();
	virtual void writeContent(std::string newContent);
	virtual std::string getExtension();
	// Useful for all
	virtual void printInfo();
	virtual std::string getName();
};

class Folder : public FileSystemEntity
{
public:
	Folder(std::string name) :
		m_name(name) {};
	void add(FileSystemEntity* entity) override;
	FileSystemEntity* search(std::string name) override;
	void printInfo() override;
	std::string getName() override;
private:
	std::string m_name;
	std::vector<FileSystemEntity*> m_entities;
};

class File : public FileSystemEntity
{
public:
	File(std::string name, std::string extension) : 
		m_name(name), m_extension(extension), m_content(""){};
	// File only
	std::string readContent() override;
	void writeContent(std::string newContent) override;
	std::string getExtension() override;
	// Useful for all
	void printInfo() override;
	std::string getName() override;
private:
	std::string m_name;
	std::string m_extension;
	std::string m_content;
};