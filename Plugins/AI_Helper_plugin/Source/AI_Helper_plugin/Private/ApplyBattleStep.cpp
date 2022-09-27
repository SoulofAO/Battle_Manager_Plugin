// Fill out your copyright notice in the Description page of Project Settings.


#include "ApplyBattleStep.h"

UWorld* UApplyBattleStep::GetWorld() const
{
	// ���������� ������ �� ��� �� ��������� �������, ���� �� �������� ���������.
	if (GIsEditor && !GIsPlayInEditorWorld) return nullptr;
	else if (GetOuter()) return GetOuter()->GetWorld();
	else return nullptr;
}
