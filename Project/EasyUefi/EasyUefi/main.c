#include <efi.h>
#include <efilib.h>

EFI_STATUS EFIAPI UefiMain(EFI_HANDLE imageHandle, EFI_SYSTEM_TABLE* systemTable)
{
	InitializeLib(imageHandle, systemTable);

	Print(L"Hello there!\n");

	return EFI_SUCCESS;
}
