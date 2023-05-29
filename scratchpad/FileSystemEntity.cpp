#include "FileSystemEntity.h"
#include <stdexcept>
#include <iostream>


// FileSystemEntity methods

void FileSystemEntity::add(FileSystemEntity* entity)
{
	throw std::runtime_error("Unimplemented");
}

FileSystemEntity* FileSystemEntity::search(std::string name)
{
	throw std::runtime_error("Unimplemented");
}

std::string FileSystemEntity::readContent()
{
	throw std::runtime_error("Unimplemented");
}

void FileSystemEntity::writeContent(std::string newContent)
{
	throw std::runtime_error("Unimplemented");
}

std::string FileSystemEntity::getExtension()
{
	throw std::runtime_error("Unimplemented");
}

void FileSystemEntity::printInfo()
{
	throw std::runtime_error("Unimplemented");
}

std::string FileSystemEntity::getName()
{
	throw std::runtime_error("Unimplemented");
}


// Folder methods

void Folder::add(FileSystemEntity* entity)
{
	m_entities.push_back(entity);
}

FileSystemEntity* Folder::search(std::string name)
{
	for (auto entities : m_entities)
	{
		if (entities->getName() == name)
		{
			return entities;
		}
	}
	return nullptr;
}

void Folder::printInfo()
{
	std::cout << "--- Folder ---" << std::endl;
	std::cout << "Name: " << m_name << std::endl;
	std::cout << "Item count : " << m_entities.size() <<
		std::endl;
	for (auto entities : m_entities)
	{
		entities->printInfo();
	}
}

std::string Folder::getName()
{
	return m_name;
}


// File methods

std::string File::readContent()
{
	return std::string();
}

void File::writeContent(std::string newContent)
{
	m_content += newContent;
}

std::string File::getExtension()
{
	return m_extension;
}

void File::printInfo()
{
	std::cout << "--- File ---" << std::endl;
	std::cout << "Name: " << getName() << std::endl;
	std::cout << "Content: " << m_content << std::endl;
	std::cout << "Size: " << m_content.size() << std::endl;
}

std::string File::getName()
{
	return m_name + "." + m_extension;
}
