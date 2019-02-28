// Fill out your copyright notice in the Description page of Project Settings.

#include "ProtobufExampleGameModeBase.h"

#include "addressbook.pb.h"

void AProtobufExampleGameModeBase::BeginPlay()
{
	tutorial::AddressBook AddressBook;

	auto* Person = AddressBook.add_people();

	Person->set_name("Name");
}