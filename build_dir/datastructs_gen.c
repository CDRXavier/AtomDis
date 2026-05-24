int ATOM_COMMON_TABLE_HEADER_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_COMMON_TABLE_HEADER *d = (ATOM_COMMON_TABLE_HEADER *) data;
  int i;
  if (d) {
    printf ("%s%04x:  USHORT usStructureSize%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usStructureSize)-start), FILL(21), d->usStructureSize, d->usStructureSize);
    printf ("%s%04x:  UCHAR ucTableFormatRevision%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucTableFormatRevision)-start), FILL(26), d->ucTableFormatRevision, d->ucTableFormatRevision);
    printf ("%s%04x:  UCHAR ucTableContentRevision%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucTableContentRevision)-start), FILL(27), d->ucTableContentRevision, d->ucTableContentRevision);
  }
  return sizeof (ATOM_COMMON_TABLE_HEADER);
}
int ATOM_ROM_HEADER_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_ROM_HEADER *d = (ATOM_ROM_HEADER *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ATOM_COMMON_TABLE_HEADER sHeader%s :\n", IND(indent), (int)(((uint8_t*)&d->sHeader)-start), FILL(31)); ATOM_COMMON_TABLE_HEADER_dumper (start, (uint8_t*) &d->sHeader, indent+1);
    for (i = 0; i < 4; i++) {
      printf ("%s%04x:  UCHAR uaFirmWareSignature%s [%d] = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->uaFirmWareSignature[i])-start), FILL(28+(i>9)), i, d->uaFirmWareSignature[i], d->uaFirmWareSignature[i]); }
    printf ("%s%04x:  USHORT usBiosRuntimeSegmentAddress%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usBiosRuntimeSegmentAddress)-start), FILL(33), d->usBiosRuntimeSegmentAddress, d->usBiosRuntimeSegmentAddress);
    printf ("%s%04x:  USHORT usProtectedModeInfoOffset%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usProtectedModeInfoOffset)-start), FILL(31), d->usProtectedModeInfoOffset, d->usProtectedModeInfoOffset);
    printf ("%s%04x:  USHORT usConfigFilenameOffset%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usConfigFilenameOffset)-start), FILL(28), d->usConfigFilenameOffset, d->usConfigFilenameOffset);
    printf ("%s%04x:  USHORT usCRC_BlockOffset%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usCRC_BlockOffset)-start), FILL(23), d->usCRC_BlockOffset, d->usCRC_BlockOffset);
    printf ("%s%04x:  USHORT usBIOS_BootupMessageOffset%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usBIOS_BootupMessageOffset)-start), FILL(32), d->usBIOS_BootupMessageOffset, d->usBIOS_BootupMessageOffset);
    printf ("%s%04x:  USHORT usInt10Offset%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usInt10Offset)-start), FILL(19), d->usInt10Offset, d->usInt10Offset);
    printf ("%s%04x:  USHORT usPciBusDevInitCode%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usPciBusDevInitCode)-start), FILL(25), d->usPciBusDevInitCode, d->usPciBusDevInitCode);
    printf ("%s%04x:  USHORT usIoBaseAddress%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usIoBaseAddress)-start), FILL(21), d->usIoBaseAddress, d->usIoBaseAddress);
    printf ("%s%04x:  USHORT usSubsystemVendorID%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usSubsystemVendorID)-start), FILL(25), d->usSubsystemVendorID, d->usSubsystemVendorID);
    printf ("%s%04x:  USHORT usSubsystemID%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usSubsystemID)-start), FILL(19), d->usSubsystemID, d->usSubsystemID);
    printf ("%s%04x:  USHORT usPCI_InfoOffset%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usPCI_InfoOffset)-start), FILL(22), d->usPCI_InfoOffset, d->usPCI_InfoOffset);
    printf ("%s%04x:  USHORT usMasterCommandTableOffset%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usMasterCommandTableOffset)-start), FILL(32), d->usMasterCommandTableOffset, d->usMasterCommandTableOffset);
    printf ("%s%04x:  USHORT usMasterDataTableOffset%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usMasterDataTableOffset)-start), FILL(29), d->usMasterDataTableOffset, d->usMasterDataTableOffset);
    printf ("%s%04x:  UCHAR ucExtendedFunctionCode%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucExtendedFunctionCode)-start), FILL(27), d->ucExtendedFunctionCode, d->ucExtendedFunctionCode);
    printf ("%s%04x:  UCHAR ucReserved%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucReserved)-start), FILL(15), d->ucReserved, d->ucReserved);
  }
  return sizeof (ATOM_ROM_HEADER);
}
int ATOM_MASTER_LIST_OF_COMMAND_TABLES_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_MASTER_LIST_OF_COMMAND_TABLES *d = (ATOM_MASTER_LIST_OF_COMMAND_TABLES *) data;
  int i;
  if (d) {
    printf ("%s%04x:  USHORT ASIC_Init%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->ASIC_Init)-start), FILL(15), d->ASIC_Init, d->ASIC_Init);
    printf ("%s%04x:  USHORT GetDisplaySurfaceSize%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->GetDisplaySurfaceSize)-start), FILL(27), d->GetDisplaySurfaceSize, d->GetDisplaySurfaceSize);
    printf ("%s%04x:  USHORT ASIC_RegistersInit%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->ASIC_RegistersInit)-start), FILL(24), d->ASIC_RegistersInit, d->ASIC_RegistersInit);
    printf ("%s%04x:  USHORT VRAM_BlockVenderDetection%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->VRAM_BlockVenderDetection)-start), FILL(31), d->VRAM_BlockVenderDetection, d->VRAM_BlockVenderDetection);
    printf ("%s%04x:  USHORT DIGxEncoderControl%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->DIGxEncoderControl)-start), FILL(24), d->DIGxEncoderControl, d->DIGxEncoderControl);
    printf ("%s%04x:  USHORT MemoryControllerInit%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->MemoryControllerInit)-start), FILL(26), d->MemoryControllerInit, d->MemoryControllerInit);
    printf ("%s%04x:  USHORT EnableCRTCMemReq%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->EnableCRTCMemReq)-start), FILL(22), d->EnableCRTCMemReq, d->EnableCRTCMemReq);
    printf ("%s%04x:  USHORT MemoryParamAdjust%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->MemoryParamAdjust)-start), FILL(23), d->MemoryParamAdjust, d->MemoryParamAdjust);
    printf ("%s%04x:  USHORT DVOEncoderControl%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->DVOEncoderControl)-start), FILL(23), d->DVOEncoderControl, d->DVOEncoderControl);
    printf ("%s%04x:  USHORT GPIOPinControl%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->GPIOPinControl)-start), FILL(20), d->GPIOPinControl, d->GPIOPinControl);
    printf ("%s%04x:  USHORT SetEngineClock%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->SetEngineClock)-start), FILL(20), d->SetEngineClock, d->SetEngineClock);
    printf ("%s%04x:  USHORT SetMemoryClock%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->SetMemoryClock)-start), FILL(20), d->SetMemoryClock, d->SetMemoryClock);
    printf ("%s%04x:  USHORT SetPixelClock%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->SetPixelClock)-start), FILL(19), d->SetPixelClock, d->SetPixelClock);
    printf ("%s%04x:  USHORT DynamicClockGating%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->DynamicClockGating)-start), FILL(24), d->DynamicClockGating, d->DynamicClockGating);
    printf ("%s%04x:  USHORT ResetMemoryDLL%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->ResetMemoryDLL)-start), FILL(20), d->ResetMemoryDLL, d->ResetMemoryDLL);
    printf ("%s%04x:  USHORT ResetMemoryDevice%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->ResetMemoryDevice)-start), FILL(23), d->ResetMemoryDevice, d->ResetMemoryDevice);
    printf ("%s%04x:  USHORT MemoryPLLInit%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->MemoryPLLInit)-start), FILL(19), d->MemoryPLLInit, d->MemoryPLLInit);
    printf ("%s%04x:  USHORT AdjustDisplayPll%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->AdjustDisplayPll)-start), FILL(22), d->AdjustDisplayPll, d->AdjustDisplayPll);
    printf ("%s%04x:  USHORT AdjustMemoryController%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->AdjustMemoryController)-start), FILL(28), d->AdjustMemoryController, d->AdjustMemoryController);
    printf ("%s%04x:  USHORT EnableASIC_StaticPwrMgt%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->EnableASIC_StaticPwrMgt)-start), FILL(29), d->EnableASIC_StaticPwrMgt, d->EnableASIC_StaticPwrMgt);
    printf ("%s%04x:  USHORT ASIC_StaticPwrMgtStatusChange%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->ASIC_StaticPwrMgtStatusChange)-start), FILL(35), d->ASIC_StaticPwrMgtStatusChange, d->ASIC_StaticPwrMgtStatusChange);
    printf ("%s%04x:  USHORT DAC_LoadDetection%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->DAC_LoadDetection)-start), FILL(23), d->DAC_LoadDetection, d->DAC_LoadDetection);
    printf ("%s%04x:  USHORT LVTMAEncoderControl%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->LVTMAEncoderControl)-start), FILL(25), d->LVTMAEncoderControl, d->LVTMAEncoderControl);
    printf ("%s%04x:  USHORT LCD1OutputControl%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->LCD1OutputControl)-start), FILL(23), d->LCD1OutputControl, d->LCD1OutputControl);
    printf ("%s%04x:  USHORT DAC1EncoderControl%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->DAC1EncoderControl)-start), FILL(24), d->DAC1EncoderControl, d->DAC1EncoderControl);
    printf ("%s%04x:  USHORT DAC2EncoderControl%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->DAC2EncoderControl)-start), FILL(24), d->DAC2EncoderControl, d->DAC2EncoderControl);
    printf ("%s%04x:  USHORT DVOOutputControl%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->DVOOutputControl)-start), FILL(22), d->DVOOutputControl, d->DVOOutputControl);
    printf ("%s%04x:  USHORT CV1OutputControl%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->CV1OutputControl)-start), FILL(22), d->CV1OutputControl, d->CV1OutputControl);
    printf ("%s%04x:  USHORT GetConditionalGoldenSetting%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->GetConditionalGoldenSetting)-start), FILL(33), d->GetConditionalGoldenSetting, d->GetConditionalGoldenSetting);
    printf ("%s%04x:  USHORT TVEncoderControl%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->TVEncoderControl)-start), FILL(22), d->TVEncoderControl, d->TVEncoderControl);
    printf ("%s%04x:  USHORT TMDSAEncoderControl%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->TMDSAEncoderControl)-start), FILL(25), d->TMDSAEncoderControl, d->TMDSAEncoderControl);
    printf ("%s%04x:  USHORT LVDSEncoderControl%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->LVDSEncoderControl)-start), FILL(24), d->LVDSEncoderControl, d->LVDSEncoderControl);
    printf ("%s%04x:  USHORT TV1OutputControl%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->TV1OutputControl)-start), FILL(22), d->TV1OutputControl, d->TV1OutputControl);
    printf ("%s%04x:  USHORT EnableScaler%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->EnableScaler)-start), FILL(18), d->EnableScaler, d->EnableScaler);
    printf ("%s%04x:  USHORT BlankCRTC%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->BlankCRTC)-start), FILL(15), d->BlankCRTC, d->BlankCRTC);
    printf ("%s%04x:  USHORT EnableCRTC%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->EnableCRTC)-start), FILL(16), d->EnableCRTC, d->EnableCRTC);
    printf ("%s%04x:  USHORT GetPixelClock%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->GetPixelClock)-start), FILL(19), d->GetPixelClock, d->GetPixelClock);
    printf ("%s%04x:  USHORT EnableVGA_Render%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->EnableVGA_Render)-start), FILL(22), d->EnableVGA_Render, d->EnableVGA_Render);
    printf ("%s%04x:  USHORT GetSCLKOverMCLKRatio%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->GetSCLKOverMCLKRatio)-start), FILL(26), d->GetSCLKOverMCLKRatio, d->GetSCLKOverMCLKRatio);
    printf ("%s%04x:  USHORT SetCRTC_Timing%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->SetCRTC_Timing)-start), FILL(20), d->SetCRTC_Timing, d->SetCRTC_Timing);
    printf ("%s%04x:  USHORT SetCRTC_OverScan%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->SetCRTC_OverScan)-start), FILL(22), d->SetCRTC_OverScan, d->SetCRTC_OverScan);
    printf ("%s%04x:  USHORT SetCRTC_Replication%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->SetCRTC_Replication)-start), FILL(25), d->SetCRTC_Replication, d->SetCRTC_Replication);
    printf ("%s%04x:  USHORT SelectCRTC_Source%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->SelectCRTC_Source)-start), FILL(23), d->SelectCRTC_Source, d->SelectCRTC_Source);
    printf ("%s%04x:  USHORT EnableGraphSurfaces%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->EnableGraphSurfaces)-start), FILL(25), d->EnableGraphSurfaces, d->EnableGraphSurfaces);
    printf ("%s%04x:  USHORT UpdateCRTC_DoubleBufferRegisters%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->UpdateCRTC_DoubleBufferRegisters)-start), FILL(38), d->UpdateCRTC_DoubleBufferRegisters, d->UpdateCRTC_DoubleBufferRegisters);
    printf ("%s%04x:  USHORT LUT_AutoFill%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->LUT_AutoFill)-start), FILL(18), d->LUT_AutoFill, d->LUT_AutoFill);
    printf ("%s%04x:  USHORT EnableHW_IconCursor%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->EnableHW_IconCursor)-start), FILL(25), d->EnableHW_IconCursor, d->EnableHW_IconCursor);
    printf ("%s%04x:  USHORT GetMemoryClock%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->GetMemoryClock)-start), FILL(20), d->GetMemoryClock, d->GetMemoryClock);
    printf ("%s%04x:  USHORT GetEngineClock%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->GetEngineClock)-start), FILL(20), d->GetEngineClock, d->GetEngineClock);
    printf ("%s%04x:  USHORT SetCRTC_UsingDTDTiming%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->SetCRTC_UsingDTDTiming)-start), FILL(28), d->SetCRTC_UsingDTDTiming, d->SetCRTC_UsingDTDTiming);
    printf ("%s%04x:  USHORT ExternalEncoderControl%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->ExternalEncoderControl)-start), FILL(28), d->ExternalEncoderControl, d->ExternalEncoderControl);
    printf ("%s%04x:  USHORT LVTMAOutputControl%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->LVTMAOutputControl)-start), FILL(24), d->LVTMAOutputControl, d->LVTMAOutputControl);
    printf ("%s%04x:  USHORT VRAM_BlockDetectionByStrap%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->VRAM_BlockDetectionByStrap)-start), FILL(32), d->VRAM_BlockDetectionByStrap, d->VRAM_BlockDetectionByStrap);
    printf ("%s%04x:  USHORT MemoryCleanUp%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->MemoryCleanUp)-start), FILL(19), d->MemoryCleanUp, d->MemoryCleanUp);
    printf ("%s%04x:  USHORT ProcessI2cChannelTransaction%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->ProcessI2cChannelTransaction)-start), FILL(34), d->ProcessI2cChannelTransaction, d->ProcessI2cChannelTransaction);
    printf ("%s%04x:  USHORT WriteOneByteToHWAssistedI2C%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->WriteOneByteToHWAssistedI2C)-start), FILL(33), d->WriteOneByteToHWAssistedI2C, d->WriteOneByteToHWAssistedI2C);
    printf ("%s%04x:  USHORT ReadHWAssistedI2CStatus%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->ReadHWAssistedI2CStatus)-start), FILL(29), d->ReadHWAssistedI2CStatus, d->ReadHWAssistedI2CStatus);
    printf ("%s%04x:  USHORT SpeedFanControl%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->SpeedFanControl)-start), FILL(21), d->SpeedFanControl, d->SpeedFanControl);
    printf ("%s%04x:  USHORT PowerConnectorDetection%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->PowerConnectorDetection)-start), FILL(29), d->PowerConnectorDetection, d->PowerConnectorDetection);
    printf ("%s%04x:  USHORT MC_Synchronization%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->MC_Synchronization)-start), FILL(24), d->MC_Synchronization, d->MC_Synchronization);
    printf ("%s%04x:  USHORT ComputeMemoryEnginePLL%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->ComputeMemoryEnginePLL)-start), FILL(28), d->ComputeMemoryEnginePLL, d->ComputeMemoryEnginePLL);
    printf ("%s%04x:  USHORT MemoryRefreshConversion%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->MemoryRefreshConversion)-start), FILL(29), d->MemoryRefreshConversion, d->MemoryRefreshConversion);
    printf ("%s%04x:  USHORT VRAM_GetCurrentInfoBlock%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->VRAM_GetCurrentInfoBlock)-start), FILL(30), d->VRAM_GetCurrentInfoBlock, d->VRAM_GetCurrentInfoBlock);
    printf ("%s%04x:  USHORT DynamicMemorySettings%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->DynamicMemorySettings)-start), FILL(27), d->DynamicMemorySettings, d->DynamicMemorySettings);
    printf ("%s%04x:  USHORT MemoryTraining%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->MemoryTraining)-start), FILL(20), d->MemoryTraining, d->MemoryTraining);
    printf ("%s%04x:  USHORT EnableSpreadSpectrumOnPPLL%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->EnableSpreadSpectrumOnPPLL)-start), FILL(32), d->EnableSpreadSpectrumOnPPLL, d->EnableSpreadSpectrumOnPPLL);
    printf ("%s%04x:  USHORT TMDSAOutputControl%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->TMDSAOutputControl)-start), FILL(24), d->TMDSAOutputControl, d->TMDSAOutputControl);
    printf ("%s%04x:  USHORT SetVoltage%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->SetVoltage)-start), FILL(16), d->SetVoltage, d->SetVoltage);
    printf ("%s%04x:  USHORT DAC1OutputControl%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->DAC1OutputControl)-start), FILL(23), d->DAC1OutputControl, d->DAC1OutputControl);
    printf ("%s%04x:  USHORT DAC2OutputControl%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->DAC2OutputControl)-start), FILL(23), d->DAC2OutputControl, d->DAC2OutputControl);
    printf ("%s%04x:  USHORT SetupHWAssistedI2CStatus%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->SetupHWAssistedI2CStatus)-start), FILL(30), d->SetupHWAssistedI2CStatus, d->SetupHWAssistedI2CStatus);
    printf ("%s%04x:  USHORT ClockSource%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->ClockSource)-start), FILL(17), d->ClockSource, d->ClockSource);
    printf ("%s%04x:  USHORT MemoryDeviceInit%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->MemoryDeviceInit)-start), FILL(22), d->MemoryDeviceInit, d->MemoryDeviceInit);
    printf ("%s%04x:  USHORT EnableYUV%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->EnableYUV)-start), FILL(15), d->EnableYUV, d->EnableYUV);
    printf ("%s%04x:  USHORT DIG1EncoderControl%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->DIG1EncoderControl)-start), FILL(24), d->DIG1EncoderControl, d->DIG1EncoderControl);
    printf ("%s%04x:  USHORT DIG2EncoderControl%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->DIG2EncoderControl)-start), FILL(24), d->DIG2EncoderControl, d->DIG2EncoderControl);
    printf ("%s%04x:  USHORT DIG1TransmitterControl%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->DIG1TransmitterControl)-start), FILL(28), d->DIG1TransmitterControl, d->DIG1TransmitterControl);
    printf ("%s%04x:  USHORT DIG2TransmitterControl%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->DIG2TransmitterControl)-start), FILL(28), d->DIG2TransmitterControl, d->DIG2TransmitterControl);
    printf ("%s%04x:  USHORT ProcessAuxChannelTransaction%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->ProcessAuxChannelTransaction)-start), FILL(34), d->ProcessAuxChannelTransaction, d->ProcessAuxChannelTransaction);
    printf ("%s%04x:  USHORT DPEncoderService%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->DPEncoderService)-start), FILL(22), d->DPEncoderService, d->DPEncoderService);
  }
  return sizeof (ATOM_MASTER_LIST_OF_COMMAND_TABLES);
}
int ATOM_MASTER_COMMAND_TABLE_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_MASTER_COMMAND_TABLE *d = (ATOM_MASTER_COMMAND_TABLE *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ATOM_COMMON_TABLE_HEADER sHeader%s :\n", IND(indent), (int)(((uint8_t*)&d->sHeader)-start), FILL(31)); ATOM_COMMON_TABLE_HEADER_dumper (start, (uint8_t*) &d->sHeader, indent+1);
    printf ("%s%04x:  ATOM_MASTER_LIST_OF_COMMAND_TABLES ListOfCommandTables%s :\n", IND(indent), (int)(((uint8_t*)&d->ListOfCommandTables)-start), FILL(53)); ATOM_MASTER_LIST_OF_COMMAND_TABLES_dumper (start, (uint8_t*) &d->ListOfCommandTables, indent+1);
  }
  return sizeof (ATOM_MASTER_COMMAND_TABLE);
}
int ATOM_TABLE_ATTRIBUTE_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_TABLE_ATTRIBUTE *d = (ATOM_TABLE_ATTRIBUTE *) data;
  int i;
  if (d) {
    printf ("%s       USHORT WS_SizeInBytes:8%s = 0x%04x     (%d)\n", IND(indent), FILL(22), d->WS_SizeInBytes, d->WS_SizeInBytes);
    printf ("%s       USHORT PS_SizeInBytes:7%s = 0x%04x     (%d)\n", IND(indent), FILL(22), d->PS_SizeInBytes, d->PS_SizeInBytes);
    printf ("%s       USHORT UpdatedByUtility:1%s = 0x%04x     (%d)\n", IND(indent), FILL(24), d->UpdatedByUtility, d->UpdatedByUtility);
  }
  return sizeof (ATOM_TABLE_ATTRIBUTE);
}
int ATOM_TABLE_ATTRIBUTE_ACCESS_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_TABLE_ATTRIBUTE_ACCESS *d = (ATOM_TABLE_ATTRIBUTE_ACCESS *) data;
  int i;
  if (d) {
    printf ("%s%04x:  (union) ATOM_TABLE_ATTRIBUTE sbfAccess%s :\n", IND(indent), (int)(((uint8_t*)&d->sbfAccess)-start), FILL(37)); ATOM_TABLE_ATTRIBUTE_dumper (start, (uint8_t*) &d->sbfAccess, indent+1);
    printf ("%s%04x:  (union) USHORT susAccess%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->susAccess)-start), FILL(23), d->susAccess, d->susAccess);
  }
  return sizeof (ATOM_TABLE_ATTRIBUTE_ACCESS);
}
int ATOM_COMMON_ROM_COMMAND_TABLE_HEADER_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_COMMON_ROM_COMMAND_TABLE_HEADER *d = (ATOM_COMMON_ROM_COMMAND_TABLE_HEADER *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ATOM_COMMON_TABLE_HEADER CommonHeader%s :\n", IND(indent), (int)(((uint8_t*)&d->CommonHeader)-start), FILL(36)); ATOM_COMMON_TABLE_HEADER_dumper (start, (uint8_t*) &d->CommonHeader, indent+1);
    printf ("%s%04x:  ATOM_TABLE_ATTRIBUTE TableAttribute%s :\n", IND(indent), (int)(((uint8_t*)&d->TableAttribute)-start), FILL(34)); ATOM_TABLE_ATTRIBUTE_dumper (start, (uint8_t*) &d->TableAttribute, indent+1);
  }
  return sizeof (ATOM_COMMON_ROM_COMMAND_TABLE_HEADER);
}
int ATOM_ADJUST_MEMORY_CLOCK_FREQ_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_ADJUST_MEMORY_CLOCK_FREQ *d = (ATOM_ADJUST_MEMORY_CLOCK_FREQ *) data;
  int i;
  if (d) {
    printf ("%s       ULONG ulClockFreq:24%s = 0x%08x (%d)\n", IND(indent), FILL(19), d->ulClockFreq, d->ulClockFreq);
    printf ("%s       ULONG ulMemoryModuleNumber:7%s = 0x%08x (%d)\n", IND(indent), FILL(27), d->ulMemoryModuleNumber, d->ulMemoryModuleNumber);
    printf ("%s       ULONG ulPointerReturnFlag:1%s = 0x%08x (%d)\n", IND(indent), FILL(26), d->ulPointerReturnFlag, d->ulPointerReturnFlag);
  }
  return sizeof (ATOM_ADJUST_MEMORY_CLOCK_FREQ);
}
int COMPUTE_MEMORY_ENGINE_PLL_PARAMETERS_dumper (uint8_t *start, uint8_t *data, int indent) {
  COMPUTE_MEMORY_ENGINE_PLL_PARAMETERS *d = (COMPUTE_MEMORY_ENGINE_PLL_PARAMETERS *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ULONG ulClock%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulClock)-start), FILL(12), d->ulClock, d->ulClock);
    printf ("%s%04x:  UCHAR ucAction%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucAction)-start), FILL(13), d->ucAction, d->ucAction);
    printf ("%s%04x:  UCHAR ucReserved%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucReserved)-start), FILL(15), d->ucReserved, d->ucReserved);
    printf ("%s%04x:  UCHAR ucFbDiv%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucFbDiv)-start), FILL(12), d->ucFbDiv, d->ucFbDiv);
    printf ("%s%04x:  UCHAR ucPostDiv%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucPostDiv)-start), FILL(14), d->ucPostDiv, d->ucPostDiv);
  }
  return sizeof (COMPUTE_MEMORY_ENGINE_PLL_PARAMETERS);
}
int COMPUTE_MEMORY_ENGINE_PLL_PARAMETERS_V2_dumper (uint8_t *start, uint8_t *data, int indent) {
  COMPUTE_MEMORY_ENGINE_PLL_PARAMETERS_V2 *d = (COMPUTE_MEMORY_ENGINE_PLL_PARAMETERS_V2 *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ULONG ulClock%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulClock)-start), FILL(12), d->ulClock, d->ulClock);
    printf ("%s%04x:  UCHAR ucAction%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucAction)-start), FILL(13), d->ucAction, d->ucAction);
    printf ("%s%04x:  USHORT usFbDiv%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usFbDiv)-start), FILL(13), d->usFbDiv, d->usFbDiv);
    printf ("%s%04x:  UCHAR ucPostDiv%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucPostDiv)-start), FILL(14), d->ucPostDiv, d->ucPostDiv);
  }
  return sizeof (COMPUTE_MEMORY_ENGINE_PLL_PARAMETERS_V2);
}
int ATOM_COMPUTE_CLOCK_FREQ_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_COMPUTE_CLOCK_FREQ *d = (ATOM_COMPUTE_CLOCK_FREQ *) data;
  int i;
  if (d) {
    printf ("%s       ULONG ulClockFreq:24%s = 0x%08x (%d)\n", IND(indent), FILL(19), d->ulClockFreq, d->ulClockFreq);
    printf ("%s       ULONG ulComputeClockFlag:8%s = 0x%08x (%d)\n", IND(indent), FILL(25), d->ulComputeClockFlag, d->ulComputeClockFlag);
  }
  return sizeof (ATOM_COMPUTE_CLOCK_FREQ);
}
int ATOM_S_MPLL_FB_DIVIDER_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_S_MPLL_FB_DIVIDER *d = (ATOM_S_MPLL_FB_DIVIDER *) data;
  int i;
  if (d) {
    printf ("%s%04x:  USHORT usFbDivFrac%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usFbDivFrac)-start), FILL(17), d->usFbDivFrac, d->usFbDivFrac);
    printf ("%s%04x:  USHORT usFbDiv%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usFbDiv)-start), FILL(13), d->usFbDiv, d->usFbDiv);
  }
  return sizeof (ATOM_S_MPLL_FB_DIVIDER);
}
int COMPUTE_MEMORY_ENGINE_PLL_PARAMETERS_V3_dumper (uint8_t *start, uint8_t *data, int indent) {
  COMPUTE_MEMORY_ENGINE_PLL_PARAMETERS_V3 *d = (COMPUTE_MEMORY_ENGINE_PLL_PARAMETERS_V3 *) data;
  int i;
  if (d) {
    printf ("%s  <unparsable> line 529:   union\n%sskipping...\n", IND(indent), IND(indent));
  }
  return sizeof (COMPUTE_MEMORY_ENGINE_PLL_PARAMETERS_V3);
}
int COMPUTE_MEMORY_ENGINE_PLL_PARAMETERS_V4_dumper (uint8_t *start, uint8_t *data, int indent) {
  COMPUTE_MEMORY_ENGINE_PLL_PARAMETERS_V4 *d = (COMPUTE_MEMORY_ENGINE_PLL_PARAMETERS_V4 *) data;
  int i;
  if (d) {
    printf ("%s       ULONG ulClock:24%s = 0x%08x (%d)\n", IND(indent), FILL(15), d->ulClock, d->ulClock);
    printf ("%s%04x:  ULONG ucPostDiv%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucPostDiv)-start), FILL(14), d->ucPostDiv, d->ucPostDiv);
  }
  return sizeof (COMPUTE_MEMORY_ENGINE_PLL_PARAMETERS_V4);
}
int COMPUTE_MEMORY_ENGINE_PLL_PARAMETERS_V5_dumper (uint8_t *start, uint8_t *data, int indent) {
  COMPUTE_MEMORY_ENGINE_PLL_PARAMETERS_V5 *d = (COMPUTE_MEMORY_ENGINE_PLL_PARAMETERS_V5 *) data;
  int i;
  if (d) {
    printf ("%s  <unparsable> line 553:   union\n%sskipping...\n", IND(indent), IND(indent));
  }
  return sizeof (COMPUTE_MEMORY_ENGINE_PLL_PARAMETERS_V5);
}
int DYNAMICE_MEMORY_SETTINGS_PARAMETER_dumper (uint8_t *start, uint8_t *data, int indent) {
  DYNAMICE_MEMORY_SETTINGS_PARAMETER *d = (DYNAMICE_MEMORY_SETTINGS_PARAMETER *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ATOM_COMPUTE_CLOCK_FREQ ulClock%s :\n", IND(indent), (int)(((uint8_t*)&d->ulClock)-start), FILL(30)); ATOM_COMPUTE_CLOCK_FREQ_dumper (start, (uint8_t*) &d->ulClock, indent+1);
    for (i = 0; i < 2; i++) {
      printf ("%s%04x:  ULONG ulReserved%s [%d] = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulReserved[i])-start), FILL(19+(i>9)), i, d->ulReserved[i], d->ulReserved[i]); }
  }
  return sizeof (DYNAMICE_MEMORY_SETTINGS_PARAMETER);
}
int DYNAMICE_ENGINE_SETTINGS_PARAMETER_dumper (uint8_t *start, uint8_t *data, int indent) {
  DYNAMICE_ENGINE_SETTINGS_PARAMETER *d = (DYNAMICE_ENGINE_SETTINGS_PARAMETER *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ATOM_COMPUTE_CLOCK_FREQ ulClock%s :\n", IND(indent), (int)(((uint8_t*)&d->ulClock)-start), FILL(30)); ATOM_COMPUTE_CLOCK_FREQ_dumper (start, (uint8_t*) &d->ulClock, indent+1);
    printf ("%s%04x:  ULONG ulMemoryClock%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulMemoryClock)-start), FILL(18), d->ulMemoryClock, d->ulMemoryClock);
    printf ("%s%04x:  ULONG ulReserved%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulReserved)-start), FILL(15), d->ulReserved, d->ulReserved);
  }
  return sizeof (DYNAMICE_ENGINE_SETTINGS_PARAMETER);
}
int SET_ENGINE_CLOCK_PARAMETERS_dumper (uint8_t *start, uint8_t *data, int indent) {
  SET_ENGINE_CLOCK_PARAMETERS *d = (SET_ENGINE_CLOCK_PARAMETERS *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ULONG ulTargetEngineClock%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulTargetEngineClock)-start), FILL(24), d->ulTargetEngineClock, d->ulTargetEngineClock);
  }
  return sizeof (SET_ENGINE_CLOCK_PARAMETERS);
}
int SET_ENGINE_CLOCK_PS_ALLOCATION_dumper (uint8_t *start, uint8_t *data, int indent) {
  SET_ENGINE_CLOCK_PS_ALLOCATION *d = (SET_ENGINE_CLOCK_PS_ALLOCATION *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ULONG ulTargetEngineClock%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulTargetEngineClock)-start), FILL(24), d->ulTargetEngineClock, d->ulTargetEngineClock);
    printf ("%s%04x:  COMPUTE_MEMORY_ENGINE_PLL_PARAMETERS sReserved%s :\n", IND(indent), (int)(((uint8_t*)&d->sReserved)-start), FILL(45)); COMPUTE_MEMORY_ENGINE_PLL_PARAMETERS_dumper (start, (uint8_t*) &d->sReserved, indent+1);
  }
  return sizeof (SET_ENGINE_CLOCK_PS_ALLOCATION);
}
int SET_MEMORY_CLOCK_PARAMETERS_dumper (uint8_t *start, uint8_t *data, int indent) {
  SET_MEMORY_CLOCK_PARAMETERS *d = (SET_MEMORY_CLOCK_PARAMETERS *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ULONG ulTargetMemoryClock%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulTargetMemoryClock)-start), FILL(24), d->ulTargetMemoryClock, d->ulTargetMemoryClock);
  }
  return sizeof (SET_MEMORY_CLOCK_PARAMETERS);
}
int SET_MEMORY_CLOCK_PS_ALLOCATION_dumper (uint8_t *start, uint8_t *data, int indent) {
  SET_MEMORY_CLOCK_PS_ALLOCATION *d = (SET_MEMORY_CLOCK_PS_ALLOCATION *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ULONG ulTargetMemoryClock%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulTargetMemoryClock)-start), FILL(24), d->ulTargetMemoryClock, d->ulTargetMemoryClock);
    printf ("%s%04x:  COMPUTE_MEMORY_ENGINE_PLL_PARAMETERS sReserved%s :\n", IND(indent), (int)(((uint8_t*)&d->sReserved)-start), FILL(45)); COMPUTE_MEMORY_ENGINE_PLL_PARAMETERS_dumper (start, (uint8_t*) &d->sReserved, indent+1);
  }
  return sizeof (SET_MEMORY_CLOCK_PS_ALLOCATION);
}
int ASIC_INIT_PARAMETERS_dumper (uint8_t *start, uint8_t *data, int indent) {
  ASIC_INIT_PARAMETERS *d = (ASIC_INIT_PARAMETERS *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ULONG ulDefaultEngineClock%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulDefaultEngineClock)-start), FILL(25), d->ulDefaultEngineClock, d->ulDefaultEngineClock);
    printf ("%s%04x:  ULONG ulDefaultMemoryClock%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulDefaultMemoryClock)-start), FILL(25), d->ulDefaultMemoryClock, d->ulDefaultMemoryClock);
  }
  return sizeof (ASIC_INIT_PARAMETERS);
}
int ASIC_INIT_PS_ALLOCATION_dumper (uint8_t *start, uint8_t *data, int indent) {
  ASIC_INIT_PS_ALLOCATION *d = (ASIC_INIT_PS_ALLOCATION *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ASIC_INIT_PARAMETERS sASICInitClocks%s :\n", IND(indent), (int)(((uint8_t*)&d->sASICInitClocks)-start), FILL(35)); ASIC_INIT_PARAMETERS_dumper (start, (uint8_t*) &d->sASICInitClocks, indent+1);
    printf ("%s%04x:  SET_ENGINE_CLOCK_PS_ALLOCATION sReserved%s :\n", IND(indent), (int)(((uint8_t*)&d->sReserved)-start), FILL(39)); SET_ENGINE_CLOCK_PS_ALLOCATION_dumper (start, (uint8_t*) &d->sReserved, indent+1);
  }
  return sizeof (ASIC_INIT_PS_ALLOCATION);
}
int DYNAMIC_CLOCK_GATING_PARAMETERS_dumper (uint8_t *start, uint8_t *data, int indent) {
  DYNAMIC_CLOCK_GATING_PARAMETERS *d = (DYNAMIC_CLOCK_GATING_PARAMETERS *) data;
  int i;
  if (d) {
    printf ("%s%04x:  UCHAR ucEnable%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucEnable)-start), FILL(13), d->ucEnable, d->ucEnable);
    for (i = 0; i < 3; i++) {
      printf ("%s%04x:  UCHAR ucPadding%s [%d] = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucPadding[i])-start), FILL(18+(i>9)), i, d->ucPadding[i], d->ucPadding[i]); }
  }
  return sizeof (DYNAMIC_CLOCK_GATING_PARAMETERS);
}
int ENABLE_ASIC_STATIC_PWR_MGT_PARAMETERS_dumper (uint8_t *start, uint8_t *data, int indent) {
  ENABLE_ASIC_STATIC_PWR_MGT_PARAMETERS *d = (ENABLE_ASIC_STATIC_PWR_MGT_PARAMETERS *) data;
  int i;
  if (d) {
    printf ("%s%04x:  UCHAR ucEnable%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucEnable)-start), FILL(13), d->ucEnable, d->ucEnable);
    for (i = 0; i < 3; i++) {
      printf ("%s%04x:  UCHAR ucPadding%s [%d] = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucPadding[i])-start), FILL(18+(i>9)), i, d->ucPadding[i], d->ucPadding[i]); }
  }
  return sizeof (ENABLE_ASIC_STATIC_PWR_MGT_PARAMETERS);
}
int DAC_LOAD_DETECTION_PARAMETERS_dumper (uint8_t *start, uint8_t *data, int indent) {
  DAC_LOAD_DETECTION_PARAMETERS *d = (DAC_LOAD_DETECTION_PARAMETERS *) data;
  int i;
  if (d) {
    printf ("%s%04x:  USHORT usDeviceID%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usDeviceID)-start), FILL(16), d->usDeviceID, d->usDeviceID);
    printf ("%s%04x:  UCHAR ucDacType%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucDacType)-start), FILL(14), d->ucDacType, d->ucDacType);
    printf ("%s%04x:  UCHAR ucMisc%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucMisc)-start), FILL(11), d->ucMisc, d->ucMisc);
  }
  return sizeof (DAC_LOAD_DETECTION_PARAMETERS);
}
int DAC_LOAD_DETECTION_PS_ALLOCATION_dumper (uint8_t *start, uint8_t *data, int indent) {
  DAC_LOAD_DETECTION_PS_ALLOCATION *d = (DAC_LOAD_DETECTION_PS_ALLOCATION *) data;
  int i;
  if (d) {
    printf ("%s%04x:  DAC_LOAD_DETECTION_PARAMETERS sDacload%s :\n", IND(indent), (int)(((uint8_t*)&d->sDacload)-start), FILL(37)); DAC_LOAD_DETECTION_PARAMETERS_dumper (start, (uint8_t*) &d->sDacload, indent+1);
    for (i = 0; i < 2; i++) {
      printf ("%s%04x:  ULONG Reserved%s [%d] = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->Reserved[i])-start), FILL(17+(i>9)), i, d->Reserved[i], d->Reserved[i]); }
  }
  return sizeof (DAC_LOAD_DETECTION_PS_ALLOCATION);
}
int DAC_ENCODER_CONTROL_PARAMETERS_dumper (uint8_t *start, uint8_t *data, int indent) {
  DAC_ENCODER_CONTROL_PARAMETERS *d = (DAC_ENCODER_CONTROL_PARAMETERS *) data;
  int i;
  if (d) {
    printf ("%s%04x:  USHORT usPixelClock%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usPixelClock)-start), FILL(18), d->usPixelClock, d->usPixelClock);
    printf ("%s%04x:  UCHAR ucDacStandard%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucDacStandard)-start), FILL(18), d->ucDacStandard, d->ucDacStandard);
    printf ("%s%04x:  UCHAR ucAction%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucAction)-start), FILL(13), d->ucAction, d->ucAction);
  }
  return sizeof (DAC_ENCODER_CONTROL_PARAMETERS);
}
int DIG_ENCODER_CONTROL_PARAMETERS_dumper (uint8_t *start, uint8_t *data, int indent) {
  DIG_ENCODER_CONTROL_PARAMETERS *d = (DIG_ENCODER_CONTROL_PARAMETERS *) data;
  int i;
  if (d) {
    printf ("%s%04x:  USHORT usPixelClock%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usPixelClock)-start), FILL(18), d->usPixelClock, d->usPixelClock);
    printf ("%s%04x:  UCHAR ucConfig%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucConfig)-start), FILL(13), d->ucConfig, d->ucConfig);
    printf ("%s%04x:  UCHAR ucAction%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucAction)-start), FILL(13), d->ucAction, d->ucAction);
    printf ("%s%04x:  UCHAR ucEncoderMode%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucEncoderMode)-start), FILL(18), d->ucEncoderMode, d->ucEncoderMode);
    printf ("%s%04x:  UCHAR ucLaneNum%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucLaneNum)-start), FILL(14), d->ucLaneNum, d->ucLaneNum);
    for (i = 0; i < 2; i++) {
      printf ("%s%04x:  UCHAR ucReserved%s [%d] = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucReserved[i])-start), FILL(19+(i>9)), i, d->ucReserved[i], d->ucReserved[i]); }
  }
  return sizeof (DIG_ENCODER_CONTROL_PARAMETERS);
}
int ATOM_DIG_ENCODER_CONFIG_V2_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_DIG_ENCODER_CONFIG_V2 *d = (ATOM_DIG_ENCODER_CONFIG_V2 *) data;
  int i;
  if (d) {
    printf ("%s       UCHAR ucDPLinkRate:1%s = 0x%02x       (%d)\n", IND(indent), FILL(19), d->ucDPLinkRate, d->ucDPLinkRate);
    printf ("%s       UCHAR ucReserved:1%s = 0x%02x       (%d)\n", IND(indent), FILL(17), d->ucReserved, d->ucReserved);
    printf ("%s       UCHAR ucLinkSel:1%s = 0x%02x       (%d)\n", IND(indent), FILL(16), d->ucLinkSel, d->ucLinkSel);
    printf ("%s       UCHAR ucTransmitterSel:2%s = 0x%02x       (%d)\n", IND(indent), FILL(23), d->ucTransmitterSel, d->ucTransmitterSel);
    printf ("%s       UCHAR ucReserved1:2%s = 0x%02x       (%d)\n", IND(indent), FILL(18), d->ucReserved1, d->ucReserved1);
  }
  return sizeof (ATOM_DIG_ENCODER_CONFIG_V2);
}
int DIG_ENCODER_CONTROL_PARAMETERS_V2_dumper (uint8_t *start, uint8_t *data, int indent) {
  DIG_ENCODER_CONTROL_PARAMETERS_V2 *d = (DIG_ENCODER_CONTROL_PARAMETERS_V2 *) data;
  int i;
  if (d) {
    printf ("%s%04x:  USHORT usPixelClock%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usPixelClock)-start), FILL(18), d->usPixelClock, d->usPixelClock);
    printf ("%s%04x:  ATOM_DIG_ENCODER_CONFIG_V2 acConfig%s :\n", IND(indent), (int)(((uint8_t*)&d->acConfig)-start), FILL(34)); ATOM_DIG_ENCODER_CONFIG_V2_dumper (start, (uint8_t*) &d->acConfig, indent+1);
    printf ("%s%04x:  UCHAR ucAction%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucAction)-start), FILL(13), d->ucAction, d->ucAction);
    printf ("%s%04x:  UCHAR ucEncoderMode%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucEncoderMode)-start), FILL(18), d->ucEncoderMode, d->ucEncoderMode);
    printf ("%s%04x:  UCHAR ucLaneNum%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucLaneNum)-start), FILL(14), d->ucLaneNum, d->ucLaneNum);
    printf ("%s%04x:  UCHAR ucStatus%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucStatus)-start), FILL(13), d->ucStatus, d->ucStatus);
    printf ("%s%04x:  UCHAR ucReserved%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucReserved)-start), FILL(15), d->ucReserved, d->ucReserved);
  }
  return sizeof (DIG_ENCODER_CONTROL_PARAMETERS_V2);
}
int ATOM_DIG_ENCODER_CONFIG_V3_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_DIG_ENCODER_CONFIG_V3 *d = (ATOM_DIG_ENCODER_CONFIG_V3 *) data;
  int i;
  if (d) {
    printf ("%s       UCHAR ucDPLinkRate:1%s = 0x%02x       (%d)\n", IND(indent), FILL(19), d->ucDPLinkRate, d->ucDPLinkRate);
    printf ("%s       UCHAR ucReserved:3%s = 0x%02x       (%d)\n", IND(indent), FILL(17), d->ucReserved, d->ucReserved);
    printf ("%s       UCHAR ucDigSel:3%s = 0x%02x       (%d)\n", IND(indent), FILL(15), d->ucDigSel, d->ucDigSel);
    printf ("%s       UCHAR ucReserved1:1%s = 0x%02x       (%d)\n", IND(indent), FILL(18), d->ucReserved1, d->ucReserved1);
  }
  return sizeof (ATOM_DIG_ENCODER_CONFIG_V3);
}
int DIG_ENCODER_CONTROL_PARAMETERS_V3_dumper (uint8_t *start, uint8_t *data, int indent) {
  DIG_ENCODER_CONTROL_PARAMETERS_V3 *d = (DIG_ENCODER_CONTROL_PARAMETERS_V3 *) data;
  int i;
  if (d) {
    printf ("%s%04x:  USHORT usPixelClock%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usPixelClock)-start), FILL(18), d->usPixelClock, d->usPixelClock);
    printf ("%s%04x:  ATOM_DIG_ENCODER_CONFIG_V3 acConfig%s :\n", IND(indent), (int)(((uint8_t*)&d->acConfig)-start), FILL(34)); ATOM_DIG_ENCODER_CONFIG_V3_dumper (start, (uint8_t*) &d->acConfig, indent+1);
    printf ("%s%04x:  UCHAR ucAction%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucAction)-start), FILL(13), d->ucAction, d->ucAction);
    printf ("%s%04x:  UCHAR ucEncoderMode%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucEncoderMode)-start), FILL(18), d->ucEncoderMode, d->ucEncoderMode);
    printf ("%s%04x:  UCHAR ucLaneNum%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucLaneNum)-start), FILL(14), d->ucLaneNum, d->ucLaneNum);
    printf ("%s%04x:  UCHAR ucBitPerColor%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucBitPerColor)-start), FILL(18), d->ucBitPerColor, d->ucBitPerColor);
    printf ("%s%04x:  UCHAR ucReserved%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucReserved)-start), FILL(15), d->ucReserved, d->ucReserved);
  }
  return sizeof (DIG_ENCODER_CONTROL_PARAMETERS_V3);
}
int ATOM_DIG_ENCODER_CONFIG_V4_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_DIG_ENCODER_CONFIG_V4 *d = (ATOM_DIG_ENCODER_CONFIG_V4 *) data;
  int i;
  if (d) {
    printf ("%s       UCHAR ucDPLinkRate:2%s = 0x%02x       (%d)\n", IND(indent), FILL(19), d->ucDPLinkRate, d->ucDPLinkRate);
    printf ("%s       UCHAR ucReserved:2%s = 0x%02x       (%d)\n", IND(indent), FILL(17), d->ucReserved, d->ucReserved);
    printf ("%s       UCHAR ucDigSel:3%s = 0x%02x       (%d)\n", IND(indent), FILL(15), d->ucDigSel, d->ucDigSel);
    printf ("%s       UCHAR ucReserved1:1%s = 0x%02x       (%d)\n", IND(indent), FILL(18), d->ucReserved1, d->ucReserved1);
  }
  return sizeof (ATOM_DIG_ENCODER_CONFIG_V4);
}
int DIG_ENCODER_CONTROL_PARAMETERS_V4_dumper (uint8_t *start, uint8_t *data, int indent) {
  DIG_ENCODER_CONTROL_PARAMETERS_V4 *d = (DIG_ENCODER_CONTROL_PARAMETERS_V4 *) data;
  int i;
  if (d) {
    printf ("%s%04x:  USHORT usPixelClock%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usPixelClock)-start), FILL(18), d->usPixelClock, d->usPixelClock);
    printf ("%s  <unparsable> line 789:   union{\n%sskipping...\n", IND(indent), IND(indent));
  }
  return sizeof (DIG_ENCODER_CONTROL_PARAMETERS_V4);
}
int ATOM_DP_VS_MODE_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_DP_VS_MODE *d = (ATOM_DP_VS_MODE *) data;
  int i;
  if (d) {
    printf ("%s%04x:  UCHAR ucLaneSel%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucLaneSel)-start), FILL(14), d->ucLaneSel, d->ucLaneSel);
    printf ("%s%04x:  UCHAR ucLaneSet%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucLaneSet)-start), FILL(14), d->ucLaneSet, d->ucLaneSet);
  }
  return sizeof (ATOM_DP_VS_MODE);
}
int DIG_TRANSMITTER_CONTROL_PARAMETERS_dumper (uint8_t *start, uint8_t *data, int indent) {
  DIG_TRANSMITTER_CONTROL_PARAMETERS *d = (DIG_TRANSMITTER_CONTROL_PARAMETERS *) data;
  int i;
  if (d) {
    printf ("%s  <unparsable> line 814:  union\n%sskipping...\n", IND(indent), IND(indent));
  }
  return sizeof (DIG_TRANSMITTER_CONTROL_PARAMETERS);
}
int ATOM_DIG_TRANSMITTER_CONFIG_V2_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_DIG_TRANSMITTER_CONFIG_V2 *d = (ATOM_DIG_TRANSMITTER_CONFIG_V2 *) data;
  int i;
  if (d) {
    printf ("%s       UCHAR fDualLinkConnector:1%s = 0x%02x       (%d)\n", IND(indent), FILL(25), d->fDualLinkConnector, d->fDualLinkConnector);
    printf ("%s       UCHAR fCoherentMode:1%s = 0x%02x       (%d)\n", IND(indent), FILL(20), d->fCoherentMode, d->fCoherentMode);
    printf ("%s       UCHAR ucLinkSel:1%s = 0x%02x       (%d)\n", IND(indent), FILL(16), d->ucLinkSel, d->ucLinkSel);
    printf ("%s       UCHAR ucEncoderSel:1%s = 0x%02x       (%d)\n", IND(indent), FILL(19), d->ucEncoderSel, d->ucEncoderSel);
    printf ("%s       UCHAR fDPConnector:1%s = 0x%02x       (%d)\n", IND(indent), FILL(19), d->fDPConnector, d->fDPConnector);
    printf ("%s       UCHAR ucReserved:1%s = 0x%02x       (%d)\n", IND(indent), FILL(17), d->ucReserved, d->ucReserved);
    printf ("%s       UCHAR ucTransmitterSel:2%s = 0x%02x       (%d)\n", IND(indent), FILL(23), d->ucTransmitterSel, d->ucTransmitterSel);
  }
  return sizeof (ATOM_DIG_TRANSMITTER_CONFIG_V2);
}
int DIG_TRANSMITTER_CONTROL_PARAMETERS_V2_dumper (uint8_t *start, uint8_t *data, int indent) {
  DIG_TRANSMITTER_CONTROL_PARAMETERS_V2 *d = (DIG_TRANSMITTER_CONTROL_PARAMETERS_V2 *) data;
  int i;
  if (d) {
    printf ("%s  <unparsable> line 845:  union\n%sskipping...\n", IND(indent), IND(indent));
  }
  return sizeof (DIG_TRANSMITTER_CONTROL_PARAMETERS_V2);
}
int ATOM_DIG_TRANSMITTER_CONFIG_V3_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_DIG_TRANSMITTER_CONFIG_V3 *d = (ATOM_DIG_TRANSMITTER_CONFIG_V3 *) data;
  int i;
  if (d) {
    printf ("%s       UCHAR fDualLinkConnector:1%s = 0x%02x       (%d)\n", IND(indent), FILL(25), d->fDualLinkConnector, d->fDualLinkConnector);
    printf ("%s       UCHAR fCoherentMode:1%s = 0x%02x       (%d)\n", IND(indent), FILL(20), d->fCoherentMode, d->fCoherentMode);
    printf ("%s       UCHAR ucLinkSel:1%s = 0x%02x       (%d)\n", IND(indent), FILL(16), d->ucLinkSel, d->ucLinkSel);
    printf ("%s       UCHAR ucEncoderSel:1%s = 0x%02x       (%d)\n", IND(indent), FILL(19), d->ucEncoderSel, d->ucEncoderSel);
    printf ("%s       UCHAR ucRefClkSource:2%s = 0x%02x       (%d)\n", IND(indent), FILL(21), d->ucRefClkSource, d->ucRefClkSource);
    printf ("%s       UCHAR ucTransmitterSel:2%s = 0x%02x       (%d)\n", IND(indent), FILL(23), d->ucTransmitterSel, d->ucTransmitterSel);
  }
  return sizeof (ATOM_DIG_TRANSMITTER_CONFIG_V3);
}
int DIG_TRANSMITTER_CONTROL_PARAMETERS_V3_dumper (uint8_t *start, uint8_t *data, int indent) {
  DIG_TRANSMITTER_CONTROL_PARAMETERS_V3 *d = (DIG_TRANSMITTER_CONTROL_PARAMETERS_V3 *) data;
  int i;
  if (d) {
    printf ("%s  <unparsable> line 874:  union\n%sskipping...\n", IND(indent), IND(indent));
  }
  return sizeof (DIG_TRANSMITTER_CONTROL_PARAMETERS_V3);
}
int ATOM_DP_VS_MODE_V4_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_DP_VS_MODE_V4 *d = (ATOM_DP_VS_MODE_V4 *) data;
  int i;
  if (d) {
    printf ("%s%04x:  UCHAR ucLaneSel%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucLaneSel)-start), FILL(14), d->ucLaneSel, d->ucLaneSel);
    printf ("%s  <unparsable> line 889:   union\n%sskipping...\n", IND(indent), IND(indent));
  }
  return sizeof (ATOM_DP_VS_MODE_V4);
}
int ATOM_DIG_TRANSMITTER_CONFIG_V4_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_DIG_TRANSMITTER_CONFIG_V4 *d = (ATOM_DIG_TRANSMITTER_CONFIG_V4 *) data;
  int i;
  if (d) {
    printf ("%s       UCHAR fDualLinkConnector:1%s = 0x%02x       (%d)\n", IND(indent), FILL(25), d->fDualLinkConnector, d->fDualLinkConnector);
    printf ("%s       UCHAR fCoherentMode:1%s = 0x%02x       (%d)\n", IND(indent), FILL(20), d->fCoherentMode, d->fCoherentMode);
    printf ("%s       UCHAR ucLinkSel:1%s = 0x%02x       (%d)\n", IND(indent), FILL(16), d->ucLinkSel, d->ucLinkSel);
    printf ("%s       UCHAR ucEncoderSel:1%s = 0x%02x       (%d)\n", IND(indent), FILL(19), d->ucEncoderSel, d->ucEncoderSel);
    printf ("%s       UCHAR ucRefClkSource:2%s = 0x%02x       (%d)\n", IND(indent), FILL(21), d->ucRefClkSource, d->ucRefClkSource);
    printf ("%s       UCHAR ucTransmitterSel:2%s = 0x%02x       (%d)\n", IND(indent), FILL(23), d->ucTransmitterSel, d->ucTransmitterSel);
  }
  return sizeof (ATOM_DIG_TRANSMITTER_CONFIG_V4);
}
int DIG_TRANSMITTER_CONTROL_PARAMETERS_V4_dumper (uint8_t *start, uint8_t *data, int indent) {
  DIG_TRANSMITTER_CONTROL_PARAMETERS_V4 *d = (DIG_TRANSMITTER_CONTROL_PARAMETERS_V4 *) data;
  int i;
  if (d) {
    printf ("%s  <unparsable> line 923:   union\n%sskipping...\n", IND(indent), IND(indent));
  }
  return sizeof (DIG_TRANSMITTER_CONTROL_PARAMETERS_V4);
}
int EXTERNAL_ENCODER_CONTROL_PARAMETERS_V3_dumper (uint8_t *start, uint8_t *data, int indent) {
  EXTERNAL_ENCODER_CONTROL_PARAMETERS_V3 *d = (EXTERNAL_ENCODER_CONTROL_PARAMETERS_V3 *) data;
  int i;
  if (d) {
    printf ("%s  <unparsable> line 941:   union{\n%sskipping...\n", IND(indent), IND(indent));
  }
  return sizeof (EXTERNAL_ENCODER_CONTROL_PARAMETERS_V3);
}
int EXTERNAL_ENCODER_CONTROL_PS_ALLOCATION_V3_dumper (uint8_t *start, uint8_t *data, int indent) {
  EXTERNAL_ENCODER_CONTROL_PS_ALLOCATION_V3 *d = (EXTERNAL_ENCODER_CONTROL_PS_ALLOCATION_V3 *) data;
  int i;
  if (d) {
    printf ("%s%04x:  EXTERNAL_ENCODER_CONTROL_PARAMETERS_V3 sExtEncoder%s :\n", IND(indent), (int)(((uint8_t*)&d->sExtEncoder)-start), FILL(49)); EXTERNAL_ENCODER_CONTROL_PARAMETERS_V3_dumper (start, (uint8_t*) &d->sExtEncoder, indent+1);
    for (i = 0; i < 2; i++) {
      printf ("%s%04x:  ULONG ulReserved%s [%d] = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulReserved[i])-start), FILL(19+(i>9)), i, d->ulReserved[i], d->ulReserved[i]); }
  }
  return sizeof (EXTERNAL_ENCODER_CONTROL_PS_ALLOCATION_V3);
}
int DISPLAY_DEVICE_OUTPUT_CONTROL_PARAMETERS_dumper (uint8_t *start, uint8_t *data, int indent) {
  DISPLAY_DEVICE_OUTPUT_CONTROL_PARAMETERS *d = (DISPLAY_DEVICE_OUTPUT_CONTROL_PARAMETERS *) data;
  int i;
  if (d) {
    printf ("%s%04x:  UCHAR ucAction%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucAction)-start), FILL(13), d->ucAction, d->ucAction);
    for (i = 0; i < 3; i++) {
      printf ("%s%04x:  UCHAR aucPadding%s [%d] = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->aucPadding[i])-start), FILL(19+(i>9)), i, d->aucPadding[i], d->aucPadding[i]); }
  }
  return sizeof (DISPLAY_DEVICE_OUTPUT_CONTROL_PARAMETERS);
}
int BLANK_CRTC_PARAMETERS_dumper (uint8_t *start, uint8_t *data, int indent) {
  BLANK_CRTC_PARAMETERS *d = (BLANK_CRTC_PARAMETERS *) data;
  int i;
  if (d) {
    printf ("%s%04x:  UCHAR ucCRTC%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucCRTC)-start), FILL(11), d->ucCRTC, d->ucCRTC);
    printf ("%s%04x:  UCHAR ucBlanking%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucBlanking)-start), FILL(15), d->ucBlanking, d->ucBlanking);
    printf ("%s%04x:  USHORT usBlackColorRCr%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usBlackColorRCr)-start), FILL(21), d->usBlackColorRCr, d->usBlackColorRCr);
    printf ("%s%04x:  USHORT usBlackColorGY%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usBlackColorGY)-start), FILL(20), d->usBlackColorGY, d->usBlackColorGY);
    printf ("%s%04x:  USHORT usBlackColorBCb%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usBlackColorBCb)-start), FILL(21), d->usBlackColorBCb, d->usBlackColorBCb);
  }
  return sizeof (BLANK_CRTC_PARAMETERS);
}
int ENABLE_CRTC_PARAMETERS_dumper (uint8_t *start, uint8_t *data, int indent) {
  ENABLE_CRTC_PARAMETERS *d = (ENABLE_CRTC_PARAMETERS *) data;
  int i;
  if (d) {
    printf ("%s%04x:  UCHAR ucCRTC%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucCRTC)-start), FILL(11), d->ucCRTC, d->ucCRTC);
    printf ("%s%04x:  UCHAR ucEnable%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucEnable)-start), FILL(13), d->ucEnable, d->ucEnable);
    for (i = 0; i < 2; i++) {
      printf ("%s%04x:  UCHAR ucPadding%s [%d] = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucPadding[i])-start), FILL(18+(i>9)), i, d->ucPadding[i], d->ucPadding[i]); }
  }
  return sizeof (ENABLE_CRTC_PARAMETERS);
}
int SET_CRTC_OVERSCAN_PARAMETERS_dumper (uint8_t *start, uint8_t *data, int indent) {
  SET_CRTC_OVERSCAN_PARAMETERS *d = (SET_CRTC_OVERSCAN_PARAMETERS *) data;
  int i;
  if (d) {
    printf ("%s%04x:  USHORT usOverscanRight%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usOverscanRight)-start), FILL(21), d->usOverscanRight, d->usOverscanRight);
    printf ("%s%04x:  USHORT usOverscanLeft%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usOverscanLeft)-start), FILL(20), d->usOverscanLeft, d->usOverscanLeft);
    printf ("%s%04x:  USHORT usOverscanBottom%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usOverscanBottom)-start), FILL(22), d->usOverscanBottom, d->usOverscanBottom);
    printf ("%s%04x:  USHORT usOverscanTop%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usOverscanTop)-start), FILL(19), d->usOverscanTop, d->usOverscanTop);
    printf ("%s%04x:  UCHAR ucCRTC%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucCRTC)-start), FILL(11), d->ucCRTC, d->ucCRTC);
    for (i = 0; i < 3; i++) {
      printf ("%s%04x:  UCHAR ucPadding%s [%d] = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucPadding[i])-start), FILL(18+(i>9)), i, d->ucPadding[i], d->ucPadding[i]); }
  }
  return sizeof (SET_CRTC_OVERSCAN_PARAMETERS);
}
int SET_CRTC_REPLICATION_PARAMETERS_dumper (uint8_t *start, uint8_t *data, int indent) {
  SET_CRTC_REPLICATION_PARAMETERS *d = (SET_CRTC_REPLICATION_PARAMETERS *) data;
  int i;
  if (d) {
    printf ("%s%04x:  UCHAR ucH_Replication%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucH_Replication)-start), FILL(20), d->ucH_Replication, d->ucH_Replication);
    printf ("%s%04x:  UCHAR ucV_Replication%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucV_Replication)-start), FILL(20), d->ucV_Replication, d->ucV_Replication);
    printf ("%s%04x:  UCHAR usCRTC%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->usCRTC)-start), FILL(11), d->usCRTC, d->usCRTC);
    printf ("%s%04x:  UCHAR ucPadding%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucPadding)-start), FILL(14), d->ucPadding, d->ucPadding);
  }
  return sizeof (SET_CRTC_REPLICATION_PARAMETERS);
}
int SELECT_CRTC_SOURCE_PARAMETERS_dumper (uint8_t *start, uint8_t *data, int indent) {
  SELECT_CRTC_SOURCE_PARAMETERS *d = (SELECT_CRTC_SOURCE_PARAMETERS *) data;
  int i;
  if (d) {
    printf ("%s%04x:  UCHAR ucCRTC%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucCRTC)-start), FILL(11), d->ucCRTC, d->ucCRTC);
    printf ("%s%04x:  UCHAR ucDevice%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucDevice)-start), FILL(13), d->ucDevice, d->ucDevice);
    for (i = 0; i < 2; i++) {
      printf ("%s%04x:  UCHAR ucPadding%s [%d] = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucPadding[i])-start), FILL(18+(i>9)), i, d->ucPadding[i], d->ucPadding[i]); }
  }
  return sizeof (SELECT_CRTC_SOURCE_PARAMETERS);
}
int SELECT_CRTC_SOURCE_PARAMETERS_V2_dumper (uint8_t *start, uint8_t *data, int indent) {
  SELECT_CRTC_SOURCE_PARAMETERS_V2 *d = (SELECT_CRTC_SOURCE_PARAMETERS_V2 *) data;
  int i;
  if (d) {
    printf ("%s%04x:  UCHAR ucCRTC%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucCRTC)-start), FILL(11), d->ucCRTC, d->ucCRTC);
    printf ("%s%04x:  UCHAR ucEncoderID%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucEncoderID)-start), FILL(16), d->ucEncoderID, d->ucEncoderID);
    printf ("%s%04x:  UCHAR ucEncodeMode%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucEncodeMode)-start), FILL(17), d->ucEncodeMode, d->ucEncodeMode);
    printf ("%s%04x:  UCHAR ucPadding%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucPadding)-start), FILL(14), d->ucPadding, d->ucPadding);
  }
  return sizeof (SELECT_CRTC_SOURCE_PARAMETERS_V2);
}
int PIXEL_CLOCK_PARAMETERS_dumper (uint8_t *start, uint8_t *data, int indent) {
  PIXEL_CLOCK_PARAMETERS *d = (PIXEL_CLOCK_PARAMETERS *) data;
  int i;
  if (d) {
    printf ("%s%04x:  USHORT usPixelClock%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usPixelClock)-start), FILL(18), d->usPixelClock, d->usPixelClock);
    printf ("%s%04x:  USHORT usRefDiv%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usRefDiv)-start), FILL(14), d->usRefDiv, d->usRefDiv);
    printf ("%s%04x:  USHORT usFbDiv%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usFbDiv)-start), FILL(13), d->usFbDiv, d->usFbDiv);
    printf ("%s%04x:  UCHAR ucPostDiv%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucPostDiv)-start), FILL(14), d->ucPostDiv, d->ucPostDiv);
    printf ("%s%04x:  UCHAR ucFracFbDiv%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucFracFbDiv)-start), FILL(16), d->ucFracFbDiv, d->ucFracFbDiv);
    printf ("%s%04x:  UCHAR ucPpll%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucPpll)-start), FILL(11), d->ucPpll, d->ucPpll);
    printf ("%s%04x:  UCHAR ucRefDivSrc%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucRefDivSrc)-start), FILL(16), d->ucRefDivSrc, d->ucRefDivSrc);
    printf ("%s%04x:  UCHAR ucCRTC%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucCRTC)-start), FILL(11), d->ucCRTC, d->ucCRTC);
    printf ("%s%04x:  UCHAR ucPadding%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucPadding)-start), FILL(14), d->ucPadding, d->ucPadding);
  }
  return sizeof (PIXEL_CLOCK_PARAMETERS);
}
int PIXEL_CLOCK_PARAMETERS_V2_dumper (uint8_t *start, uint8_t *data, int indent) {
  PIXEL_CLOCK_PARAMETERS_V2 *d = (PIXEL_CLOCK_PARAMETERS_V2 *) data;
  int i;
  if (d) {
    printf ("%s%04x:  USHORT usPixelClock%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usPixelClock)-start), FILL(18), d->usPixelClock, d->usPixelClock);
    printf ("%s%04x:  USHORT usRefDiv%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usRefDiv)-start), FILL(14), d->usRefDiv, d->usRefDiv);
    printf ("%s%04x:  USHORT usFbDiv%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usFbDiv)-start), FILL(13), d->usFbDiv, d->usFbDiv);
    printf ("%s%04x:  UCHAR ucPostDiv%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucPostDiv)-start), FILL(14), d->ucPostDiv, d->ucPostDiv);
    printf ("%s%04x:  UCHAR ucFracFbDiv%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucFracFbDiv)-start), FILL(16), d->ucFracFbDiv, d->ucFracFbDiv);
    printf ("%s%04x:  UCHAR ucPpll%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucPpll)-start), FILL(11), d->ucPpll, d->ucPpll);
    printf ("%s%04x:  UCHAR ucRefDivSrc%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucRefDivSrc)-start), FILL(16), d->ucRefDivSrc, d->ucRefDivSrc);
    printf ("%s%04x:  UCHAR ucCRTC%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucCRTC)-start), FILL(11), d->ucCRTC, d->ucCRTC);
    printf ("%s%04x:  UCHAR ucMiscInfo%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucMiscInfo)-start), FILL(15), d->ucMiscInfo, d->ucMiscInfo);
  }
  return sizeof (PIXEL_CLOCK_PARAMETERS_V2);
}
int PIXEL_CLOCK_PARAMETERS_V3_dumper (uint8_t *start, uint8_t *data, int indent) {
  PIXEL_CLOCK_PARAMETERS_V3 *d = (PIXEL_CLOCK_PARAMETERS_V3 *) data;
  int i;
  if (d) {
    printf ("%s%04x:  USHORT usPixelClock%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usPixelClock)-start), FILL(18), d->usPixelClock, d->usPixelClock);
    printf ("%s%04x:  USHORT usRefDiv%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usRefDiv)-start), FILL(14), d->usRefDiv, d->usRefDiv);
    printf ("%s%04x:  USHORT usFbDiv%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usFbDiv)-start), FILL(13), d->usFbDiv, d->usFbDiv);
    printf ("%s%04x:  UCHAR ucPostDiv%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucPostDiv)-start), FILL(14), d->ucPostDiv, d->ucPostDiv);
    printf ("%s%04x:  UCHAR ucFracFbDiv%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucFracFbDiv)-start), FILL(16), d->ucFracFbDiv, d->ucFracFbDiv);
    printf ("%s%04x:  UCHAR ucPpll%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucPpll)-start), FILL(11), d->ucPpll, d->ucPpll);
    printf ("%s%04x:  UCHAR ucTransmitterId%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucTransmitterId)-start), FILL(20), d->ucTransmitterId, d->ucTransmitterId);
    printf ("%s  <unparsable> line 1081:  union\n%sskipping...\n", IND(indent), IND(indent));
  }
  return sizeof (PIXEL_CLOCK_PARAMETERS_V3);
}
int PIXEL_CLOCK_PARAMETERS_V5_dumper (uint8_t *start, uint8_t *data, int indent) {
  PIXEL_CLOCK_PARAMETERS_V5 *d = (PIXEL_CLOCK_PARAMETERS_V5 *) data;
  int i;
  if (d) {
    printf ("%s%04x:  UCHAR ucCRTC%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucCRTC)-start), FILL(11), d->ucCRTC, d->ucCRTC);
    printf ("%s  <unparsable> line 1098:   union{\n%sskipping...\n", IND(indent), IND(indent));
  }
  return sizeof (PIXEL_CLOCK_PARAMETERS_V5);
}
int CRTC_PIXEL_CLOCK_FREQ_dumper (uint8_t *start, uint8_t *data, int indent) {
  CRTC_PIXEL_CLOCK_FREQ *d = (CRTC_PIXEL_CLOCK_FREQ *) data;
  int i;
  if (d) {
    printf ("%s       ULONG ulPixelClock:24%s = 0x%08x (%d)\n", IND(indent), FILL(20), d->ulPixelClock, d->ulPixelClock);
    printf ("%s       ULONG ucCRTC:8%s = 0x%08x (%d)\n", IND(indent), FILL(13), d->ucCRTC, d->ucCRTC);
  }
  return sizeof (CRTC_PIXEL_CLOCK_FREQ);
}
int PIXEL_CLOCK_PARAMETERS_V6_dumper (uint8_t *start, uint8_t *data, int indent) {
  PIXEL_CLOCK_PARAMETERS_V6 *d = (PIXEL_CLOCK_PARAMETERS_V6 *) data;
  int i;
  if (d) {
    printf ("%s  <unparsable> line 1140:   union{\n%sskipping...\n", IND(indent), IND(indent));
  }
  return sizeof (PIXEL_CLOCK_PARAMETERS_V6);
}
int GET_DISP_PLL_STATUS_INPUT_PARAMETERS_V2_dumper (uint8_t *start, uint8_t *data, int indent) {
  GET_DISP_PLL_STATUS_INPUT_PARAMETERS_V2 *d = (GET_DISP_PLL_STATUS_INPUT_PARAMETERS_V2 *) data;
  int i;
  if (d) {
    printf ("%s%04x:  PIXEL_CLOCK_PARAMETERS_V3 sDispClkInput%s :\n", IND(indent), (int)(((uint8_t*)&d->sDispClkInput)-start), FILL(38)); PIXEL_CLOCK_PARAMETERS_V3_dumper (start, (uint8_t*) &d->sDispClkInput, indent+1);
  }
  return sizeof (GET_DISP_PLL_STATUS_INPUT_PARAMETERS_V2);
}
int GET_DISP_PLL_STATUS_OUTPUT_PARAMETERS_V2_dumper (uint8_t *start, uint8_t *data, int indent) {
  GET_DISP_PLL_STATUS_OUTPUT_PARAMETERS_V2 *d = (GET_DISP_PLL_STATUS_OUTPUT_PARAMETERS_V2 *) data;
  int i;
  if (d) {
    printf ("%s%04x:  UCHAR ucStatus%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucStatus)-start), FILL(13), d->ucStatus, d->ucStatus);
    printf ("%s%04x:  UCHAR ucRefDivSrc%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucRefDivSrc)-start), FILL(16), d->ucRefDivSrc, d->ucRefDivSrc);
    for (i = 0; i < 2; i++) {
      printf ("%s%04x:  UCHAR ucReserved%s [%d] = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucReserved[i])-start), FILL(19+(i>9)), i, d->ucReserved[i], d->ucReserved[i]); }
  }
  return sizeof (GET_DISP_PLL_STATUS_OUTPUT_PARAMETERS_V2);
}
int GET_DISP_PLL_STATUS_INPUT_PARAMETERS_V3_dumper (uint8_t *start, uint8_t *data, int indent) {
  GET_DISP_PLL_STATUS_INPUT_PARAMETERS_V3 *d = (GET_DISP_PLL_STATUS_INPUT_PARAMETERS_V3 *) data;
  int i;
  if (d) {
    printf ("%s%04x:  PIXEL_CLOCK_PARAMETERS_V5 sDispClkInput%s :\n", IND(indent), (int)(((uint8_t*)&d->sDispClkInput)-start), FILL(38)); PIXEL_CLOCK_PARAMETERS_V5_dumper (start, (uint8_t*) &d->sDispClkInput, indent+1);
  }
  return sizeof (GET_DISP_PLL_STATUS_INPUT_PARAMETERS_V3);
}
int ADJUST_DISPLAY_PLL_PARAMETERS_dumper (uint8_t *start, uint8_t *data, int indent) {
  ADJUST_DISPLAY_PLL_PARAMETERS *d = (ADJUST_DISPLAY_PLL_PARAMETERS *) data;
  int i;
  if (d) {
    printf ("%s%04x:  USHORT usPixelClock%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usPixelClock)-start), FILL(18), d->usPixelClock, d->usPixelClock);
    printf ("%s%04x:  UCHAR ucTransmitterID%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucTransmitterID)-start), FILL(20), d->ucTransmitterID, d->ucTransmitterID);
    printf ("%s%04x:  UCHAR ucEncodeMode%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucEncodeMode)-start), FILL(17), d->ucEncodeMode, d->ucEncodeMode);
    printf ("%s  <unparsable> line 1188:  union\n%sskipping...\n", IND(indent), IND(indent));
  }
  return sizeof (ADJUST_DISPLAY_PLL_PARAMETERS);
}
int ADJUST_DISPLAY_PLL_INPUT_PARAMETERS_V3_dumper (uint8_t *start, uint8_t *data, int indent) {
  ADJUST_DISPLAY_PLL_INPUT_PARAMETERS_V3 *d = (ADJUST_DISPLAY_PLL_INPUT_PARAMETERS_V3 *) data;
  int i;
  if (d) {
    printf ("%s%04x:  USHORT usPixelClock%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usPixelClock)-start), FILL(18), d->usPixelClock, d->usPixelClock);
    printf ("%s%04x:  UCHAR ucTransmitterID%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucTransmitterID)-start), FILL(20), d->ucTransmitterID, d->ucTransmitterID);
    printf ("%s%04x:  UCHAR ucEncodeMode%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucEncodeMode)-start), FILL(17), d->ucEncodeMode, d->ucEncodeMode);
    printf ("%s%04x:  UCHAR ucDispPllConfig%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucDispPllConfig)-start), FILL(20), d->ucDispPllConfig, d->ucDispPllConfig);
    printf ("%s%04x:  UCHAR ucExtTransmitterID%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucExtTransmitterID)-start), FILL(23), d->ucExtTransmitterID, d->ucExtTransmitterID);
    for (i = 0; i < 2; i++) {
      printf ("%s%04x:  UCHAR ucReserved%s [%d] = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucReserved[i])-start), FILL(19+(i>9)), i, d->ucReserved[i], d->ucReserved[i]); }
  }
  return sizeof (ADJUST_DISPLAY_PLL_INPUT_PARAMETERS_V3);
}
int ADJUST_DISPLAY_PLL_OUTPUT_PARAMETERS_V3_dumper (uint8_t *start, uint8_t *data, int indent) {
  ADJUST_DISPLAY_PLL_OUTPUT_PARAMETERS_V3 *d = (ADJUST_DISPLAY_PLL_OUTPUT_PARAMETERS_V3 *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ULONG ulDispPllFreq%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulDispPllFreq)-start), FILL(18), d->ulDispPllFreq, d->ulDispPllFreq);
    printf ("%s%04x:  UCHAR ucRefDiv%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucRefDiv)-start), FILL(13), d->ucRefDiv, d->ucRefDiv);
    printf ("%s%04x:  UCHAR ucPostDiv%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucPostDiv)-start), FILL(14), d->ucPostDiv, d->ucPostDiv);
    for (i = 0; i < 2; i++) {
      printf ("%s%04x:  UCHAR ucReserved%s [%d] = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucReserved[i])-start), FILL(19+(i>9)), i, d->ucReserved[i], d->ucReserved[i]); }
  }
  return sizeof (ADJUST_DISPLAY_PLL_OUTPUT_PARAMETERS_V3);
}
int ADJUST_DISPLAY_PLL_PS_ALLOCATION_V3_dumper (uint8_t *start, uint8_t *data, int indent) {
  ADJUST_DISPLAY_PLL_PS_ALLOCATION_V3 *d = (ADJUST_DISPLAY_PLL_PS_ALLOCATION_V3 *) data;
  int i;
  if (d) {
    printf ("%s  <unparsable> line 1219:   union\n%sskipping...\n", IND(indent), IND(indent));
  }
  return sizeof (ADJUST_DISPLAY_PLL_PS_ALLOCATION_V3);
}
int ENABLE_YUV_PARAMETERS_dumper (uint8_t *start, uint8_t *data, int indent) {
  ENABLE_YUV_PARAMETERS *d = (ENABLE_YUV_PARAMETERS *) data;
  int i;
  if (d) {
    printf ("%s%04x:  UCHAR ucEnable%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucEnable)-start), FILL(13), d->ucEnable, d->ucEnable);
    printf ("%s%04x:  UCHAR ucCRTC%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucCRTC)-start), FILL(11), d->ucCRTC, d->ucCRTC);
    for (i = 0; i < 2; i++) {
      printf ("%s%04x:  UCHAR ucPadding%s [%d] = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucPadding[i])-start), FILL(18+(i>9)), i, d->ucPadding[i], d->ucPadding[i]); }
  }
  return sizeof (ENABLE_YUV_PARAMETERS);
}
int GET_MEMORY_CLOCK_PARAMETERS_dumper (uint8_t *start, uint8_t *data, int indent) {
  GET_MEMORY_CLOCK_PARAMETERS *d = (GET_MEMORY_CLOCK_PARAMETERS *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ULONG ulReturnMemoryClock%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulReturnMemoryClock)-start), FILL(24), d->ulReturnMemoryClock, d->ulReturnMemoryClock);
  }
  return sizeof (GET_MEMORY_CLOCK_PARAMETERS);
}
int GET_ENGINE_CLOCK_PARAMETERS_dumper (uint8_t *start, uint8_t *data, int indent) {
  GET_ENGINE_CLOCK_PARAMETERS *d = (GET_ENGINE_CLOCK_PARAMETERS *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ULONG ulReturnEngineClock%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulReturnEngineClock)-start), FILL(24), d->ulReturnEngineClock, d->ulReturnEngineClock);
  }
  return sizeof (GET_ENGINE_CLOCK_PARAMETERS);
}
int READ_EDID_FROM_HW_I2C_DATA_PARAMETERS_dumper (uint8_t *start, uint8_t *data, int indent) {
  READ_EDID_FROM_HW_I2C_DATA_PARAMETERS *d = (READ_EDID_FROM_HW_I2C_DATA_PARAMETERS *) data;
  int i;
  if (d) {
    printf ("%s%04x:  USHORT usPrescale%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usPrescale)-start), FILL(16), d->usPrescale, d->usPrescale);
    printf ("%s%04x:  USHORT usVRAMAddress%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usVRAMAddress)-start), FILL(19), d->usVRAMAddress, d->usVRAMAddress);
    printf ("%s%04x:  USHORT usStatus%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usStatus)-start), FILL(14), d->usStatus, d->usStatus);
    printf ("%s%04x:  UCHAR ucSlaveAddr%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucSlaveAddr)-start), FILL(16), d->ucSlaveAddr, d->ucSlaveAddr);
    printf ("%s%04x:  UCHAR ucLineNumber%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucLineNumber)-start), FILL(17), d->ucLineNumber, d->ucLineNumber);
  }
  return sizeof (READ_EDID_FROM_HW_I2C_DATA_PARAMETERS);
}
int WRITE_ONE_BYTE_HW_I2C_DATA_PARAMETERS_dumper (uint8_t *start, uint8_t *data, int indent) {
  WRITE_ONE_BYTE_HW_I2C_DATA_PARAMETERS *d = (WRITE_ONE_BYTE_HW_I2C_DATA_PARAMETERS *) data;
  int i;
  if (d) {
    printf ("%s%04x:  USHORT usPrescale%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usPrescale)-start), FILL(16), d->usPrescale, d->usPrescale);
    printf ("%s%04x:  USHORT usByteOffset%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usByteOffset)-start), FILL(18), d->usByteOffset, d->usByteOffset);
    printf ("%s%04x:  UCHAR ucData%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucData)-start), FILL(11), d->ucData, d->ucData);
    printf ("%s%04x:  UCHAR ucStatus%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucStatus)-start), FILL(13), d->ucStatus, d->ucStatus);
    printf ("%s%04x:  UCHAR ucSlaveAddr%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucSlaveAddr)-start), FILL(16), d->ucSlaveAddr, d->ucSlaveAddr);
    printf ("%s%04x:  UCHAR ucLineNumber%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucLineNumber)-start), FILL(17), d->ucLineNumber, d->ucLineNumber);
  }
  return sizeof (WRITE_ONE_BYTE_HW_I2C_DATA_PARAMETERS);
}
int SET_UP_HW_I2C_DATA_PARAMETERS_dumper (uint8_t *start, uint8_t *data, int indent) {
  SET_UP_HW_I2C_DATA_PARAMETERS *d = (SET_UP_HW_I2C_DATA_PARAMETERS *) data;
  int i;
  if (d) {
    printf ("%s%04x:  USHORT usPrescale%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usPrescale)-start), FILL(16), d->usPrescale, d->usPrescale);
    printf ("%s%04x:  UCHAR ucSlaveAddr%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucSlaveAddr)-start), FILL(16), d->ucSlaveAddr, d->ucSlaveAddr);
    printf ("%s%04x:  UCHAR ucLineNumber%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucLineNumber)-start), FILL(17), d->ucLineNumber, d->ucLineNumber);
  }
  return sizeof (SET_UP_HW_I2C_DATA_PARAMETERS);
}
int POWER_CONNECTOR_DETECTION_PARAMETERS_dumper (uint8_t *start, uint8_t *data, int indent) {
  POWER_CONNECTOR_DETECTION_PARAMETERS *d = (POWER_CONNECTOR_DETECTION_PARAMETERS *) data;
  int i;
  if (d) {
    printf ("%s%04x:  UCHAR ucPowerConnectorStatus%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucPowerConnectorStatus)-start), FILL(27), d->ucPowerConnectorStatus, d->ucPowerConnectorStatus);
    printf ("%s%04x:  UCHAR ucPwrBehaviorId%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucPwrBehaviorId)-start), FILL(20), d->ucPwrBehaviorId, d->ucPwrBehaviorId);
    printf ("%s%04x:  USHORT usPwrBudget%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usPwrBudget)-start), FILL(17), d->usPwrBudget, d->usPwrBudget);
  }
  return sizeof (POWER_CONNECTOR_DETECTION_PARAMETERS);
}
int ENABLE_LVDS_SS_PARAMETERS_dumper (uint8_t *start, uint8_t *data, int indent) {
  ENABLE_LVDS_SS_PARAMETERS *d = (ENABLE_LVDS_SS_PARAMETERS *) data;
  int i;
  if (d) {
    printf ("%s%04x:  USHORT usSpreadSpectrumPercentage%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usSpreadSpectrumPercentage)-start), FILL(32), d->usSpreadSpectrumPercentage, d->usSpreadSpectrumPercentage);
    printf ("%s%04x:  UCHAR ucSpreadSpectrumType%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucSpreadSpectrumType)-start), FILL(25), d->ucSpreadSpectrumType, d->ucSpreadSpectrumType);
    printf ("%s%04x:  UCHAR ucSpreadSpectrumStepSize_Delay%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucSpreadSpectrumStepSize_Delay)-start), FILL(35), d->ucSpreadSpectrumStepSize_Delay, d->ucSpreadSpectrumStepSize_Delay);
    printf ("%s%04x:  UCHAR ucEnable%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucEnable)-start), FILL(13), d->ucEnable, d->ucEnable);
    for (i = 0; i < 3; i++) {
      printf ("%s%04x:  UCHAR ucPadding%s [%d] = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucPadding[i])-start), FILL(18+(i>9)), i, d->ucPadding[i], d->ucPadding[i]); }
  }
  return sizeof (ENABLE_LVDS_SS_PARAMETERS);
}
int ENABLE_LVDS_SS_PARAMETERS_V2_dumper (uint8_t *start, uint8_t *data, int indent) {
  ENABLE_LVDS_SS_PARAMETERS_V2 *d = (ENABLE_LVDS_SS_PARAMETERS_V2 *) data;
  int i;
  if (d) {
    printf ("%s%04x:  USHORT usSpreadSpectrumPercentage%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usSpreadSpectrumPercentage)-start), FILL(32), d->usSpreadSpectrumPercentage, d->usSpreadSpectrumPercentage);
    printf ("%s%04x:  UCHAR ucSpreadSpectrumType%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucSpreadSpectrumType)-start), FILL(25), d->ucSpreadSpectrumType, d->ucSpreadSpectrumType);
    printf ("%s%04x:  UCHAR ucSpreadSpectrumStep%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucSpreadSpectrumStep)-start), FILL(25), d->ucSpreadSpectrumStep, d->ucSpreadSpectrumStep);
    printf ("%s%04x:  UCHAR ucEnable%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucEnable)-start), FILL(13), d->ucEnable, d->ucEnable);
    printf ("%s%04x:  UCHAR ucSpreadSpectrumDelay%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucSpreadSpectrumDelay)-start), FILL(26), d->ucSpreadSpectrumDelay, d->ucSpreadSpectrumDelay);
    printf ("%s%04x:  UCHAR ucSpreadSpectrumRange%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucSpreadSpectrumRange)-start), FILL(26), d->ucSpreadSpectrumRange, d->ucSpreadSpectrumRange);
    printf ("%s%04x:  UCHAR ucPadding%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucPadding)-start), FILL(14), d->ucPadding, d->ucPadding);
  }
  return sizeof (ENABLE_LVDS_SS_PARAMETERS_V2);
}
int ENABLE_SPREAD_SPECTRUM_ON_PPLL_dumper (uint8_t *start, uint8_t *data, int indent) {
  ENABLE_SPREAD_SPECTRUM_ON_PPLL *d = (ENABLE_SPREAD_SPECTRUM_ON_PPLL *) data;
  int i;
  if (d) {
    printf ("%s%04x:  USHORT usSpreadSpectrumPercentage%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usSpreadSpectrumPercentage)-start), FILL(32), d->usSpreadSpectrumPercentage, d->usSpreadSpectrumPercentage);
    printf ("%s%04x:  UCHAR ucSpreadSpectrumType%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucSpreadSpectrumType)-start), FILL(25), d->ucSpreadSpectrumType, d->ucSpreadSpectrumType);
    printf ("%s%04x:  UCHAR ucSpreadSpectrumStep%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucSpreadSpectrumStep)-start), FILL(25), d->ucSpreadSpectrumStep, d->ucSpreadSpectrumStep);
    printf ("%s%04x:  UCHAR ucEnable%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucEnable)-start), FILL(13), d->ucEnable, d->ucEnable);
    printf ("%s%04x:  UCHAR ucSpreadSpectrumDelay%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucSpreadSpectrumDelay)-start), FILL(26), d->ucSpreadSpectrumDelay, d->ucSpreadSpectrumDelay);
    printf ("%s%04x:  UCHAR ucSpreadSpectrumRange%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucSpreadSpectrumRange)-start), FILL(26), d->ucSpreadSpectrumRange, d->ucSpreadSpectrumRange);
    printf ("%s%04x:  UCHAR ucPpll%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucPpll)-start), FILL(11), d->ucPpll, d->ucPpll);
  }
  return sizeof (ENABLE_SPREAD_SPECTRUM_ON_PPLL);
}
int ENABLE_SPREAD_SPECTRUM_ON_PPLL_V2_dumper (uint8_t *start, uint8_t *data, int indent) {
  ENABLE_SPREAD_SPECTRUM_ON_PPLL_V2 *d = (ENABLE_SPREAD_SPECTRUM_ON_PPLL_V2 *) data;
  int i;
  if (d) {
    printf ("%s%04x:  USHORT usSpreadSpectrumPercentage%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usSpreadSpectrumPercentage)-start), FILL(32), d->usSpreadSpectrumPercentage, d->usSpreadSpectrumPercentage);
    printf ("%s%04x:  UCHAR ucSpreadSpectrumType%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucSpreadSpectrumType)-start), FILL(25), d->ucSpreadSpectrumType, d->ucSpreadSpectrumType);
    printf ("%s%04x:  UCHAR ucEnable%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucEnable)-start), FILL(13), d->ucEnable, d->ucEnable);
    printf ("%s%04x:  USHORT usSpreadSpectrumAmount%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usSpreadSpectrumAmount)-start), FILL(28), d->usSpreadSpectrumAmount, d->usSpreadSpectrumAmount);
    printf ("%s%04x:  USHORT usSpreadSpectrumStep%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usSpreadSpectrumStep)-start), FILL(26), d->usSpreadSpectrumStep, d->usSpreadSpectrumStep);
  }
  return sizeof (ENABLE_SPREAD_SPECTRUM_ON_PPLL_V2);
}
int ENABLE_SPREAD_SPECTRUM_ON_PPLL_V3_dumper (uint8_t *start, uint8_t *data, int indent) {
  ENABLE_SPREAD_SPECTRUM_ON_PPLL_V3 *d = (ENABLE_SPREAD_SPECTRUM_ON_PPLL_V3 *) data;
  int i;
  if (d) {
    printf ("%s%04x:  USHORT usSpreadSpectrumAmountFrac%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usSpreadSpectrumAmountFrac)-start), FILL(32), d->usSpreadSpectrumAmountFrac, d->usSpreadSpectrumAmountFrac);
    printf ("%s%04x:  UCHAR ucSpreadSpectrumType%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucSpreadSpectrumType)-start), FILL(25), d->ucSpreadSpectrumType, d->ucSpreadSpectrumType);
    printf ("%s%04x:  UCHAR ucEnable%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucEnable)-start), FILL(13), d->ucEnable, d->ucEnable);
    printf ("%s%04x:  USHORT usSpreadSpectrumAmount%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usSpreadSpectrumAmount)-start), FILL(28), d->usSpreadSpectrumAmount, d->usSpreadSpectrumAmount);
    printf ("%s%04x:  USHORT usSpreadSpectrumStep%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usSpreadSpectrumStep)-start), FILL(26), d->usSpreadSpectrumStep, d->usSpreadSpectrumStep);
  }
  return sizeof (ENABLE_SPREAD_SPECTRUM_ON_PPLL_V3);
}
int SET_PIXEL_CLOCK_PS_ALLOCATION_dumper (uint8_t *start, uint8_t *data, int indent) {
  SET_PIXEL_CLOCK_PS_ALLOCATION *d = (SET_PIXEL_CLOCK_PS_ALLOCATION *) data;
  int i;
  if (d) {
    printf ("%s%04x:  PIXEL_CLOCK_PARAMETERS sPCLKInput%s :\n", IND(indent), (int)(((uint8_t*)&d->sPCLKInput)-start), FILL(32)); PIXEL_CLOCK_PARAMETERS_dumper (start, (uint8_t*) &d->sPCLKInput, indent+1);
    printf ("%s%04x:  ENABLE_SPREAD_SPECTRUM_ON_PPLL sReserved%s :\n", IND(indent), (int)(((uint8_t*)&d->sReserved)-start), FILL(39)); ENABLE_SPREAD_SPECTRUM_ON_PPLL_dumper (start, (uint8_t*) &d->sReserved, indent+1);
  }
  return sizeof (SET_PIXEL_CLOCK_PS_ALLOCATION);
}
int MEMORY_TRAINING_PARAMETERS_dumper (uint8_t *start, uint8_t *data, int indent) {
  MEMORY_TRAINING_PARAMETERS *d = (MEMORY_TRAINING_PARAMETERS *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ULONG ulTargetMemoryClock%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulTargetMemoryClock)-start), FILL(24), d->ulTargetMemoryClock, d->ulTargetMemoryClock);
  }
  return sizeof (MEMORY_TRAINING_PARAMETERS);
}
int LVDS_ENCODER_CONTROL_PARAMETERS_dumper (uint8_t *start, uint8_t *data, int indent) {
  LVDS_ENCODER_CONTROL_PARAMETERS *d = (LVDS_ENCODER_CONTROL_PARAMETERS *) data;
  int i;
  if (d) {
    printf ("%s%04x:  USHORT usPixelClock%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usPixelClock)-start), FILL(18), d->usPixelClock, d->usPixelClock);
    printf ("%s%04x:  UCHAR ucMisc%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucMisc)-start), FILL(11), d->ucMisc, d->ucMisc);
    printf ("%s%04x:  UCHAR ucAction%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucAction)-start), FILL(13), d->ucAction, d->ucAction);
  }
  return sizeof (LVDS_ENCODER_CONTROL_PARAMETERS);
}
int LVDS_ENCODER_CONTROL_PARAMETERS_V2_dumper (uint8_t *start, uint8_t *data, int indent) {
  LVDS_ENCODER_CONTROL_PARAMETERS_V2 *d = (LVDS_ENCODER_CONTROL_PARAMETERS_V2 *) data;
  int i;
  if (d) {
    printf ("%s%04x:  USHORT usPixelClock%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usPixelClock)-start), FILL(18), d->usPixelClock, d->usPixelClock);
    printf ("%s%04x:  UCHAR ucMisc%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucMisc)-start), FILL(11), d->ucMisc, d->ucMisc);
    printf ("%s%04x:  UCHAR ucAction%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucAction)-start), FILL(13), d->ucAction, d->ucAction);
    printf ("%s%04x:  UCHAR ucTruncate%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucTruncate)-start), FILL(15), d->ucTruncate, d->ucTruncate);
    printf ("%s%04x:  UCHAR ucSpatial%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucSpatial)-start), FILL(14), d->ucSpatial, d->ucSpatial);
    printf ("%s%04x:  UCHAR ucTemporal%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucTemporal)-start), FILL(15), d->ucTemporal, d->ucTemporal);
    printf ("%s%04x:  UCHAR ucFRC%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucFRC)-start), FILL(10), d->ucFRC, d->ucFRC);
  }
  return sizeof (LVDS_ENCODER_CONTROL_PARAMETERS_V2);
}
int ENABLE_EXTERNAL_TMDS_ENCODER_PARAMETERS_dumper (uint8_t *start, uint8_t *data, int indent) {
  ENABLE_EXTERNAL_TMDS_ENCODER_PARAMETERS *d = (ENABLE_EXTERNAL_TMDS_ENCODER_PARAMETERS *) data;
  int i;
  if (d) {
    printf ("%s%04x:  UCHAR ucEnable%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucEnable)-start), FILL(13), d->ucEnable, d->ucEnable);
    printf ("%s%04x:  UCHAR ucMisc%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucMisc)-start), FILL(11), d->ucMisc, d->ucMisc);
    for (i = 0; i < 2; i++) {
      printf ("%s%04x:  UCHAR ucPadding%s [%d] = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucPadding[i])-start), FILL(18+(i>9)), i, d->ucPadding[i], d->ucPadding[i]); }
  }
  return sizeof (ENABLE_EXTERNAL_TMDS_ENCODER_PARAMETERS);
}
int ENABLE_EXTERNAL_TMDS_ENCODER_PS_ALLOCATION_dumper (uint8_t *start, uint8_t *data, int indent) {
  ENABLE_EXTERNAL_TMDS_ENCODER_PS_ALLOCATION *d = (ENABLE_EXTERNAL_TMDS_ENCODER_PS_ALLOCATION *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ENABLE_EXTERNAL_TMDS_ENCODER_PARAMETERS sXTmdsEncoder%s :\n", IND(indent), (int)(((uint8_t*)&d->sXTmdsEncoder)-start), FILL(52)); ENABLE_EXTERNAL_TMDS_ENCODER_PARAMETERS_dumper (start, (uint8_t*) &d->sXTmdsEncoder, indent+1);
    printf ("%s%04x:  WRITE_ONE_BYTE_HW_I2C_DATA_PARAMETERS sReserved%s :\n", IND(indent), (int)(((uint8_t*)&d->sReserved)-start), FILL(46)); WRITE_ONE_BYTE_HW_I2C_DATA_PARAMETERS_dumper (start, (uint8_t*) &d->sReserved, indent+1);
  }
  return sizeof (ENABLE_EXTERNAL_TMDS_ENCODER_PS_ALLOCATION);
}
int ENABLE_EXTERNAL_TMDS_ENCODER_PS_ALLOCATION_V2_dumper (uint8_t *start, uint8_t *data, int indent) {
  ENABLE_EXTERNAL_TMDS_ENCODER_PS_ALLOCATION_V2 *d = (ENABLE_EXTERNAL_TMDS_ENCODER_PS_ALLOCATION_V2 *) data;
  int i;
  if (d) {
    printf ("%s%04x:  LVDS_ENCODER_CONTROL_PARAMETERS_V2 sXTmdsEncoder%s :\n", IND(indent), (int)(((uint8_t*)&d->sXTmdsEncoder)-start), FILL(47)); LVDS_ENCODER_CONTROL_PARAMETERS_V2_dumper (start, (uint8_t*) &d->sXTmdsEncoder, indent+1);
    printf ("%s%04x:  WRITE_ONE_BYTE_HW_I2C_DATA_PARAMETERS sReserved%s :\n", IND(indent), (int)(((uint8_t*)&d->sReserved)-start), FILL(46)); WRITE_ONE_BYTE_HW_I2C_DATA_PARAMETERS_dumper (start, (uint8_t*) &d->sReserved, indent+1);
  }
  return sizeof (ENABLE_EXTERNAL_TMDS_ENCODER_PS_ALLOCATION_V2);
}
int EXTERNAL_ENCODER_CONTROL_PS_ALLOCATION_dumper (uint8_t *start, uint8_t *data, int indent) {
  EXTERNAL_ENCODER_CONTROL_PS_ALLOCATION *d = (EXTERNAL_ENCODER_CONTROL_PS_ALLOCATION *) data;
  int i;
  if (d) {
    printf ("%s%04x:  DIG_ENCODER_CONTROL_PARAMETERS sDigEncoder%s :\n", IND(indent), (int)(((uint8_t*)&d->sDigEncoder)-start), FILL(41)); DIG_ENCODER_CONTROL_PARAMETERS_dumper (start, (uint8_t*) &d->sDigEncoder, indent+1);
    printf ("%s%04x:  WRITE_ONE_BYTE_HW_I2C_DATA_PARAMETERS sReserved%s :\n", IND(indent), (int)(((uint8_t*)&d->sReserved)-start), FILL(46)); WRITE_ONE_BYTE_HW_I2C_DATA_PARAMETERS_dumper (start, (uint8_t*) &d->sReserved, indent+1);
  }
  return sizeof (EXTERNAL_ENCODER_CONTROL_PS_ALLOCATION);
}
int DVO_ENCODER_CONTROL_PARAMETERS_V3_dumper (uint8_t *start, uint8_t *data, int indent) {
  DVO_ENCODER_CONTROL_PARAMETERS_V3 *d = (DVO_ENCODER_CONTROL_PARAMETERS_V3 *) data;
  int i;
  if (d) {
    printf ("%s%04x:  USHORT usPixelClock%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usPixelClock)-start), FILL(18), d->usPixelClock, d->usPixelClock);
    printf ("%s%04x:  UCHAR ucDVOConfig%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucDVOConfig)-start), FILL(16), d->ucDVOConfig, d->ucDVOConfig);
    printf ("%s%04x:  UCHAR ucAction%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucAction)-start), FILL(13), d->ucAction, d->ucAction);
    for (i = 0; i < 4; i++) {
      printf ("%s%04x:  UCHAR ucReseved%s [%d] = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucReseved[i])-start), FILL(18+(i>9)), i, d->ucReseved[i], d->ucReseved[i]); }
  }
  return sizeof (DVO_ENCODER_CONTROL_PARAMETERS_V3);
}
int SET_VOLTAGE_PARAMETERS_dumper (uint8_t *start, uint8_t *data, int indent) {
  SET_VOLTAGE_PARAMETERS *d = (SET_VOLTAGE_PARAMETERS *) data;
  int i;
  if (d) {
    printf ("%s%04x:  UCHAR ucVoltageType%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucVoltageType)-start), FILL(18), d->ucVoltageType, d->ucVoltageType);
    printf ("%s%04x:  UCHAR ucVoltageMode%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucVoltageMode)-start), FILL(18), d->ucVoltageMode, d->ucVoltageMode);
    printf ("%s%04x:  UCHAR ucVoltageIndex%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucVoltageIndex)-start), FILL(19), d->ucVoltageIndex, d->ucVoltageIndex);
    printf ("%s%04x:  UCHAR ucReserved%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucReserved)-start), FILL(15), d->ucReserved, d->ucReserved);
  }
  return sizeof (SET_VOLTAGE_PARAMETERS);
}
int SET_VOLTAGE_PARAMETERS_V2_dumper (uint8_t *start, uint8_t *data, int indent) {
  SET_VOLTAGE_PARAMETERS_V2 *d = (SET_VOLTAGE_PARAMETERS_V2 *) data;
  int i;
  if (d) {
    printf ("%s%04x:  UCHAR ucVoltageType%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucVoltageType)-start), FILL(18), d->ucVoltageType, d->ucVoltageType);
    printf ("%s%04x:  UCHAR ucVoltageMode%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucVoltageMode)-start), FILL(18), d->ucVoltageMode, d->ucVoltageMode);
    printf ("%s%04x:  USHORT usVoltageLevel%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usVoltageLevel)-start), FILL(20), d->usVoltageLevel, d->usVoltageLevel);
  }
  return sizeof (SET_VOLTAGE_PARAMETERS_V2);
}
int SET_VOLTAGE_PS_ALLOCATION_dumper (uint8_t *start, uint8_t *data, int indent) {
  SET_VOLTAGE_PS_ALLOCATION *d = (SET_VOLTAGE_PS_ALLOCATION *) data;
  int i;
  if (d) {
    printf ("%s%04x:  SET_VOLTAGE_PARAMETERS sASICSetVoltage%s :\n", IND(indent), (int)(((uint8_t*)&d->sASICSetVoltage)-start), FILL(37)); SET_VOLTAGE_PARAMETERS_dumper (start, (uint8_t*) &d->sASICSetVoltage, indent+1);
    printf ("%s%04x:  WRITE_ONE_BYTE_HW_I2C_DATA_PARAMETERS sReserved%s :\n", IND(indent), (int)(((uint8_t*)&d->sReserved)-start), FILL(46)); WRITE_ONE_BYTE_HW_I2C_DATA_PARAMETERS_dumper (start, (uint8_t*) &d->sReserved, indent+1);
  }
  return sizeof (SET_VOLTAGE_PS_ALLOCATION);
}
int TV_ENCODER_CONTROL_PARAMETERS_dumper (uint8_t *start, uint8_t *data, int indent) {
  TV_ENCODER_CONTROL_PARAMETERS *d = (TV_ENCODER_CONTROL_PARAMETERS *) data;
  int i;
  if (d) {
    printf ("%s%04x:  USHORT usPixelClock%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usPixelClock)-start), FILL(18), d->usPixelClock, d->usPixelClock);
    printf ("%s%04x:  UCHAR ucTvStandard%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucTvStandard)-start), FILL(17), d->ucTvStandard, d->ucTvStandard);
    printf ("%s%04x:  UCHAR ucAction%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucAction)-start), FILL(13), d->ucAction, d->ucAction);
  }
  return sizeof (TV_ENCODER_CONTROL_PARAMETERS);
}
int TV_ENCODER_CONTROL_PS_ALLOCATION_dumper (uint8_t *start, uint8_t *data, int indent) {
  TV_ENCODER_CONTROL_PS_ALLOCATION *d = (TV_ENCODER_CONTROL_PS_ALLOCATION *) data;
  int i;
  if (d) {
    printf ("%s%04x:  TV_ENCODER_CONTROL_PARAMETERS sTVEncoder%s :\n", IND(indent), (int)(((uint8_t*)&d->sTVEncoder)-start), FILL(39)); TV_ENCODER_CONTROL_PARAMETERS_dumper (start, (uint8_t*) &d->sTVEncoder, indent+1);
    printf ("%s%04x:  WRITE_ONE_BYTE_HW_I2C_DATA_PARAMETERS sReserved%s :\n", IND(indent), (int)(((uint8_t*)&d->sReserved)-start), FILL(46)); WRITE_ONE_BYTE_HW_I2C_DATA_PARAMETERS_dumper (start, (uint8_t*) &d->sReserved, indent+1);
  }
  return sizeof (TV_ENCODER_CONTROL_PS_ALLOCATION);
}
int ATOM_MASTER_LIST_OF_DATA_TABLES_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_MASTER_LIST_OF_DATA_TABLES *d = (ATOM_MASTER_LIST_OF_DATA_TABLES *) data;
  int i;
  if (d) {
    printf ("%s%04x:  USHORT UtilityPipeLine%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->UtilityPipeLine)-start), FILL(21), d->UtilityPipeLine, d->UtilityPipeLine);
    printf ("%s%04x:  USHORT MultimediaCapabilityInfo%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->MultimediaCapabilityInfo)-start), FILL(30), d->MultimediaCapabilityInfo, d->MultimediaCapabilityInfo);
    printf ("%s%04x:  USHORT MultimediaConfigInfo%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->MultimediaConfigInfo)-start), FILL(26), d->MultimediaConfigInfo, d->MultimediaConfigInfo);
    printf ("%s%04x:  USHORT StandardVESA_Timing%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->StandardVESA_Timing)-start), FILL(25), d->StandardVESA_Timing, d->StandardVESA_Timing);
    printf ("%s%04x:  USHORT FirmwareInfo%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->FirmwareInfo)-start), FILL(18), d->FirmwareInfo, d->FirmwareInfo);
    printf ("%s%04x:  USHORT DAC_Info%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->DAC_Info)-start), FILL(14), d->DAC_Info, d->DAC_Info);
    printf ("%s%04x:  USHORT LCD_Info%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->LCD_Info)-start), FILL(14), d->LCD_Info, d->LCD_Info);
    printf ("%s%04x:  USHORT TMDS_Info%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->TMDS_Info)-start), FILL(15), d->TMDS_Info, d->TMDS_Info);
    printf ("%s%04x:  USHORT AnalogTV_Info%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->AnalogTV_Info)-start), FILL(19), d->AnalogTV_Info, d->AnalogTV_Info);
    printf ("%s%04x:  USHORT SupportedDevicesInfo%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->SupportedDevicesInfo)-start), FILL(26), d->SupportedDevicesInfo, d->SupportedDevicesInfo);
    printf ("%s%04x:  USHORT GPIO_I2C_Info%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->GPIO_I2C_Info)-start), FILL(19), d->GPIO_I2C_Info, d->GPIO_I2C_Info);
    printf ("%s%04x:  USHORT VRAM_UsageByFirmware%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->VRAM_UsageByFirmware)-start), FILL(26), d->VRAM_UsageByFirmware, d->VRAM_UsageByFirmware);
    printf ("%s%04x:  USHORT GPIO_Pin_LUT%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->GPIO_Pin_LUT)-start), FILL(18), d->GPIO_Pin_LUT, d->GPIO_Pin_LUT);
    printf ("%s%04x:  USHORT VESA_ToInternalModeLUT%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->VESA_ToInternalModeLUT)-start), FILL(28), d->VESA_ToInternalModeLUT, d->VESA_ToInternalModeLUT);
    printf ("%s%04x:  USHORT ComponentVideoInfo%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->ComponentVideoInfo)-start), FILL(24), d->ComponentVideoInfo, d->ComponentVideoInfo);
    printf ("%s%04x:  USHORT PowerPlayInfo%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->PowerPlayInfo)-start), FILL(19), d->PowerPlayInfo, d->PowerPlayInfo);
    printf ("%s%04x:  USHORT CompassionateData%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->CompassionateData)-start), FILL(23), d->CompassionateData, d->CompassionateData);
    printf ("%s%04x:  USHORT SaveRestoreInfo%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->SaveRestoreInfo)-start), FILL(21), d->SaveRestoreInfo, d->SaveRestoreInfo);
    printf ("%s%04x:  USHORT PPLL_SS_Info%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->PPLL_SS_Info)-start), FILL(18), d->PPLL_SS_Info, d->PPLL_SS_Info);
    printf ("%s%04x:  USHORT OemInfo%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->OemInfo)-start), FILL(13), d->OemInfo, d->OemInfo);
    printf ("%s%04x:  USHORT XTMDS_Info%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->XTMDS_Info)-start), FILL(16), d->XTMDS_Info, d->XTMDS_Info);
    printf ("%s%04x:  USHORT MclkSS_Info%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->MclkSS_Info)-start), FILL(17), d->MclkSS_Info, d->MclkSS_Info);
    printf ("%s%04x:  USHORT Object_Header%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->Object_Header)-start), FILL(19), d->Object_Header, d->Object_Header);
    printf ("%s%04x:  USHORT IndirectIOAccess%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->IndirectIOAccess)-start), FILL(22), d->IndirectIOAccess, d->IndirectIOAccess);
    printf ("%s%04x:  USHORT MC_InitParameter%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->MC_InitParameter)-start), FILL(22), d->MC_InitParameter, d->MC_InitParameter);
    printf ("%s%04x:  USHORT ASIC_VDDC_Info%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->ASIC_VDDC_Info)-start), FILL(20), d->ASIC_VDDC_Info, d->ASIC_VDDC_Info);
    printf ("%s%04x:  USHORT ASIC_InternalSS_Info%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->ASIC_InternalSS_Info)-start), FILL(26), d->ASIC_InternalSS_Info, d->ASIC_InternalSS_Info);
    printf ("%s%04x:  USHORT TV_VideoMode%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->TV_VideoMode)-start), FILL(18), d->TV_VideoMode, d->TV_VideoMode);
    printf ("%s%04x:  USHORT VRAM_Info%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->VRAM_Info)-start), FILL(15), d->VRAM_Info, d->VRAM_Info);
    printf ("%s%04x:  USHORT MemoryTrainingInfo%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->MemoryTrainingInfo)-start), FILL(24), d->MemoryTrainingInfo, d->MemoryTrainingInfo);
    printf ("%s%04x:  USHORT IntegratedSystemInfo%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->IntegratedSystemInfo)-start), FILL(26), d->IntegratedSystemInfo, d->IntegratedSystemInfo);
    printf ("%s%04x:  USHORT ASIC_ProfilingInfo%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->ASIC_ProfilingInfo)-start), FILL(24), d->ASIC_ProfilingInfo, d->ASIC_ProfilingInfo);
    printf ("%s%04x:  USHORT VoltageObjectInfo%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->VoltageObjectInfo)-start), FILL(23), d->VoltageObjectInfo, d->VoltageObjectInfo);
    printf ("%s%04x:  USHORT PowerSourceInfo%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->PowerSourceInfo)-start), FILL(21), d->PowerSourceInfo, d->PowerSourceInfo);
  }
  return sizeof (ATOM_MASTER_LIST_OF_DATA_TABLES);
}
int ATOM_MASTER_DATA_TABLE_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_MASTER_DATA_TABLE *d = (ATOM_MASTER_DATA_TABLE *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ATOM_COMMON_TABLE_HEADER sHeader%s :\n", IND(indent), (int)(((uint8_t*)&d->sHeader)-start), FILL(31)); ATOM_COMMON_TABLE_HEADER_dumper (start, (uint8_t*) &d->sHeader, indent+1);
    printf ("%s%04x:  ATOM_MASTER_LIST_OF_DATA_TABLES ListOfDataTables%s :\n", IND(indent), (int)(((uint8_t*)&d->ListOfDataTables)-start), FILL(47)); ATOM_MASTER_LIST_OF_DATA_TABLES_dumper (start, (uint8_t*) &d->ListOfDataTables, indent+1);
  }
  return sizeof (ATOM_MASTER_DATA_TABLE);
}
int ATOM_MULTIMEDIA_CAPABILITY_INFO_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_MULTIMEDIA_CAPABILITY_INFO *d = (ATOM_MULTIMEDIA_CAPABILITY_INFO *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ATOM_COMMON_TABLE_HEADER sHeader%s :\n", IND(indent), (int)(((uint8_t*)&d->sHeader)-start), FILL(31)); ATOM_COMMON_TABLE_HEADER_dumper (start, (uint8_t*) &d->sHeader, indent+1);
    printf ("%s%04x:  ULONG ulSignature%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulSignature)-start), FILL(16), d->ulSignature, d->ulSignature);
    printf ("%s%04x:  UCHAR ucI2C_Type%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucI2C_Type)-start), FILL(15), d->ucI2C_Type, d->ucI2C_Type);
    printf ("%s%04x:  UCHAR ucTV_OutInfo%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucTV_OutInfo)-start), FILL(17), d->ucTV_OutInfo, d->ucTV_OutInfo);
    printf ("%s%04x:  UCHAR ucVideoPortInfo%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucVideoPortInfo)-start), FILL(20), d->ucVideoPortInfo, d->ucVideoPortInfo);
    printf ("%s%04x:  UCHAR ucHostPortInfo%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucHostPortInfo)-start), FILL(19), d->ucHostPortInfo, d->ucHostPortInfo);
  }
  return sizeof (ATOM_MULTIMEDIA_CAPABILITY_INFO);
}
int ATOM_MULTIMEDIA_CONFIG_INFO_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_MULTIMEDIA_CONFIG_INFO *d = (ATOM_MULTIMEDIA_CONFIG_INFO *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ATOM_COMMON_TABLE_HEADER sHeader%s :\n", IND(indent), (int)(((uint8_t*)&d->sHeader)-start), FILL(31)); ATOM_COMMON_TABLE_HEADER_dumper (start, (uint8_t*) &d->sHeader, indent+1);
    printf ("%s%04x:  ULONG ulSignature%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulSignature)-start), FILL(16), d->ulSignature, d->ulSignature);
    printf ("%s%04x:  UCHAR ucTunerInfo%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucTunerInfo)-start), FILL(16), d->ucTunerInfo, d->ucTunerInfo);
    printf ("%s%04x:  UCHAR ucAudioChipInfo%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucAudioChipInfo)-start), FILL(20), d->ucAudioChipInfo, d->ucAudioChipInfo);
    printf ("%s%04x:  UCHAR ucProductID%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucProductID)-start), FILL(16), d->ucProductID, d->ucProductID);
    printf ("%s%04x:  UCHAR ucMiscInfo1%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucMiscInfo1)-start), FILL(16), d->ucMiscInfo1, d->ucMiscInfo1);
    printf ("%s%04x:  UCHAR ucMiscInfo2%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucMiscInfo2)-start), FILL(16), d->ucMiscInfo2, d->ucMiscInfo2);
    printf ("%s%04x:  UCHAR ucMiscInfo3%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucMiscInfo3)-start), FILL(16), d->ucMiscInfo3, d->ucMiscInfo3);
    printf ("%s%04x:  UCHAR ucMiscInfo4%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucMiscInfo4)-start), FILL(16), d->ucMiscInfo4, d->ucMiscInfo4);
    printf ("%s%04x:  UCHAR ucVideoInput0Info%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucVideoInput0Info)-start), FILL(22), d->ucVideoInput0Info, d->ucVideoInput0Info);
    printf ("%s%04x:  UCHAR ucVideoInput1Info%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucVideoInput1Info)-start), FILL(22), d->ucVideoInput1Info, d->ucVideoInput1Info);
    printf ("%s%04x:  UCHAR ucVideoInput2Info%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucVideoInput2Info)-start), FILL(22), d->ucVideoInput2Info, d->ucVideoInput2Info);
    printf ("%s%04x:  UCHAR ucVideoInput3Info%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucVideoInput3Info)-start), FILL(22), d->ucVideoInput3Info, d->ucVideoInput3Info);
    printf ("%s%04x:  UCHAR ucVideoInput4Info%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucVideoInput4Info)-start), FILL(22), d->ucVideoInput4Info, d->ucVideoInput4Info);
  }
  return sizeof (ATOM_MULTIMEDIA_CONFIG_INFO);
}
int ATOM_FIRMWARE_CAPABILITY_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_FIRMWARE_CAPABILITY *d = (ATOM_FIRMWARE_CAPABILITY *) data;
  int i;
  if (d) {
    printf ("%s       USHORT FirmwarePosted:1%s = 0x%04x     (%d)\n", IND(indent), FILL(22), d->FirmwarePosted, d->FirmwarePosted);
    printf ("%s       USHORT DualCRTC_Support:1%s = 0x%04x     (%d)\n", IND(indent), FILL(24), d->DualCRTC_Support, d->DualCRTC_Support);
    printf ("%s       USHORT ExtendedDesktopSupport:1%s = 0x%04x     (%d)\n", IND(indent), FILL(30), d->ExtendedDesktopSupport, d->ExtendedDesktopSupport);
    printf ("%s       USHORT MemoryClockSS_Support:1%s = 0x%04x     (%d)\n", IND(indent), FILL(29), d->MemoryClockSS_Support, d->MemoryClockSS_Support);
    printf ("%s       USHORT EngineClockSS_Support:1%s = 0x%04x     (%d)\n", IND(indent), FILL(29), d->EngineClockSS_Support, d->EngineClockSS_Support);
    printf ("%s       USHORT GPUControlsBL:1%s = 0x%04x     (%d)\n", IND(indent), FILL(21), d->GPUControlsBL, d->GPUControlsBL);
    printf ("%s       USHORT WMI_SUPPORT:1%s = 0x%04x     (%d)\n", IND(indent), FILL(19), d->WMI_SUPPORT, d->WMI_SUPPORT);
    printf ("%s       USHORT PPMode_Assigned:1%s = 0x%04x     (%d)\n", IND(indent), FILL(23), d->PPMode_Assigned, d->PPMode_Assigned);
    printf ("%s       USHORT HyperMemory_Support:1%s = 0x%04x     (%d)\n", IND(indent), FILL(27), d->HyperMemory_Support, d->HyperMemory_Support);
    printf ("%s       USHORT HyperMemory_Size:4%s = 0x%04x     (%d)\n", IND(indent), FILL(24), d->HyperMemory_Size, d->HyperMemory_Size);
    printf ("%s       USHORT Reserved:3%s = 0x%04x     (%d)\n", IND(indent), FILL(16), d->Reserved, d->Reserved);
  }
  return sizeof (ATOM_FIRMWARE_CAPABILITY);
}
int ATOM_FIRMWARE_CAPABILITY_ACCESS_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_FIRMWARE_CAPABILITY_ACCESS *d = (ATOM_FIRMWARE_CAPABILITY_ACCESS *) data;
  int i;
  if (d) {
    printf ("%s%04x:  (union) ATOM_FIRMWARE_CAPABILITY sbfAccess%s :\n", IND(indent), (int)(((uint8_t*)&d->sbfAccess)-start), FILL(41)); ATOM_FIRMWARE_CAPABILITY_dumper (start, (uint8_t*) &d->sbfAccess, indent+1);
    printf ("%s%04x:  (union) USHORT susAccess%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->susAccess)-start), FILL(23), d->susAccess, d->susAccess);
  }
  return sizeof (ATOM_FIRMWARE_CAPABILITY_ACCESS);
}
int ATOM_FIRMWARE_INFO_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_FIRMWARE_INFO *d = (ATOM_FIRMWARE_INFO *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ATOM_COMMON_TABLE_HEADER sHeader%s :\n", IND(indent), (int)(((uint8_t*)&d->sHeader)-start), FILL(31)); ATOM_COMMON_TABLE_HEADER_dumper (start, (uint8_t*) &d->sHeader, indent+1);
    printf ("%s%04x:  ULONG ulFirmwareRevision%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulFirmwareRevision)-start), FILL(23), d->ulFirmwareRevision, d->ulFirmwareRevision);
    printf ("%s%04x:  ULONG ulDefaultEngineClock%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulDefaultEngineClock)-start), FILL(25), d->ulDefaultEngineClock, d->ulDefaultEngineClock);
    printf ("%s%04x:  ULONG ulDefaultMemoryClock%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulDefaultMemoryClock)-start), FILL(25), d->ulDefaultMemoryClock, d->ulDefaultMemoryClock);
    printf ("%s%04x:  ULONG ulDriverTargetEngineClock%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulDriverTargetEngineClock)-start), FILL(30), d->ulDriverTargetEngineClock, d->ulDriverTargetEngineClock);
    printf ("%s%04x:  ULONG ulDriverTargetMemoryClock%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulDriverTargetMemoryClock)-start), FILL(30), d->ulDriverTargetMemoryClock, d->ulDriverTargetMemoryClock);
    printf ("%s%04x:  ULONG ulMaxEngineClockPLL_Output%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulMaxEngineClockPLL_Output)-start), FILL(31), d->ulMaxEngineClockPLL_Output, d->ulMaxEngineClockPLL_Output);
    printf ("%s%04x:  ULONG ulMaxMemoryClockPLL_Output%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulMaxMemoryClockPLL_Output)-start), FILL(31), d->ulMaxMemoryClockPLL_Output, d->ulMaxMemoryClockPLL_Output);
    printf ("%s%04x:  ULONG ulMaxPixelClockPLL_Output%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulMaxPixelClockPLL_Output)-start), FILL(30), d->ulMaxPixelClockPLL_Output, d->ulMaxPixelClockPLL_Output);
    printf ("%s%04x:  ULONG ulASICMaxEngineClock%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulASICMaxEngineClock)-start), FILL(25), d->ulASICMaxEngineClock, d->ulASICMaxEngineClock);
    printf ("%s%04x:  ULONG ulASICMaxMemoryClock%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulASICMaxMemoryClock)-start), FILL(25), d->ulASICMaxMemoryClock, d->ulASICMaxMemoryClock);
    printf ("%s%04x:  UCHAR ucASICMaxTemperature%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucASICMaxTemperature)-start), FILL(25), d->ucASICMaxTemperature, d->ucASICMaxTemperature);
    for (i = 0; i < 3; i++) {
      printf ("%s%04x:  UCHAR ucPadding%s [%d] = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucPadding[i])-start), FILL(18+(i>9)), i, d->ucPadding[i], d->ucPadding[i]); }
    for (i = 0; i < 3; i++) {
      printf ("%s%04x:  ULONG aulReservedForBIOS%s [%d] = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->aulReservedForBIOS[i])-start), FILL(27+(i>9)), i, d->aulReservedForBIOS[i], d->aulReservedForBIOS[i]); }
    printf ("%s%04x:  USHORT usMinEngineClockPLL_Input%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usMinEngineClockPLL_Input)-start), FILL(31), d->usMinEngineClockPLL_Input, d->usMinEngineClockPLL_Input);
    printf ("%s%04x:  USHORT usMaxEngineClockPLL_Input%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usMaxEngineClockPLL_Input)-start), FILL(31), d->usMaxEngineClockPLL_Input, d->usMaxEngineClockPLL_Input);
    printf ("%s%04x:  USHORT usMinEngineClockPLL_Output%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usMinEngineClockPLL_Output)-start), FILL(32), d->usMinEngineClockPLL_Output, d->usMinEngineClockPLL_Output);
    printf ("%s%04x:  USHORT usMinMemoryClockPLL_Input%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usMinMemoryClockPLL_Input)-start), FILL(31), d->usMinMemoryClockPLL_Input, d->usMinMemoryClockPLL_Input);
    printf ("%s%04x:  USHORT usMaxMemoryClockPLL_Input%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usMaxMemoryClockPLL_Input)-start), FILL(31), d->usMaxMemoryClockPLL_Input, d->usMaxMemoryClockPLL_Input);
    printf ("%s%04x:  USHORT usMinMemoryClockPLL_Output%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usMinMemoryClockPLL_Output)-start), FILL(32), d->usMinMemoryClockPLL_Output, d->usMinMemoryClockPLL_Output);
    printf ("%s%04x:  USHORT usMaxPixelClock%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usMaxPixelClock)-start), FILL(21), d->usMaxPixelClock, d->usMaxPixelClock);
    printf ("%s%04x:  USHORT usMinPixelClockPLL_Input%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usMinPixelClockPLL_Input)-start), FILL(30), d->usMinPixelClockPLL_Input, d->usMinPixelClockPLL_Input);
    printf ("%s%04x:  USHORT usMaxPixelClockPLL_Input%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usMaxPixelClockPLL_Input)-start), FILL(30), d->usMaxPixelClockPLL_Input, d->usMaxPixelClockPLL_Input);
    printf ("%s%04x:  USHORT usMinPixelClockPLL_Output%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usMinPixelClockPLL_Output)-start), FILL(31), d->usMinPixelClockPLL_Output, d->usMinPixelClockPLL_Output);
    printf ("%s%04x:  ATOM_FIRMWARE_CAPABILITY_ACCESS usFirmwareCapability%s :\n", IND(indent), (int)(((uint8_t*)&d->usFirmwareCapability)-start), FILL(51)); ATOM_FIRMWARE_CAPABILITY_ACCESS_dumper (start, (uint8_t*) &d->usFirmwareCapability, indent+1);
    printf ("%s%04x:  USHORT usReferenceClock%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usReferenceClock)-start), FILL(22), d->usReferenceClock, d->usReferenceClock);
    printf ("%s%04x:  USHORT usPM_RTS_Location%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usPM_RTS_Location)-start), FILL(23), d->usPM_RTS_Location, d->usPM_RTS_Location);
    printf ("%s%04x:  UCHAR ucPM_RTS_StreamSize%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucPM_RTS_StreamSize)-start), FILL(24), d->ucPM_RTS_StreamSize, d->ucPM_RTS_StreamSize);
    printf ("%s%04x:  UCHAR ucDesign_ID%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucDesign_ID)-start), FILL(16), d->ucDesign_ID, d->ucDesign_ID);
    printf ("%s%04x:  UCHAR ucMemoryModule_ID%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucMemoryModule_ID)-start), FILL(22), d->ucMemoryModule_ID, d->ucMemoryModule_ID);
  }
  return sizeof (ATOM_FIRMWARE_INFO);
}
int ATOM_FIRMWARE_INFO_V1_2_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_FIRMWARE_INFO_V1_2 *d = (ATOM_FIRMWARE_INFO_V1_2 *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ATOM_COMMON_TABLE_HEADER sHeader%s :\n", IND(indent), (int)(((uint8_t*)&d->sHeader)-start), FILL(31)); ATOM_COMMON_TABLE_HEADER_dumper (start, (uint8_t*) &d->sHeader, indent+1);
    printf ("%s%04x:  ULONG ulFirmwareRevision%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulFirmwareRevision)-start), FILL(23), d->ulFirmwareRevision, d->ulFirmwareRevision);
    printf ("%s%04x:  ULONG ulDefaultEngineClock%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulDefaultEngineClock)-start), FILL(25), d->ulDefaultEngineClock, d->ulDefaultEngineClock);
    printf ("%s%04x:  ULONG ulDefaultMemoryClock%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulDefaultMemoryClock)-start), FILL(25), d->ulDefaultMemoryClock, d->ulDefaultMemoryClock);
    printf ("%s%04x:  ULONG ulDriverTargetEngineClock%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulDriverTargetEngineClock)-start), FILL(30), d->ulDriverTargetEngineClock, d->ulDriverTargetEngineClock);
    printf ("%s%04x:  ULONG ulDriverTargetMemoryClock%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulDriverTargetMemoryClock)-start), FILL(30), d->ulDriverTargetMemoryClock, d->ulDriverTargetMemoryClock);
    printf ("%s%04x:  ULONG ulMaxEngineClockPLL_Output%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulMaxEngineClockPLL_Output)-start), FILL(31), d->ulMaxEngineClockPLL_Output, d->ulMaxEngineClockPLL_Output);
    printf ("%s%04x:  ULONG ulMaxMemoryClockPLL_Output%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulMaxMemoryClockPLL_Output)-start), FILL(31), d->ulMaxMemoryClockPLL_Output, d->ulMaxMemoryClockPLL_Output);
    printf ("%s%04x:  ULONG ulMaxPixelClockPLL_Output%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulMaxPixelClockPLL_Output)-start), FILL(30), d->ulMaxPixelClockPLL_Output, d->ulMaxPixelClockPLL_Output);
    printf ("%s%04x:  ULONG ulASICMaxEngineClock%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulASICMaxEngineClock)-start), FILL(25), d->ulASICMaxEngineClock, d->ulASICMaxEngineClock);
    printf ("%s%04x:  ULONG ulASICMaxMemoryClock%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulASICMaxMemoryClock)-start), FILL(25), d->ulASICMaxMemoryClock, d->ulASICMaxMemoryClock);
    printf ("%s%04x:  UCHAR ucASICMaxTemperature%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucASICMaxTemperature)-start), FILL(25), d->ucASICMaxTemperature, d->ucASICMaxTemperature);
    printf ("%s%04x:  UCHAR ucMinAllowedBL_Level%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucMinAllowedBL_Level)-start), FILL(25), d->ucMinAllowedBL_Level, d->ucMinAllowedBL_Level);
    for (i = 0; i < 2; i++) {
      printf ("%s%04x:  UCHAR ucPadding%s [%d] = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucPadding[i])-start), FILL(18+(i>9)), i, d->ucPadding[i], d->ucPadding[i]); }
    for (i = 0; i < 2; i++) {
      printf ("%s%04x:  ULONG aulReservedForBIOS%s [%d] = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->aulReservedForBIOS[i])-start), FILL(27+(i>9)), i, d->aulReservedForBIOS[i], d->aulReservedForBIOS[i]); }
    printf ("%s%04x:  ULONG ulMinPixelClockPLL_Output%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulMinPixelClockPLL_Output)-start), FILL(30), d->ulMinPixelClockPLL_Output, d->ulMinPixelClockPLL_Output);
    printf ("%s%04x:  USHORT usMinEngineClockPLL_Input%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usMinEngineClockPLL_Input)-start), FILL(31), d->usMinEngineClockPLL_Input, d->usMinEngineClockPLL_Input);
    printf ("%s%04x:  USHORT usMaxEngineClockPLL_Input%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usMaxEngineClockPLL_Input)-start), FILL(31), d->usMaxEngineClockPLL_Input, d->usMaxEngineClockPLL_Input);
    printf ("%s%04x:  USHORT usMinEngineClockPLL_Output%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usMinEngineClockPLL_Output)-start), FILL(32), d->usMinEngineClockPLL_Output, d->usMinEngineClockPLL_Output);
    printf ("%s%04x:  USHORT usMinMemoryClockPLL_Input%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usMinMemoryClockPLL_Input)-start), FILL(31), d->usMinMemoryClockPLL_Input, d->usMinMemoryClockPLL_Input);
    printf ("%s%04x:  USHORT usMaxMemoryClockPLL_Input%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usMaxMemoryClockPLL_Input)-start), FILL(31), d->usMaxMemoryClockPLL_Input, d->usMaxMemoryClockPLL_Input);
    printf ("%s%04x:  USHORT usMinMemoryClockPLL_Output%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usMinMemoryClockPLL_Output)-start), FILL(32), d->usMinMemoryClockPLL_Output, d->usMinMemoryClockPLL_Output);
    printf ("%s%04x:  USHORT usMaxPixelClock%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usMaxPixelClock)-start), FILL(21), d->usMaxPixelClock, d->usMaxPixelClock);
    printf ("%s%04x:  USHORT usMinPixelClockPLL_Input%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usMinPixelClockPLL_Input)-start), FILL(30), d->usMinPixelClockPLL_Input, d->usMinPixelClockPLL_Input);
    printf ("%s%04x:  USHORT usMaxPixelClockPLL_Input%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usMaxPixelClockPLL_Input)-start), FILL(30), d->usMaxPixelClockPLL_Input, d->usMaxPixelClockPLL_Input);
    printf ("%s%04x:  USHORT usMinPixelClockPLL_Output%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usMinPixelClockPLL_Output)-start), FILL(31), d->usMinPixelClockPLL_Output, d->usMinPixelClockPLL_Output);
    printf ("%s%04x:  ATOM_FIRMWARE_CAPABILITY_ACCESS usFirmwareCapability%s :\n", IND(indent), (int)(((uint8_t*)&d->usFirmwareCapability)-start), FILL(51)); ATOM_FIRMWARE_CAPABILITY_ACCESS_dumper (start, (uint8_t*) &d->usFirmwareCapability, indent+1);
    printf ("%s%04x:  USHORT usReferenceClock%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usReferenceClock)-start), FILL(22), d->usReferenceClock, d->usReferenceClock);
    printf ("%s%04x:  USHORT usPM_RTS_Location%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usPM_RTS_Location)-start), FILL(23), d->usPM_RTS_Location, d->usPM_RTS_Location);
    printf ("%s%04x:  UCHAR ucPM_RTS_StreamSize%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucPM_RTS_StreamSize)-start), FILL(24), d->ucPM_RTS_StreamSize, d->ucPM_RTS_StreamSize);
    printf ("%s%04x:  UCHAR ucDesign_ID%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucDesign_ID)-start), FILL(16), d->ucDesign_ID, d->ucDesign_ID);
    printf ("%s%04x:  UCHAR ucMemoryModule_ID%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucMemoryModule_ID)-start), FILL(22), d->ucMemoryModule_ID, d->ucMemoryModule_ID);
  }
  return sizeof (ATOM_FIRMWARE_INFO_V1_2);
}
int ATOM_FIRMWARE_INFO_V1_3_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_FIRMWARE_INFO_V1_3 *d = (ATOM_FIRMWARE_INFO_V1_3 *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ATOM_COMMON_TABLE_HEADER sHeader%s :\n", IND(indent), (int)(((uint8_t*)&d->sHeader)-start), FILL(31)); ATOM_COMMON_TABLE_HEADER_dumper (start, (uint8_t*) &d->sHeader, indent+1);
    printf ("%s%04x:  ULONG ulFirmwareRevision%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulFirmwareRevision)-start), FILL(23), d->ulFirmwareRevision, d->ulFirmwareRevision);
    printf ("%s%04x:  ULONG ulDefaultEngineClock%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulDefaultEngineClock)-start), FILL(25), d->ulDefaultEngineClock, d->ulDefaultEngineClock);
    printf ("%s%04x:  ULONG ulDefaultMemoryClock%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulDefaultMemoryClock)-start), FILL(25), d->ulDefaultMemoryClock, d->ulDefaultMemoryClock);
    printf ("%s%04x:  ULONG ulDriverTargetEngineClock%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulDriverTargetEngineClock)-start), FILL(30), d->ulDriverTargetEngineClock, d->ulDriverTargetEngineClock);
    printf ("%s%04x:  ULONG ulDriverTargetMemoryClock%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulDriverTargetMemoryClock)-start), FILL(30), d->ulDriverTargetMemoryClock, d->ulDriverTargetMemoryClock);
    printf ("%s%04x:  ULONG ulMaxEngineClockPLL_Output%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulMaxEngineClockPLL_Output)-start), FILL(31), d->ulMaxEngineClockPLL_Output, d->ulMaxEngineClockPLL_Output);
    printf ("%s%04x:  ULONG ulMaxMemoryClockPLL_Output%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulMaxMemoryClockPLL_Output)-start), FILL(31), d->ulMaxMemoryClockPLL_Output, d->ulMaxMemoryClockPLL_Output);
    printf ("%s%04x:  ULONG ulMaxPixelClockPLL_Output%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulMaxPixelClockPLL_Output)-start), FILL(30), d->ulMaxPixelClockPLL_Output, d->ulMaxPixelClockPLL_Output);
    printf ("%s%04x:  ULONG ulASICMaxEngineClock%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulASICMaxEngineClock)-start), FILL(25), d->ulASICMaxEngineClock, d->ulASICMaxEngineClock);
    printf ("%s%04x:  ULONG ulASICMaxMemoryClock%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulASICMaxMemoryClock)-start), FILL(25), d->ulASICMaxMemoryClock, d->ulASICMaxMemoryClock);
    printf ("%s%04x:  UCHAR ucASICMaxTemperature%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucASICMaxTemperature)-start), FILL(25), d->ucASICMaxTemperature, d->ucASICMaxTemperature);
    printf ("%s%04x:  UCHAR ucMinAllowedBL_Level%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucMinAllowedBL_Level)-start), FILL(25), d->ucMinAllowedBL_Level, d->ucMinAllowedBL_Level);
    for (i = 0; i < 2; i++) {
      printf ("%s%04x:  UCHAR ucPadding%s [%d] = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucPadding[i])-start), FILL(18+(i>9)), i, d->ucPadding[i], d->ucPadding[i]); }
    printf ("%s%04x:  ULONG aulReservedForBIOS%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->aulReservedForBIOS)-start), FILL(23), d->aulReservedForBIOS, d->aulReservedForBIOS);
    printf ("%s%04x:  ULONG ul3DAccelerationEngineClock%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ul3DAccelerationEngineClock)-start), FILL(32), d->ul3DAccelerationEngineClock, d->ul3DAccelerationEngineClock);
    printf ("%s%04x:  ULONG ulMinPixelClockPLL_Output%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulMinPixelClockPLL_Output)-start), FILL(30), d->ulMinPixelClockPLL_Output, d->ulMinPixelClockPLL_Output);
    printf ("%s%04x:  USHORT usMinEngineClockPLL_Input%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usMinEngineClockPLL_Input)-start), FILL(31), d->usMinEngineClockPLL_Input, d->usMinEngineClockPLL_Input);
    printf ("%s%04x:  USHORT usMaxEngineClockPLL_Input%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usMaxEngineClockPLL_Input)-start), FILL(31), d->usMaxEngineClockPLL_Input, d->usMaxEngineClockPLL_Input);
    printf ("%s%04x:  USHORT usMinEngineClockPLL_Output%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usMinEngineClockPLL_Output)-start), FILL(32), d->usMinEngineClockPLL_Output, d->usMinEngineClockPLL_Output);
    printf ("%s%04x:  USHORT usMinMemoryClockPLL_Input%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usMinMemoryClockPLL_Input)-start), FILL(31), d->usMinMemoryClockPLL_Input, d->usMinMemoryClockPLL_Input);
    printf ("%s%04x:  USHORT usMaxMemoryClockPLL_Input%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usMaxMemoryClockPLL_Input)-start), FILL(31), d->usMaxMemoryClockPLL_Input, d->usMaxMemoryClockPLL_Input);
    printf ("%s%04x:  USHORT usMinMemoryClockPLL_Output%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usMinMemoryClockPLL_Output)-start), FILL(32), d->usMinMemoryClockPLL_Output, d->usMinMemoryClockPLL_Output);
    printf ("%s%04x:  USHORT usMaxPixelClock%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usMaxPixelClock)-start), FILL(21), d->usMaxPixelClock, d->usMaxPixelClock);
    printf ("%s%04x:  USHORT usMinPixelClockPLL_Input%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usMinPixelClockPLL_Input)-start), FILL(30), d->usMinPixelClockPLL_Input, d->usMinPixelClockPLL_Input);
    printf ("%s%04x:  USHORT usMaxPixelClockPLL_Input%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usMaxPixelClockPLL_Input)-start), FILL(30), d->usMaxPixelClockPLL_Input, d->usMaxPixelClockPLL_Input);
    printf ("%s%04x:  USHORT usMinPixelClockPLL_Output%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usMinPixelClockPLL_Output)-start), FILL(31), d->usMinPixelClockPLL_Output, d->usMinPixelClockPLL_Output);
    printf ("%s%04x:  ATOM_FIRMWARE_CAPABILITY_ACCESS usFirmwareCapability%s :\n", IND(indent), (int)(((uint8_t*)&d->usFirmwareCapability)-start), FILL(51)); ATOM_FIRMWARE_CAPABILITY_ACCESS_dumper (start, (uint8_t*) &d->usFirmwareCapability, indent+1);
    printf ("%s%04x:  USHORT usReferenceClock%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usReferenceClock)-start), FILL(22), d->usReferenceClock, d->usReferenceClock);
    printf ("%s%04x:  USHORT usPM_RTS_Location%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usPM_RTS_Location)-start), FILL(23), d->usPM_RTS_Location, d->usPM_RTS_Location);
    printf ("%s%04x:  UCHAR ucPM_RTS_StreamSize%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucPM_RTS_StreamSize)-start), FILL(24), d->ucPM_RTS_StreamSize, d->ucPM_RTS_StreamSize);
    printf ("%s%04x:  UCHAR ucDesign_ID%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucDesign_ID)-start), FILL(16), d->ucDesign_ID, d->ucDesign_ID);
    printf ("%s%04x:  UCHAR ucMemoryModule_ID%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucMemoryModule_ID)-start), FILL(22), d->ucMemoryModule_ID, d->ucMemoryModule_ID);
  }
  return sizeof (ATOM_FIRMWARE_INFO_V1_3);
}
int ATOM_FIRMWARE_INFO_V1_4_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_FIRMWARE_INFO_V1_4 *d = (ATOM_FIRMWARE_INFO_V1_4 *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ATOM_COMMON_TABLE_HEADER sHeader%s :\n", IND(indent), (int)(((uint8_t*)&d->sHeader)-start), FILL(31)); ATOM_COMMON_TABLE_HEADER_dumper (start, (uint8_t*) &d->sHeader, indent+1);
    printf ("%s%04x:  ULONG ulFirmwareRevision%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulFirmwareRevision)-start), FILL(23), d->ulFirmwareRevision, d->ulFirmwareRevision);
    printf ("%s%04x:  ULONG ulDefaultEngineClock%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulDefaultEngineClock)-start), FILL(25), d->ulDefaultEngineClock, d->ulDefaultEngineClock);
    printf ("%s%04x:  ULONG ulDefaultMemoryClock%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulDefaultMemoryClock)-start), FILL(25), d->ulDefaultMemoryClock, d->ulDefaultMemoryClock);
    printf ("%s%04x:  ULONG ulDriverTargetEngineClock%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulDriverTargetEngineClock)-start), FILL(30), d->ulDriverTargetEngineClock, d->ulDriverTargetEngineClock);
    printf ("%s%04x:  ULONG ulDriverTargetMemoryClock%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulDriverTargetMemoryClock)-start), FILL(30), d->ulDriverTargetMemoryClock, d->ulDriverTargetMemoryClock);
    printf ("%s%04x:  ULONG ulMaxEngineClockPLL_Output%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulMaxEngineClockPLL_Output)-start), FILL(31), d->ulMaxEngineClockPLL_Output, d->ulMaxEngineClockPLL_Output);
    printf ("%s%04x:  ULONG ulMaxMemoryClockPLL_Output%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulMaxMemoryClockPLL_Output)-start), FILL(31), d->ulMaxMemoryClockPLL_Output, d->ulMaxMemoryClockPLL_Output);
    printf ("%s%04x:  ULONG ulMaxPixelClockPLL_Output%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulMaxPixelClockPLL_Output)-start), FILL(30), d->ulMaxPixelClockPLL_Output, d->ulMaxPixelClockPLL_Output);
    printf ("%s%04x:  ULONG ulASICMaxEngineClock%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulASICMaxEngineClock)-start), FILL(25), d->ulASICMaxEngineClock, d->ulASICMaxEngineClock);
    printf ("%s%04x:  ULONG ulASICMaxMemoryClock%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulASICMaxMemoryClock)-start), FILL(25), d->ulASICMaxMemoryClock, d->ulASICMaxMemoryClock);
    printf ("%s%04x:  UCHAR ucASICMaxTemperature%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucASICMaxTemperature)-start), FILL(25), d->ucASICMaxTemperature, d->ucASICMaxTemperature);
    printf ("%s%04x:  UCHAR ucMinAllowedBL_Level%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucMinAllowedBL_Level)-start), FILL(25), d->ucMinAllowedBL_Level, d->ucMinAllowedBL_Level);
    printf ("%s%04x:  USHORT usBootUpVDDCVoltage%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usBootUpVDDCVoltage)-start), FILL(25), d->usBootUpVDDCVoltage, d->usBootUpVDDCVoltage);
    printf ("%s%04x:  USHORT usLcdMinPixelClockPLL_Output%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usLcdMinPixelClockPLL_Output)-start), FILL(34), d->usLcdMinPixelClockPLL_Output, d->usLcdMinPixelClockPLL_Output);
    printf ("%s%04x:  USHORT usLcdMaxPixelClockPLL_Output%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usLcdMaxPixelClockPLL_Output)-start), FILL(34), d->usLcdMaxPixelClockPLL_Output, d->usLcdMaxPixelClockPLL_Output);
    printf ("%s%04x:  ULONG ul3DAccelerationEngineClock%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ul3DAccelerationEngineClock)-start), FILL(32), d->ul3DAccelerationEngineClock, d->ul3DAccelerationEngineClock);
    printf ("%s%04x:  ULONG ulMinPixelClockPLL_Output%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulMinPixelClockPLL_Output)-start), FILL(30), d->ulMinPixelClockPLL_Output, d->ulMinPixelClockPLL_Output);
    printf ("%s%04x:  USHORT usMinEngineClockPLL_Input%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usMinEngineClockPLL_Input)-start), FILL(31), d->usMinEngineClockPLL_Input, d->usMinEngineClockPLL_Input);
    printf ("%s%04x:  USHORT usMaxEngineClockPLL_Input%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usMaxEngineClockPLL_Input)-start), FILL(31), d->usMaxEngineClockPLL_Input, d->usMaxEngineClockPLL_Input);
    printf ("%s%04x:  USHORT usMinEngineClockPLL_Output%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usMinEngineClockPLL_Output)-start), FILL(32), d->usMinEngineClockPLL_Output, d->usMinEngineClockPLL_Output);
    printf ("%s%04x:  USHORT usMinMemoryClockPLL_Input%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usMinMemoryClockPLL_Input)-start), FILL(31), d->usMinMemoryClockPLL_Input, d->usMinMemoryClockPLL_Input);
    printf ("%s%04x:  USHORT usMaxMemoryClockPLL_Input%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usMaxMemoryClockPLL_Input)-start), FILL(31), d->usMaxMemoryClockPLL_Input, d->usMaxMemoryClockPLL_Input);
    printf ("%s%04x:  USHORT usMinMemoryClockPLL_Output%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usMinMemoryClockPLL_Output)-start), FILL(32), d->usMinMemoryClockPLL_Output, d->usMinMemoryClockPLL_Output);
    printf ("%s%04x:  USHORT usMaxPixelClock%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usMaxPixelClock)-start), FILL(21), d->usMaxPixelClock, d->usMaxPixelClock);
    printf ("%s%04x:  USHORT usMinPixelClockPLL_Input%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usMinPixelClockPLL_Input)-start), FILL(30), d->usMinPixelClockPLL_Input, d->usMinPixelClockPLL_Input);
    printf ("%s%04x:  USHORT usMaxPixelClockPLL_Input%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usMaxPixelClockPLL_Input)-start), FILL(30), d->usMaxPixelClockPLL_Input, d->usMaxPixelClockPLL_Input);
    printf ("%s%04x:  USHORT usMinPixelClockPLL_Output%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usMinPixelClockPLL_Output)-start), FILL(31), d->usMinPixelClockPLL_Output, d->usMinPixelClockPLL_Output);
    printf ("%s%04x:  ATOM_FIRMWARE_CAPABILITY_ACCESS usFirmwareCapability%s :\n", IND(indent), (int)(((uint8_t*)&d->usFirmwareCapability)-start), FILL(51)); ATOM_FIRMWARE_CAPABILITY_ACCESS_dumper (start, (uint8_t*) &d->usFirmwareCapability, indent+1);
    printf ("%s%04x:  USHORT usReferenceClock%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usReferenceClock)-start), FILL(22), d->usReferenceClock, d->usReferenceClock);
    printf ("%s%04x:  USHORT usPM_RTS_Location%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usPM_RTS_Location)-start), FILL(23), d->usPM_RTS_Location, d->usPM_RTS_Location);
    printf ("%s%04x:  UCHAR ucPM_RTS_StreamSize%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucPM_RTS_StreamSize)-start), FILL(24), d->ucPM_RTS_StreamSize, d->ucPM_RTS_StreamSize);
    printf ("%s%04x:  UCHAR ucDesign_ID%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucDesign_ID)-start), FILL(16), d->ucDesign_ID, d->ucDesign_ID);
    printf ("%s%04x:  UCHAR ucMemoryModule_ID%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucMemoryModule_ID)-start), FILL(22), d->ucMemoryModule_ID, d->ucMemoryModule_ID);
  }
  return sizeof (ATOM_FIRMWARE_INFO_V1_4);
}
int ATOM_FIRMWARE_INFO_V2_1_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_FIRMWARE_INFO_V2_1 *d = (ATOM_FIRMWARE_INFO_V2_1 *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ATOM_COMMON_TABLE_HEADER sHeader%s :\n", IND(indent), (int)(((uint8_t*)&d->sHeader)-start), FILL(31)); ATOM_COMMON_TABLE_HEADER_dumper (start, (uint8_t*) &d->sHeader, indent+1);
    printf ("%s%04x:  ULONG ulFirmwareRevision%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulFirmwareRevision)-start), FILL(23), d->ulFirmwareRevision, d->ulFirmwareRevision);
    printf ("%s%04x:  ULONG ulDefaultEngineClock%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulDefaultEngineClock)-start), FILL(25), d->ulDefaultEngineClock, d->ulDefaultEngineClock);
    printf ("%s%04x:  ULONG ulDefaultMemoryClock%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulDefaultMemoryClock)-start), FILL(25), d->ulDefaultMemoryClock, d->ulDefaultMemoryClock);
    printf ("%s%04x:  ULONG ulReserved1%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulReserved1)-start), FILL(16), d->ulReserved1, d->ulReserved1);
    printf ("%s%04x:  ULONG ulReserved2%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulReserved2)-start), FILL(16), d->ulReserved2, d->ulReserved2);
    printf ("%s%04x:  ULONG ulMaxEngineClockPLL_Output%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulMaxEngineClockPLL_Output)-start), FILL(31), d->ulMaxEngineClockPLL_Output, d->ulMaxEngineClockPLL_Output);
    printf ("%s%04x:  ULONG ulMaxMemoryClockPLL_Output%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulMaxMemoryClockPLL_Output)-start), FILL(31), d->ulMaxMemoryClockPLL_Output, d->ulMaxMemoryClockPLL_Output);
    printf ("%s%04x:  ULONG ulMaxPixelClockPLL_Output%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulMaxPixelClockPLL_Output)-start), FILL(30), d->ulMaxPixelClockPLL_Output, d->ulMaxPixelClockPLL_Output);
    printf ("%s%04x:  ULONG ulBinaryAlteredInfo%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulBinaryAlteredInfo)-start), FILL(24), d->ulBinaryAlteredInfo, d->ulBinaryAlteredInfo);
    printf ("%s%04x:  ULONG ulDefaultDispEngineClkFreq%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulDefaultDispEngineClkFreq)-start), FILL(31), d->ulDefaultDispEngineClkFreq, d->ulDefaultDispEngineClkFreq);
    printf ("%s%04x:  UCHAR ucReserved1%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucReserved1)-start), FILL(16), d->ucReserved1, d->ucReserved1);
    printf ("%s%04x:  UCHAR ucMinAllowedBL_Level%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucMinAllowedBL_Level)-start), FILL(25), d->ucMinAllowedBL_Level, d->ucMinAllowedBL_Level);
    printf ("%s%04x:  USHORT usBootUpVDDCVoltage%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usBootUpVDDCVoltage)-start), FILL(25), d->usBootUpVDDCVoltage, d->usBootUpVDDCVoltage);
    printf ("%s%04x:  USHORT usLcdMinPixelClockPLL_Output%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usLcdMinPixelClockPLL_Output)-start), FILL(34), d->usLcdMinPixelClockPLL_Output, d->usLcdMinPixelClockPLL_Output);
    printf ("%s%04x:  USHORT usLcdMaxPixelClockPLL_Output%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usLcdMaxPixelClockPLL_Output)-start), FILL(34), d->usLcdMaxPixelClockPLL_Output, d->usLcdMaxPixelClockPLL_Output);
    printf ("%s%04x:  ULONG ulReserved4%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulReserved4)-start), FILL(16), d->ulReserved4, d->ulReserved4);
    printf ("%s%04x:  ULONG ulMinPixelClockPLL_Output%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulMinPixelClockPLL_Output)-start), FILL(30), d->ulMinPixelClockPLL_Output, d->ulMinPixelClockPLL_Output);
    printf ("%s%04x:  USHORT usMinEngineClockPLL_Input%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usMinEngineClockPLL_Input)-start), FILL(31), d->usMinEngineClockPLL_Input, d->usMinEngineClockPLL_Input);
    printf ("%s%04x:  USHORT usMaxEngineClockPLL_Input%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usMaxEngineClockPLL_Input)-start), FILL(31), d->usMaxEngineClockPLL_Input, d->usMaxEngineClockPLL_Input);
    printf ("%s%04x:  USHORT usMinEngineClockPLL_Output%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usMinEngineClockPLL_Output)-start), FILL(32), d->usMinEngineClockPLL_Output, d->usMinEngineClockPLL_Output);
    printf ("%s%04x:  USHORT usMinMemoryClockPLL_Input%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usMinMemoryClockPLL_Input)-start), FILL(31), d->usMinMemoryClockPLL_Input, d->usMinMemoryClockPLL_Input);
    printf ("%s%04x:  USHORT usMaxMemoryClockPLL_Input%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usMaxMemoryClockPLL_Input)-start), FILL(31), d->usMaxMemoryClockPLL_Input, d->usMaxMemoryClockPLL_Input);
    printf ("%s%04x:  USHORT usMinMemoryClockPLL_Output%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usMinMemoryClockPLL_Output)-start), FILL(32), d->usMinMemoryClockPLL_Output, d->usMinMemoryClockPLL_Output);
    printf ("%s%04x:  USHORT usMaxPixelClock%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usMaxPixelClock)-start), FILL(21), d->usMaxPixelClock, d->usMaxPixelClock);
    printf ("%s%04x:  USHORT usMinPixelClockPLL_Input%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usMinPixelClockPLL_Input)-start), FILL(30), d->usMinPixelClockPLL_Input, d->usMinPixelClockPLL_Input);
    printf ("%s%04x:  USHORT usMaxPixelClockPLL_Input%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usMaxPixelClockPLL_Input)-start), FILL(30), d->usMaxPixelClockPLL_Input, d->usMaxPixelClockPLL_Input);
    printf ("%s%04x:  USHORT usMinPixelClockPLL_Output%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usMinPixelClockPLL_Output)-start), FILL(31), d->usMinPixelClockPLL_Output, d->usMinPixelClockPLL_Output);
    printf ("%s%04x:  ATOM_FIRMWARE_CAPABILITY_ACCESS usFirmwareCapability%s :\n", IND(indent), (int)(((uint8_t*)&d->usFirmwareCapability)-start), FILL(51)); ATOM_FIRMWARE_CAPABILITY_ACCESS_dumper (start, (uint8_t*) &d->usFirmwareCapability, indent+1);
    printf ("%s%04x:  USHORT usCoreReferenceClock%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usCoreReferenceClock)-start), FILL(26), d->usCoreReferenceClock, d->usCoreReferenceClock);
    printf ("%s%04x:  USHORT usMemoryReferenceClock%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usMemoryReferenceClock)-start), FILL(28), d->usMemoryReferenceClock, d->usMemoryReferenceClock);
    printf ("%s%04x:  USHORT usUniphyDPModeExtClkFreq%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usUniphyDPModeExtClkFreq)-start), FILL(30), d->usUniphyDPModeExtClkFreq, d->usUniphyDPModeExtClkFreq);
    printf ("%s%04x:  UCHAR ucMemoryModule_ID%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucMemoryModule_ID)-start), FILL(22), d->ucMemoryModule_ID, d->ucMemoryModule_ID);
    for (i = 0; i < 3; i++) {
      printf ("%s%04x:  UCHAR ucReserved4%s [%d] = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucReserved4[i])-start), FILL(20+(i>9)), i, d->ucReserved4[i], d->ucReserved4[i]); }
  }
  return sizeof (ATOM_FIRMWARE_INFO_V2_1);
}
int ATOM_FIRMWARE_INFO_V2_2_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_FIRMWARE_INFO_V2_2 *d = (ATOM_FIRMWARE_INFO_V2_2 *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ATOM_COMMON_TABLE_HEADER sHeader%s :\n", IND(indent), (int)(((uint8_t*)&d->sHeader)-start), FILL(31)); ATOM_COMMON_TABLE_HEADER_dumper (start, (uint8_t*) &d->sHeader, indent+1);
    printf ("%s%04x:  ULONG ulFirmwareRevision%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulFirmwareRevision)-start), FILL(23), d->ulFirmwareRevision, d->ulFirmwareRevision);
    printf ("%s%04x:  ULONG ulDefaultEngineClock%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulDefaultEngineClock)-start), FILL(25), d->ulDefaultEngineClock, d->ulDefaultEngineClock);
    printf ("%s%04x:  ULONG ulDefaultMemoryClock%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulDefaultMemoryClock)-start), FILL(25), d->ulDefaultMemoryClock, d->ulDefaultMemoryClock);
    for (i = 0; i < 2; i++) {
      printf ("%s%04x:  ULONG ulReserved%s [%d] = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulReserved[i])-start), FILL(19+(i>9)), i, d->ulReserved[i], d->ulReserved[i]); }
    printf ("%s%04x:  ULONG ulReserved1%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulReserved1)-start), FILL(16), d->ulReserved1, d->ulReserved1);
    printf ("%s%04x:  ULONG ulReserved2%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulReserved2)-start), FILL(16), d->ulReserved2, d->ulReserved2);
    printf ("%s%04x:  ULONG ulMaxPixelClockPLL_Output%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulMaxPixelClockPLL_Output)-start), FILL(30), d->ulMaxPixelClockPLL_Output, d->ulMaxPixelClockPLL_Output);
    printf ("%s%04x:  ULONG ulBinaryAlteredInfo%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulBinaryAlteredInfo)-start), FILL(24), d->ulBinaryAlteredInfo, d->ulBinaryAlteredInfo);
    printf ("%s%04x:  ULONG ulDefaultDispEngineClkFreq%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulDefaultDispEngineClkFreq)-start), FILL(31), d->ulDefaultDispEngineClkFreq, d->ulDefaultDispEngineClkFreq);
    printf ("%s%04x:  UCHAR ucReserved3%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucReserved3)-start), FILL(16), d->ucReserved3, d->ucReserved3);
    printf ("%s%04x:  UCHAR ucMinAllowedBL_Level%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucMinAllowedBL_Level)-start), FILL(25), d->ucMinAllowedBL_Level, d->ucMinAllowedBL_Level);
    printf ("%s%04x:  USHORT usBootUpVDDCVoltage%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usBootUpVDDCVoltage)-start), FILL(25), d->usBootUpVDDCVoltage, d->usBootUpVDDCVoltage);
    printf ("%s%04x:  USHORT usLcdMinPixelClockPLL_Output%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usLcdMinPixelClockPLL_Output)-start), FILL(34), d->usLcdMinPixelClockPLL_Output, d->usLcdMinPixelClockPLL_Output);
    printf ("%s%04x:  USHORT usLcdMaxPixelClockPLL_Output%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usLcdMaxPixelClockPLL_Output)-start), FILL(34), d->usLcdMaxPixelClockPLL_Output, d->usLcdMaxPixelClockPLL_Output);
    printf ("%s%04x:  ULONG ulReserved4%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulReserved4)-start), FILL(16), d->ulReserved4, d->ulReserved4);
    printf ("%s%04x:  ULONG ulMinPixelClockPLL_Output%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulMinPixelClockPLL_Output)-start), FILL(30), d->ulMinPixelClockPLL_Output, d->ulMinPixelClockPLL_Output);
    printf ("%s%04x:  ULONG ulReserved5%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulReserved5)-start), FILL(16), d->ulReserved5, d->ulReserved5);
    printf ("%s%04x:  ULONG ulReserved6%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulReserved6)-start), FILL(16), d->ulReserved6, d->ulReserved6);
    printf ("%s%04x:  ULONG ulReserved7%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulReserved7)-start), FILL(16), d->ulReserved7, d->ulReserved7);
    printf ("%s%04x:  USHORT usReserved11%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usReserved11)-start), FILL(18), d->usReserved11, d->usReserved11);
    printf ("%s%04x:  USHORT usMinPixelClockPLL_Input%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usMinPixelClockPLL_Input)-start), FILL(30), d->usMinPixelClockPLL_Input, d->usMinPixelClockPLL_Input);
    printf ("%s%04x:  USHORT usMaxPixelClockPLL_Input%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usMaxPixelClockPLL_Input)-start), FILL(30), d->usMaxPixelClockPLL_Input, d->usMaxPixelClockPLL_Input);
    printf ("%s%04x:  USHORT usBootUpVDDCIVoltage%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usBootUpVDDCIVoltage)-start), FILL(26), d->usBootUpVDDCIVoltage, d->usBootUpVDDCIVoltage);
    printf ("%s%04x:  ATOM_FIRMWARE_CAPABILITY_ACCESS usFirmwareCapability%s :\n", IND(indent), (int)(((uint8_t*)&d->usFirmwareCapability)-start), FILL(51)); ATOM_FIRMWARE_CAPABILITY_ACCESS_dumper (start, (uint8_t*) &d->usFirmwareCapability, indent+1);
    printf ("%s%04x:  USHORT usCoreReferenceClock%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usCoreReferenceClock)-start), FILL(26), d->usCoreReferenceClock, d->usCoreReferenceClock);
    printf ("%s%04x:  USHORT usMemoryReferenceClock%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usMemoryReferenceClock)-start), FILL(28), d->usMemoryReferenceClock, d->usMemoryReferenceClock);
    printf ("%s%04x:  USHORT usUniphyDPModeExtClkFreq%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usUniphyDPModeExtClkFreq)-start), FILL(30), d->usUniphyDPModeExtClkFreq, d->usUniphyDPModeExtClkFreq);
    printf ("%s%04x:  UCHAR ucMemoryModule_ID%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucMemoryModule_ID)-start), FILL(22), d->ucMemoryModule_ID, d->ucMemoryModule_ID);
    for (i = 0; i < 3; i++) {
      printf ("%s%04x:  UCHAR ucReserved9%s [%d] = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucReserved9[i])-start), FILL(20+(i>9)), i, d->ucReserved9[i], d->ucReserved9[i]); }
    printf ("%s%04x:  USHORT usBootUpMVDDCVoltage%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usBootUpMVDDCVoltage)-start), FILL(26), d->usBootUpMVDDCVoltage, d->usBootUpMVDDCVoltage);
    printf ("%s%04x:  USHORT usReserved12%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usReserved12)-start), FILL(18), d->usReserved12, d->usReserved12);
    for (i = 0; i < 3; i++) {
      printf ("%s%04x:  ULONG ulReserved10%s [%d] = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulReserved10[i])-start), FILL(21+(i>9)), i, d->ulReserved10[i], d->ulReserved10[i]); }
  }
  return sizeof (ATOM_FIRMWARE_INFO_V2_2);
}
int ATOM_INTEGRATED_SYSTEM_INFO_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_INTEGRATED_SYSTEM_INFO *d = (ATOM_INTEGRATED_SYSTEM_INFO *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ATOM_COMMON_TABLE_HEADER sHeader%s :\n", IND(indent), (int)(((uint8_t*)&d->sHeader)-start), FILL(31)); ATOM_COMMON_TABLE_HEADER_dumper (start, (uint8_t*) &d->sHeader, indent+1);
    printf ("%s%04x:  ULONG ulBootUpEngineClock%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulBootUpEngineClock)-start), FILL(24), d->ulBootUpEngineClock, d->ulBootUpEngineClock);
    printf ("%s%04x:  ULONG ulBootUpMemoryClock%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulBootUpMemoryClock)-start), FILL(24), d->ulBootUpMemoryClock, d->ulBootUpMemoryClock);
    printf ("%s%04x:  ULONG ulMaxSystemMemoryClock%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulMaxSystemMemoryClock)-start), FILL(27), d->ulMaxSystemMemoryClock, d->ulMaxSystemMemoryClock);
    printf ("%s%04x:  ULONG ulMinSystemMemoryClock%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulMinSystemMemoryClock)-start), FILL(27), d->ulMinSystemMemoryClock, d->ulMinSystemMemoryClock);
    printf ("%s%04x:  UCHAR ucNumberOfCyclesInPeriodHi%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucNumberOfCyclesInPeriodHi)-start), FILL(31), d->ucNumberOfCyclesInPeriodHi, d->ucNumberOfCyclesInPeriodHi);
    printf ("%s%04x:  UCHAR ucLCDTimingSel%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucLCDTimingSel)-start), FILL(19), d->ucLCDTimingSel, d->ucLCDTimingSel);
    printf ("%s%04x:  USHORT usReserved1%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usReserved1)-start), FILL(17), d->usReserved1, d->usReserved1);
    printf ("%s%04x:  USHORT usInterNBVoltageLow%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usInterNBVoltageLow)-start), FILL(25), d->usInterNBVoltageLow, d->usInterNBVoltageLow);
    printf ("%s%04x:  USHORT usInterNBVoltageHigh%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usInterNBVoltageHigh)-start), FILL(26), d->usInterNBVoltageHigh, d->usInterNBVoltageHigh);
    for (i = 0; i < 2; i++) {
      printf ("%s%04x:  ULONG ulReserved%s [%d] = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulReserved[i])-start), FILL(19+(i>9)), i, d->ulReserved[i], d->ulReserved[i]); }
    printf ("%s%04x:  USHORT usFSBClock%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usFSBClock)-start), FILL(16), d->usFSBClock, d->usFSBClock);
    printf ("%s%04x:  USHORT usCapabilityFlag%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usCapabilityFlag)-start), FILL(22), d->usCapabilityFlag, d->usCapabilityFlag);
    printf ("%s%04x:  USHORT usPCIENBCfgReg7%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usPCIENBCfgReg7)-start), FILL(21), d->usPCIENBCfgReg7, d->usPCIENBCfgReg7);
    printf ("%s%04x:  USHORT usK8MemoryClock%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usK8MemoryClock)-start), FILL(21), d->usK8MemoryClock, d->usK8MemoryClock);
    printf ("%s%04x:  USHORT usK8SyncStartDelay%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usK8SyncStartDelay)-start), FILL(24), d->usK8SyncStartDelay, d->usK8SyncStartDelay);
    printf ("%s%04x:  USHORT usK8DataReturnTime%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usK8DataReturnTime)-start), FILL(24), d->usK8DataReturnTime, d->usK8DataReturnTime);
    printf ("%s%04x:  UCHAR ucMaxNBVoltage%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucMaxNBVoltage)-start), FILL(19), d->ucMaxNBVoltage, d->ucMaxNBVoltage);
    printf ("%s%04x:  UCHAR ucMinNBVoltage%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucMinNBVoltage)-start), FILL(19), d->ucMinNBVoltage, d->ucMinNBVoltage);
    printf ("%s%04x:  UCHAR ucMemoryType%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucMemoryType)-start), FILL(17), d->ucMemoryType, d->ucMemoryType);
    printf ("%s%04x:  UCHAR ucNumberOfCyclesInPeriod%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucNumberOfCyclesInPeriod)-start), FILL(29), d->ucNumberOfCyclesInPeriod, d->ucNumberOfCyclesInPeriod);
    printf ("%s%04x:  UCHAR ucStartingPWM_HighTime%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucStartingPWM_HighTime)-start), FILL(27), d->ucStartingPWM_HighTime, d->ucStartingPWM_HighTime);
    printf ("%s%04x:  UCHAR ucHTLinkWidth%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucHTLinkWidth)-start), FILL(18), d->ucHTLinkWidth, d->ucHTLinkWidth);
    printf ("%s%04x:  UCHAR ucMaxNBVoltageHigh%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucMaxNBVoltageHigh)-start), FILL(23), d->ucMaxNBVoltageHigh, d->ucMaxNBVoltageHigh);
    printf ("%s%04x:  UCHAR ucMinNBVoltageHigh%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucMinNBVoltageHigh)-start), FILL(23), d->ucMinNBVoltageHigh, d->ucMinNBVoltageHigh);
  }
  return sizeof (ATOM_INTEGRATED_SYSTEM_INFO);
}
int ATOM_INTEGRATED_SYSTEM_INFO_V2_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_INTEGRATED_SYSTEM_INFO_V2 *d = (ATOM_INTEGRATED_SYSTEM_INFO_V2 *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ATOM_COMMON_TABLE_HEADER sHeader%s :\n", IND(indent), (int)(((uint8_t*)&d->sHeader)-start), FILL(31)); ATOM_COMMON_TABLE_HEADER_dumper (start, (uint8_t*) &d->sHeader, indent+1);
    printf ("%s%04x:  ULONG ulBootUpEngineClock%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulBootUpEngineClock)-start), FILL(24), d->ulBootUpEngineClock, d->ulBootUpEngineClock);
    for (i = 0; i < 2; i++) {
      printf ("%s%04x:  ULONG ulReserved1%s [%d] = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulReserved1[i])-start), FILL(20+(i>9)), i, d->ulReserved1[i], d->ulReserved1[i]); }
    printf ("%s%04x:  ULONG ulBootUpUMAClock%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulBootUpUMAClock)-start), FILL(21), d->ulBootUpUMAClock, d->ulBootUpUMAClock);
    printf ("%s%04x:  ULONG ulBootUpSidePortClock%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulBootUpSidePortClock)-start), FILL(26), d->ulBootUpSidePortClock, d->ulBootUpSidePortClock);
    printf ("%s%04x:  ULONG ulMinSidePortClock%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulMinSidePortClock)-start), FILL(23), d->ulMinSidePortClock, d->ulMinSidePortClock);
    for (i = 0; i < 6; i++) {
      printf ("%s%04x:  ULONG ulReserved2%s [%d] = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulReserved2[i])-start), FILL(20+(i>9)), i, d->ulReserved2[i], d->ulReserved2[i]); }
    printf ("%s%04x:  ULONG ulSystemConfig%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulSystemConfig)-start), FILL(19), d->ulSystemConfig, d->ulSystemConfig);
    printf ("%s%04x:  ULONG ulBootUpReqDisplayVector%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulBootUpReqDisplayVector)-start), FILL(29), d->ulBootUpReqDisplayVector, d->ulBootUpReqDisplayVector);
    printf ("%s%04x:  ULONG ulOtherDisplayMisc%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulOtherDisplayMisc)-start), FILL(23), d->ulOtherDisplayMisc, d->ulOtherDisplayMisc);
    printf ("%s%04x:  ULONG ulDDISlot1Config%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulDDISlot1Config)-start), FILL(21), d->ulDDISlot1Config, d->ulDDISlot1Config);
    printf ("%s%04x:  ULONG ulDDISlot2Config%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulDDISlot2Config)-start), FILL(21), d->ulDDISlot2Config, d->ulDDISlot2Config);
    printf ("%s%04x:  UCHAR ucMemoryType%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucMemoryType)-start), FILL(17), d->ucMemoryType, d->ucMemoryType);
    printf ("%s%04x:  UCHAR ucUMAChannelNumber%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucUMAChannelNumber)-start), FILL(23), d->ucUMAChannelNumber, d->ucUMAChannelNumber);
    printf ("%s%04x:  UCHAR ucDockingPinBit%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucDockingPinBit)-start), FILL(20), d->ucDockingPinBit, d->ucDockingPinBit);
    printf ("%s%04x:  UCHAR ucDockingPinPolarity%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucDockingPinPolarity)-start), FILL(25), d->ucDockingPinPolarity, d->ucDockingPinPolarity);
    printf ("%s%04x:  ULONG ulDockingPinCFGInfo%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulDockingPinCFGInfo)-start), FILL(24), d->ulDockingPinCFGInfo, d->ulDockingPinCFGInfo);
    printf ("%s%04x:  ULONG ulCPUCapInfo%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulCPUCapInfo)-start), FILL(17), d->ulCPUCapInfo, d->ulCPUCapInfo);
    printf ("%s%04x:  USHORT usNumberOfCyclesInPeriod%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usNumberOfCyclesInPeriod)-start), FILL(30), d->usNumberOfCyclesInPeriod, d->usNumberOfCyclesInPeriod);
    printf ("%s%04x:  USHORT usMaxNBVoltage%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usMaxNBVoltage)-start), FILL(20), d->usMaxNBVoltage, d->usMaxNBVoltage);
    printf ("%s%04x:  USHORT usMinNBVoltage%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usMinNBVoltage)-start), FILL(20), d->usMinNBVoltage, d->usMinNBVoltage);
    printf ("%s%04x:  USHORT usBootUpNBVoltage%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usBootUpNBVoltage)-start), FILL(23), d->usBootUpNBVoltage, d->usBootUpNBVoltage);
    printf ("%s%04x:  ULONG ulHTLinkFreq%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulHTLinkFreq)-start), FILL(17), d->ulHTLinkFreq, d->ulHTLinkFreq);
    printf ("%s%04x:  USHORT usMinHTLinkWidth%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usMinHTLinkWidth)-start), FILL(22), d->usMinHTLinkWidth, d->usMinHTLinkWidth);
    printf ("%s%04x:  USHORT usMaxHTLinkWidth%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usMaxHTLinkWidth)-start), FILL(22), d->usMaxHTLinkWidth, d->usMaxHTLinkWidth);
    printf ("%s%04x:  USHORT usUMASyncStartDelay%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usUMASyncStartDelay)-start), FILL(25), d->usUMASyncStartDelay, d->usUMASyncStartDelay);
    printf ("%s%04x:  USHORT usUMADataReturnTime%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usUMADataReturnTime)-start), FILL(25), d->usUMADataReturnTime, d->usUMADataReturnTime);
    printf ("%s%04x:  USHORT usLinkStatusZeroTime%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usLinkStatusZeroTime)-start), FILL(26), d->usLinkStatusZeroTime, d->usLinkStatusZeroTime);
    printf ("%s%04x:  USHORT usDACEfuse%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usDACEfuse)-start), FILL(16), d->usDACEfuse, d->usDACEfuse);
    printf ("%s%04x:  ULONG ulHighVoltageHTLinkFreq%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulHighVoltageHTLinkFreq)-start), FILL(28), d->ulHighVoltageHTLinkFreq, d->ulHighVoltageHTLinkFreq);
    printf ("%s%04x:  ULONG ulLowVoltageHTLinkFreq%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulLowVoltageHTLinkFreq)-start), FILL(27), d->ulLowVoltageHTLinkFreq, d->ulLowVoltageHTLinkFreq);
    printf ("%s%04x:  USHORT usMaxUpStreamHTLinkWidth%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usMaxUpStreamHTLinkWidth)-start), FILL(30), d->usMaxUpStreamHTLinkWidth, d->usMaxUpStreamHTLinkWidth);
    printf ("%s%04x:  USHORT usMaxDownStreamHTLinkWidth%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usMaxDownStreamHTLinkWidth)-start), FILL(32), d->usMaxDownStreamHTLinkWidth, d->usMaxDownStreamHTLinkWidth);
    printf ("%s%04x:  USHORT usMinUpStreamHTLinkWidth%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usMinUpStreamHTLinkWidth)-start), FILL(30), d->usMinUpStreamHTLinkWidth, d->usMinUpStreamHTLinkWidth);
    printf ("%s%04x:  USHORT usMinDownStreamHTLinkWidth%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usMinDownStreamHTLinkWidth)-start), FILL(32), d->usMinDownStreamHTLinkWidth, d->usMinDownStreamHTLinkWidth);
    printf ("%s%04x:  USHORT usFirmwareVersion%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usFirmwareVersion)-start), FILL(23), d->usFirmwareVersion, d->usFirmwareVersion);
    printf ("%s%04x:  USHORT usFullT0Time%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usFullT0Time)-start), FILL(18), d->usFullT0Time, d->usFullT0Time);
    for (i = 0; i < 96; i++) {
      printf ("%s%04x:  ULONG ulReserved3%s [%d] = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulReserved3[i])-start), FILL(20+(i>9)), i, d->ulReserved3[i], d->ulReserved3[i]); }
  }
  return sizeof (ATOM_INTEGRATED_SYSTEM_INFO_V2);
}
int ATOM_INTEGRATED_SYSTEM_INFO_V5_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_INTEGRATED_SYSTEM_INFO_V5 *d = (ATOM_INTEGRATED_SYSTEM_INFO_V5 *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ATOM_COMMON_TABLE_HEADER sHeader%s :\n", IND(indent), (int)(((uint8_t*)&d->sHeader)-start), FILL(31)); ATOM_COMMON_TABLE_HEADER_dumper (start, (uint8_t*) &d->sHeader, indent+1);
    printf ("%s%04x:  ULONG ulBootUpEngineClock%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulBootUpEngineClock)-start), FILL(24), d->ulBootUpEngineClock, d->ulBootUpEngineClock);
    printf ("%s%04x:  ULONG ulDentistVCOFreq%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulDentistVCOFreq)-start), FILL(21), d->ulDentistVCOFreq, d->ulDentistVCOFreq);
    printf ("%s%04x:  ULONG ulLClockFreq%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulLClockFreq)-start), FILL(17), d->ulLClockFreq, d->ulLClockFreq);
    printf ("%s%04x:  ULONG ulBootUpUMAClock%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulBootUpUMAClock)-start), FILL(21), d->ulBootUpUMAClock, d->ulBootUpUMAClock);
    for (i = 0; i < 8; i++) {
      printf ("%s%04x:  ULONG ulReserved1%s [%d] = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulReserved1[i])-start), FILL(20+(i>9)), i, d->ulReserved1[i], d->ulReserved1[i]); }
    printf ("%s%04x:  ULONG ulBootUpReqDisplayVector%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulBootUpReqDisplayVector)-start), FILL(29), d->ulBootUpReqDisplayVector, d->ulBootUpReqDisplayVector);
    printf ("%s%04x:  ULONG ulOtherDisplayMisc%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulOtherDisplayMisc)-start), FILL(23), d->ulOtherDisplayMisc, d->ulOtherDisplayMisc);
    for (i = 0; i < 4; i++) {
      printf ("%s%04x:  ULONG ulReserved2%s [%d] = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulReserved2[i])-start), FILL(20+(i>9)), i, d->ulReserved2[i], d->ulReserved2[i]); }
    printf ("%s%04x:  ULONG ulSystemConfig%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulSystemConfig)-start), FILL(19), d->ulSystemConfig, d->ulSystemConfig);
    printf ("%s%04x:  ULONG ulCPUCapInfo%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulCPUCapInfo)-start), FILL(17), d->ulCPUCapInfo, d->ulCPUCapInfo);
    printf ("%s%04x:  USHORT usMaxNBVoltage%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usMaxNBVoltage)-start), FILL(20), d->usMaxNBVoltage, d->usMaxNBVoltage);
    printf ("%s%04x:  USHORT usMinNBVoltage%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usMinNBVoltage)-start), FILL(20), d->usMinNBVoltage, d->usMinNBVoltage);
    printf ("%s%04x:  USHORT usBootUpNBVoltage%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usBootUpNBVoltage)-start), FILL(23), d->usBootUpNBVoltage, d->usBootUpNBVoltage);
    printf ("%s%04x:  UCHAR ucHtcTmpLmt%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucHtcTmpLmt)-start), FILL(16), d->ucHtcTmpLmt, d->ucHtcTmpLmt);
    printf ("%s%04x:  UCHAR ucTjOffset%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucTjOffset)-start), FILL(15), d->ucTjOffset, d->ucTjOffset);
    for (i = 0; i < 4; i++) {
      printf ("%s%04x:  ULONG ulReserved3%s [%d] = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulReserved3[i])-start), FILL(20+(i>9)), i, d->ulReserved3[i], d->ulReserved3[i]); }
    printf ("%s%04x:  ULONG ulDDISlot1Config%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulDDISlot1Config)-start), FILL(21), d->ulDDISlot1Config, d->ulDDISlot1Config);
    printf ("%s%04x:  ULONG ulDDISlot2Config%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulDDISlot2Config)-start), FILL(21), d->ulDDISlot2Config, d->ulDDISlot2Config);
    printf ("%s%04x:  ULONG ulDDISlot3Config%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulDDISlot3Config)-start), FILL(21), d->ulDDISlot3Config, d->ulDDISlot3Config);
    printf ("%s%04x:  ULONG ulDDISlot4Config%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulDDISlot4Config)-start), FILL(21), d->ulDDISlot4Config, d->ulDDISlot4Config);
    for (i = 0; i < 4; i++) {
      printf ("%s%04x:  ULONG ulReserved4%s [%d] = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulReserved4[i])-start), FILL(20+(i>9)), i, d->ulReserved4[i], d->ulReserved4[i]); }
    printf ("%s%04x:  UCHAR ucMemoryType%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucMemoryType)-start), FILL(17), d->ucMemoryType, d->ucMemoryType);
    printf ("%s%04x:  UCHAR ucUMAChannelNumber%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucUMAChannelNumber)-start), FILL(23), d->ucUMAChannelNumber, d->ucUMAChannelNumber);
    printf ("%s%04x:  USHORT usReserved%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usReserved)-start), FILL(16), d->usReserved, d->usReserved);
    for (i = 0; i < 4; i++) {
      printf ("%s%04x:  ULONG ulReserved5%s [%d] = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulReserved5[i])-start), FILL(20+(i>9)), i, d->ulReserved5[i], d->ulReserved5[i]); }
    for (i = 0; i < 10; i++) {
      printf ("%s%04x:  ULONG ulCSR_M3_ARB_CNTL_DEFAULT%s [%d] = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulCSR_M3_ARB_CNTL_DEFAULT[i])-start), FILL(34+(i>9)), i, d->ulCSR_M3_ARB_CNTL_DEFAULT[i], d->ulCSR_M3_ARB_CNTL_DEFAULT[i]); }
    for (i = 0; i < 10; i++) {
      printf ("%s%04x:  ULONG ulCSR_M3_ARB_CNTL_UVD%s [%d] = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulCSR_M3_ARB_CNTL_UVD[i])-start), FILL(30+(i>9)), i, d->ulCSR_M3_ARB_CNTL_UVD[i], d->ulCSR_M3_ARB_CNTL_UVD[i]); }
    for (i = 0; i < 10; i++) {
      printf ("%s%04x:  ULONG ulCSR_M3_ARB_CNTL_FS3D%s [%d] = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulCSR_M3_ARB_CNTL_FS3D[i])-start), FILL(31+(i>9)), i, d->ulCSR_M3_ARB_CNTL_FS3D[i], d->ulCSR_M3_ARB_CNTL_FS3D[i]); }
    for (i = 0; i < 61; i++) {
      printf ("%s%04x:  ULONG ulReserved6%s [%d] = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulReserved6[i])-start), FILL(20+(i>9)), i, d->ulReserved6[i], d->ulReserved6[i]); }
  }
  return sizeof (ATOM_INTEGRATED_SYSTEM_INFO_V5);
}
int ATOM_I2C_ID_CONFIG_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_I2C_ID_CONFIG *d = (ATOM_I2C_ID_CONFIG *) data;
  int i;
  if (d) {
    printf ("%s       UCHAR bfI2C_LineMux:4%s = 0x%02x       (%d)\n", IND(indent), FILL(20), d->bfI2C_LineMux, d->bfI2C_LineMux);
    printf ("%s       UCHAR bfHW_EngineID:3%s = 0x%02x       (%d)\n", IND(indent), FILL(20), d->bfHW_EngineID, d->bfHW_EngineID);
    printf ("%s       UCHAR bfHW_Capable:1%s = 0x%02x       (%d)\n", IND(indent), FILL(19), d->bfHW_Capable, d->bfHW_Capable);
  }
  return sizeof (ATOM_I2C_ID_CONFIG);
}
int ATOM_I2C_ID_CONFIG_ACCESS_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_I2C_ID_CONFIG_ACCESS *d = (ATOM_I2C_ID_CONFIG_ACCESS *) data;
  int i;
  if (d) {
    printf ("%s%04x:  (union) ATOM_I2C_ID_CONFIG sbfAccess%s :\n", IND(indent), (int)(((uint8_t*)&d->sbfAccess)-start), FILL(35)); ATOM_I2C_ID_CONFIG_dumper (start, (uint8_t*) &d->sbfAccess, indent+1);
    printf ("%s%04x:  (union) UCHAR ucAccess%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucAccess)-start), FILL(21), d->ucAccess, d->ucAccess);
  }
  return sizeof (ATOM_I2C_ID_CONFIG_ACCESS);
}
int ATOM_GPIO_I2C_ASSIGMENT_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_GPIO_I2C_ASSIGMENT *d = (ATOM_GPIO_I2C_ASSIGMENT *) data;
  int i;
  if (d) {
    printf ("%s%04x:  USHORT usClkMaskRegisterIndex%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usClkMaskRegisterIndex)-start), FILL(28), d->usClkMaskRegisterIndex, d->usClkMaskRegisterIndex);
    printf ("%s%04x:  USHORT usClkEnRegisterIndex%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usClkEnRegisterIndex)-start), FILL(26), d->usClkEnRegisterIndex, d->usClkEnRegisterIndex);
    printf ("%s%04x:  USHORT usClkY_RegisterIndex%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usClkY_RegisterIndex)-start), FILL(26), d->usClkY_RegisterIndex, d->usClkY_RegisterIndex);
    printf ("%s%04x:  USHORT usClkA_RegisterIndex%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usClkA_RegisterIndex)-start), FILL(26), d->usClkA_RegisterIndex, d->usClkA_RegisterIndex);
    printf ("%s%04x:  USHORT usDataMaskRegisterIndex%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usDataMaskRegisterIndex)-start), FILL(29), d->usDataMaskRegisterIndex, d->usDataMaskRegisterIndex);
    printf ("%s%04x:  USHORT usDataEnRegisterIndex%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usDataEnRegisterIndex)-start), FILL(27), d->usDataEnRegisterIndex, d->usDataEnRegisterIndex);
    printf ("%s%04x:  USHORT usDataY_RegisterIndex%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usDataY_RegisterIndex)-start), FILL(27), d->usDataY_RegisterIndex, d->usDataY_RegisterIndex);
    printf ("%s%04x:  USHORT usDataA_RegisterIndex%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usDataA_RegisterIndex)-start), FILL(27), d->usDataA_RegisterIndex, d->usDataA_RegisterIndex);
    printf ("%s%04x:  ATOM_I2C_ID_CONFIG_ACCESS sucI2cId%s :\n", IND(indent), (int)(((uint8_t*)&d->sucI2cId)-start), FILL(33)); ATOM_I2C_ID_CONFIG_ACCESS_dumper (start, (uint8_t*) &d->sucI2cId, indent+1);
    printf ("%s%04x:  UCHAR ucClkMaskShift%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucClkMaskShift)-start), FILL(19), d->ucClkMaskShift, d->ucClkMaskShift);
    printf ("%s%04x:  UCHAR ucClkEnShift%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucClkEnShift)-start), FILL(17), d->ucClkEnShift, d->ucClkEnShift);
    printf ("%s%04x:  UCHAR ucClkY_Shift%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucClkY_Shift)-start), FILL(17), d->ucClkY_Shift, d->ucClkY_Shift);
    printf ("%s%04x:  UCHAR ucClkA_Shift%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucClkA_Shift)-start), FILL(17), d->ucClkA_Shift, d->ucClkA_Shift);
    printf ("%s%04x:  UCHAR ucDataMaskShift%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucDataMaskShift)-start), FILL(20), d->ucDataMaskShift, d->ucDataMaskShift);
    printf ("%s%04x:  UCHAR ucDataEnShift%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucDataEnShift)-start), FILL(18), d->ucDataEnShift, d->ucDataEnShift);
    printf ("%s%04x:  UCHAR ucDataY_Shift%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucDataY_Shift)-start), FILL(18), d->ucDataY_Shift, d->ucDataY_Shift);
    printf ("%s%04x:  UCHAR ucDataA_Shift%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucDataA_Shift)-start), FILL(18), d->ucDataA_Shift, d->ucDataA_Shift);
    printf ("%s%04x:  UCHAR ucReserved1%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucReserved1)-start), FILL(16), d->ucReserved1, d->ucReserved1);
    printf ("%s%04x:  UCHAR ucReserved2%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucReserved2)-start), FILL(16), d->ucReserved2, d->ucReserved2);
  }
  return sizeof (ATOM_GPIO_I2C_ASSIGMENT);
}
int ATOM_GPIO_I2C_INFO_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_GPIO_I2C_INFO *d = (ATOM_GPIO_I2C_INFO *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ATOM_COMMON_TABLE_HEADER sHeader%s :\n", IND(indent), (int)(((uint8_t*)&d->sHeader)-start), FILL(31)); ATOM_COMMON_TABLE_HEADER_dumper (start, (uint8_t*) &d->sHeader, indent+1);
    for (i = 0; i < COUNT_ALL (ATOM_GPIO_I2C_INFO, ATOM_GPIO_I2C_ASSIGMENT); i++) {
      printf ("%s%04x:  ATOM_GPIO_I2C_ASSIGMENT asGPIO_Info%s [%d] :\n", IND(indent), (int)(((uint8_t*)&d->asGPIO_Info[i])-start), FILL(38+(i>9)), i); ATOM_GPIO_I2C_ASSIGMENT_dumper (start, (uint8_t*) &d->asGPIO_Info[i], indent+1); }
  }
  return RETURN_ALL (ATOM_GPIO_I2C_INFO, ATOM_GPIO_I2C_ASSIGMENT);
}
int ATOM_MODE_MISC_INFO_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_MODE_MISC_INFO *d = (ATOM_MODE_MISC_INFO *) data;
  int i;
  if (d) {
    printf ("%s       USHORT HorizontalCutOff:1%s = 0x%04x     (%d)\n", IND(indent), FILL(24), d->HorizontalCutOff, d->HorizontalCutOff);
    printf ("%s       USHORT HSyncPolarity:1%s = 0x%04x     (%d)\n", IND(indent), FILL(21), d->HSyncPolarity, d->HSyncPolarity);
    printf ("%s       USHORT VSyncPolarity:1%s = 0x%04x     (%d)\n", IND(indent), FILL(21), d->VSyncPolarity, d->VSyncPolarity);
    printf ("%s       USHORT VerticalCutOff:1%s = 0x%04x     (%d)\n", IND(indent), FILL(22), d->VerticalCutOff, d->VerticalCutOff);
    printf ("%s       USHORT H_ReplicationBy2:1%s = 0x%04x     (%d)\n", IND(indent), FILL(24), d->H_ReplicationBy2, d->H_ReplicationBy2);
    printf ("%s       USHORT V_ReplicationBy2:1%s = 0x%04x     (%d)\n", IND(indent), FILL(24), d->V_ReplicationBy2, d->V_ReplicationBy2);
    printf ("%s       USHORT CompositeSync:1%s = 0x%04x     (%d)\n", IND(indent), FILL(21), d->CompositeSync, d->CompositeSync);
    printf ("%s       USHORT Interlace:1%s = 0x%04x     (%d)\n", IND(indent), FILL(17), d->Interlace, d->Interlace);
    printf ("%s       USHORT DoubleClock:1%s = 0x%04x     (%d)\n", IND(indent), FILL(19), d->DoubleClock, d->DoubleClock);
    printf ("%s       USHORT RGB888:1%s = 0x%04x     (%d)\n", IND(indent), FILL(14), d->RGB888, d->RGB888);
    printf ("%s       USHORT Reserved:6%s = 0x%04x     (%d)\n", IND(indent), FILL(16), d->Reserved, d->Reserved);
  }
  return sizeof (ATOM_MODE_MISC_INFO);
}
int ATOM_MODE_MISC_INFO_ACCESS_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_MODE_MISC_INFO_ACCESS *d = (ATOM_MODE_MISC_INFO_ACCESS *) data;
  int i;
  if (d) {
    printf ("%s%04x:  (union) ATOM_MODE_MISC_INFO sbfAccess%s :\n", IND(indent), (int)(((uint8_t*)&d->sbfAccess)-start), FILL(36)); ATOM_MODE_MISC_INFO_dumper (start, (uint8_t*) &d->sbfAccess, indent+1);
    printf ("%s%04x:  (union) USHORT usAccess%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usAccess)-start), FILL(22), d->usAccess, d->usAccess);
  }
  return sizeof (ATOM_MODE_MISC_INFO_ACCESS);
}
int SET_CRTC_USING_DTD_TIMING_PARAMETERS_dumper (uint8_t *start, uint8_t *data, int indent) {
  SET_CRTC_USING_DTD_TIMING_PARAMETERS *d = (SET_CRTC_USING_DTD_TIMING_PARAMETERS *) data;
  int i;
  if (d) {
    printf ("%s%04x:  USHORT usH_Size%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usH_Size)-start), FILL(14), d->usH_Size, d->usH_Size);
    printf ("%s%04x:  USHORT usH_Blanking_Time%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usH_Blanking_Time)-start), FILL(23), d->usH_Blanking_Time, d->usH_Blanking_Time);
    printf ("%s%04x:  USHORT usV_Size%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usV_Size)-start), FILL(14), d->usV_Size, d->usV_Size);
    printf ("%s%04x:  USHORT usV_Blanking_Time%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usV_Blanking_Time)-start), FILL(23), d->usV_Blanking_Time, d->usV_Blanking_Time);
    printf ("%s%04x:  USHORT usH_SyncOffset%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usH_SyncOffset)-start), FILL(20), d->usH_SyncOffset, d->usH_SyncOffset);
    printf ("%s%04x:  USHORT usH_SyncWidth%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usH_SyncWidth)-start), FILL(19), d->usH_SyncWidth, d->usH_SyncWidth);
    printf ("%s%04x:  USHORT usV_SyncOffset%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usV_SyncOffset)-start), FILL(20), d->usV_SyncOffset, d->usV_SyncOffset);
    printf ("%s%04x:  USHORT usV_SyncWidth%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usV_SyncWidth)-start), FILL(19), d->usV_SyncWidth, d->usV_SyncWidth);
    printf ("%s%04x:  ATOM_MODE_MISC_INFO_ACCESS susModeMiscInfo%s :\n", IND(indent), (int)(((uint8_t*)&d->susModeMiscInfo)-start), FILL(41)); ATOM_MODE_MISC_INFO_ACCESS_dumper (start, (uint8_t*) &d->susModeMiscInfo, indent+1);
    printf ("%s%04x:  UCHAR ucH_Border%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucH_Border)-start), FILL(15), d->ucH_Border, d->ucH_Border);
    printf ("%s%04x:  UCHAR ucV_Border%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucV_Border)-start), FILL(15), d->ucV_Border, d->ucV_Border);
    printf ("%s%04x:  UCHAR ucCRTC%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucCRTC)-start), FILL(11), d->ucCRTC, d->ucCRTC);
    for (i = 0; i < 3; i++) {
      printf ("%s%04x:  UCHAR ucPadding%s [%d] = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucPadding[i])-start), FILL(18+(i>9)), i, d->ucPadding[i], d->ucPadding[i]); }
  }
  return sizeof (SET_CRTC_USING_DTD_TIMING_PARAMETERS);
}
int SET_CRTC_TIMING_PARAMETERS_dumper (uint8_t *start, uint8_t *data, int indent) {
  SET_CRTC_TIMING_PARAMETERS *d = (SET_CRTC_TIMING_PARAMETERS *) data;
  int i;
  if (d) {
    printf ("%s%04x:  USHORT usH_Total%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usH_Total)-start), FILL(15), d->usH_Total, d->usH_Total);
    printf ("%s%04x:  USHORT usH_Disp%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usH_Disp)-start), FILL(14), d->usH_Disp, d->usH_Disp);
    printf ("%s%04x:  USHORT usH_SyncStart%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usH_SyncStart)-start), FILL(19), d->usH_SyncStart, d->usH_SyncStart);
    printf ("%s%04x:  USHORT usH_SyncWidth%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usH_SyncWidth)-start), FILL(19), d->usH_SyncWidth, d->usH_SyncWidth);
    printf ("%s%04x:  USHORT usV_Total%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usV_Total)-start), FILL(15), d->usV_Total, d->usV_Total);
    printf ("%s%04x:  USHORT usV_Disp%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usV_Disp)-start), FILL(14), d->usV_Disp, d->usV_Disp);
    printf ("%s%04x:  USHORT usV_SyncStart%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usV_SyncStart)-start), FILL(19), d->usV_SyncStart, d->usV_SyncStart);
    printf ("%s%04x:  USHORT usV_SyncWidth%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usV_SyncWidth)-start), FILL(19), d->usV_SyncWidth, d->usV_SyncWidth);
    printf ("%s%04x:  ATOM_MODE_MISC_INFO_ACCESS susModeMiscInfo%s :\n", IND(indent), (int)(((uint8_t*)&d->susModeMiscInfo)-start), FILL(41)); ATOM_MODE_MISC_INFO_ACCESS_dumper (start, (uint8_t*) &d->susModeMiscInfo, indent+1);
    printf ("%s%04x:  UCHAR ucCRTC%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucCRTC)-start), FILL(11), d->ucCRTC, d->ucCRTC);
    printf ("%s%04x:  UCHAR ucOverscanRight%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucOverscanRight)-start), FILL(20), d->ucOverscanRight, d->ucOverscanRight);
    printf ("%s%04x:  UCHAR ucOverscanLeft%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucOverscanLeft)-start), FILL(19), d->ucOverscanLeft, d->ucOverscanLeft);
    printf ("%s%04x:  UCHAR ucOverscanBottom%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucOverscanBottom)-start), FILL(21), d->ucOverscanBottom, d->ucOverscanBottom);
    printf ("%s%04x:  UCHAR ucOverscanTop%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucOverscanTop)-start), FILL(18), d->ucOverscanTop, d->ucOverscanTop);
    printf ("%s%04x:  UCHAR ucReserved%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucReserved)-start), FILL(15), d->ucReserved, d->ucReserved);
  }
  return sizeof (SET_CRTC_TIMING_PARAMETERS);
}
int ATOM_MODE_TIMING_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_MODE_TIMING *d = (ATOM_MODE_TIMING *) data;
  int i;
  if (d) {
    printf ("%s%04x:  USHORT usCRTC_H_Total%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usCRTC_H_Total)-start), FILL(20), d->usCRTC_H_Total, d->usCRTC_H_Total);
    printf ("%s%04x:  USHORT usCRTC_H_Disp%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usCRTC_H_Disp)-start), FILL(19), d->usCRTC_H_Disp, d->usCRTC_H_Disp);
    printf ("%s%04x:  USHORT usCRTC_H_SyncStart%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usCRTC_H_SyncStart)-start), FILL(24), d->usCRTC_H_SyncStart, d->usCRTC_H_SyncStart);
    printf ("%s%04x:  USHORT usCRTC_H_SyncWidth%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usCRTC_H_SyncWidth)-start), FILL(24), d->usCRTC_H_SyncWidth, d->usCRTC_H_SyncWidth);
    printf ("%s%04x:  USHORT usCRTC_V_Total%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usCRTC_V_Total)-start), FILL(20), d->usCRTC_V_Total, d->usCRTC_V_Total);
    printf ("%s%04x:  USHORT usCRTC_V_Disp%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usCRTC_V_Disp)-start), FILL(19), d->usCRTC_V_Disp, d->usCRTC_V_Disp);
    printf ("%s%04x:  USHORT usCRTC_V_SyncStart%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usCRTC_V_SyncStart)-start), FILL(24), d->usCRTC_V_SyncStart, d->usCRTC_V_SyncStart);
    printf ("%s%04x:  USHORT usCRTC_V_SyncWidth%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usCRTC_V_SyncWidth)-start), FILL(24), d->usCRTC_V_SyncWidth, d->usCRTC_V_SyncWidth);
    printf ("%s%04x:  USHORT usPixelClock%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usPixelClock)-start), FILL(18), d->usPixelClock, d->usPixelClock);
    printf ("%s%04x:  ATOM_MODE_MISC_INFO_ACCESS susModeMiscInfo%s :\n", IND(indent), (int)(((uint8_t*)&d->susModeMiscInfo)-start), FILL(41)); ATOM_MODE_MISC_INFO_ACCESS_dumper (start, (uint8_t*) &d->susModeMiscInfo, indent+1);
    printf ("%s%04x:  USHORT usCRTC_OverscanRight%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usCRTC_OverscanRight)-start), FILL(26), d->usCRTC_OverscanRight, d->usCRTC_OverscanRight);
    printf ("%s%04x:  USHORT usCRTC_OverscanLeft%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usCRTC_OverscanLeft)-start), FILL(25), d->usCRTC_OverscanLeft, d->usCRTC_OverscanLeft);
    printf ("%s%04x:  USHORT usCRTC_OverscanBottom%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usCRTC_OverscanBottom)-start), FILL(27), d->usCRTC_OverscanBottom, d->usCRTC_OverscanBottom);
    printf ("%s%04x:  USHORT usCRTC_OverscanTop%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usCRTC_OverscanTop)-start), FILL(24), d->usCRTC_OverscanTop, d->usCRTC_OverscanTop);
    printf ("%s%04x:  USHORT usReserve%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usReserve)-start), FILL(15), d->usReserve, d->usReserve);
    printf ("%s%04x:  UCHAR ucInternalModeNumber%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucInternalModeNumber)-start), FILL(25), d->ucInternalModeNumber, d->ucInternalModeNumber);
    printf ("%s%04x:  UCHAR ucRefreshRate%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucRefreshRate)-start), FILL(18), d->ucRefreshRate, d->ucRefreshRate);
  }
  return sizeof (ATOM_MODE_TIMING);
}
int ATOM_DTD_FORMAT_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_DTD_FORMAT *d = (ATOM_DTD_FORMAT *) data;
  int i;
  if (d) {
    printf ("%s%04x:  USHORT usPixClk%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usPixClk)-start), FILL(14), d->usPixClk, d->usPixClk);
    printf ("%s%04x:  USHORT usHActive%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usHActive)-start), FILL(15), d->usHActive, d->usHActive);
    printf ("%s%04x:  USHORT usHBlanking_Time%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usHBlanking_Time)-start), FILL(22), d->usHBlanking_Time, d->usHBlanking_Time);
    printf ("%s%04x:  USHORT usVActive%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usVActive)-start), FILL(15), d->usVActive, d->usVActive);
    printf ("%s%04x:  USHORT usVBlanking_Time%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usVBlanking_Time)-start), FILL(22), d->usVBlanking_Time, d->usVBlanking_Time);
    printf ("%s%04x:  USHORT usHSyncOffset%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usHSyncOffset)-start), FILL(19), d->usHSyncOffset, d->usHSyncOffset);
    printf ("%s%04x:  USHORT usHSyncWidth%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usHSyncWidth)-start), FILL(18), d->usHSyncWidth, d->usHSyncWidth);
    printf ("%s%04x:  USHORT usVSyncOffset%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usVSyncOffset)-start), FILL(19), d->usVSyncOffset, d->usVSyncOffset);
    printf ("%s%04x:  USHORT usVSyncWidth%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usVSyncWidth)-start), FILL(18), d->usVSyncWidth, d->usVSyncWidth);
    printf ("%s%04x:  USHORT usImageHSize%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usImageHSize)-start), FILL(18), d->usImageHSize, d->usImageHSize);
    printf ("%s%04x:  USHORT usImageVSize%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usImageVSize)-start), FILL(18), d->usImageVSize, d->usImageVSize);
    printf ("%s%04x:  UCHAR ucHBorder%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucHBorder)-start), FILL(14), d->ucHBorder, d->ucHBorder);
    printf ("%s%04x:  UCHAR ucVBorder%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucVBorder)-start), FILL(14), d->ucVBorder, d->ucVBorder);
    printf ("%s%04x:  ATOM_MODE_MISC_INFO_ACCESS susModeMiscInfo%s :\n", IND(indent), (int)(((uint8_t*)&d->susModeMiscInfo)-start), FILL(41)); ATOM_MODE_MISC_INFO_ACCESS_dumper (start, (uint8_t*) &d->susModeMiscInfo, indent+1);
    printf ("%s%04x:  UCHAR ucInternalModeNumber%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucInternalModeNumber)-start), FILL(25), d->ucInternalModeNumber, d->ucInternalModeNumber);
    printf ("%s%04x:  UCHAR ucRefreshRate%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucRefreshRate)-start), FILL(18), d->ucRefreshRate, d->ucRefreshRate);
  }
  return sizeof (ATOM_DTD_FORMAT);
}
int ATOM_LVDS_INFO_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_LVDS_INFO *d = (ATOM_LVDS_INFO *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ATOM_COMMON_TABLE_HEADER sHeader%s :\n", IND(indent), (int)(((uint8_t*)&d->sHeader)-start), FILL(31)); ATOM_COMMON_TABLE_HEADER_dumper (start, (uint8_t*) &d->sHeader, indent+1);
    printf ("%s%04x:  ATOM_DTD_FORMAT sLCDTiming%s :\n", IND(indent), (int)(((uint8_t*)&d->sLCDTiming)-start), FILL(25)); ATOM_DTD_FORMAT_dumper (start, (uint8_t*) &d->sLCDTiming, indent+1);
    printf ("%s%04x:  USHORT usModePatchTableOffset%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usModePatchTableOffset)-start), FILL(28), d->usModePatchTableOffset, d->usModePatchTableOffset);
    printf ("%s%04x:  USHORT usSupportedRefreshRate%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usSupportedRefreshRate)-start), FILL(28), d->usSupportedRefreshRate, d->usSupportedRefreshRate);
    printf ("%s%04x:  USHORT usOffDelayInMs%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usOffDelayInMs)-start), FILL(20), d->usOffDelayInMs, d->usOffDelayInMs);
    printf ("%s%04x:  UCHAR ucPowerSequenceDigOntoDEin10Ms%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucPowerSequenceDigOntoDEin10Ms)-start), FILL(35), d->ucPowerSequenceDigOntoDEin10Ms, d->ucPowerSequenceDigOntoDEin10Ms);
    printf ("%s%04x:  UCHAR ucPowerSequenceDEtoBLOnin10Ms%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucPowerSequenceDEtoBLOnin10Ms)-start), FILL(34), d->ucPowerSequenceDEtoBLOnin10Ms, d->ucPowerSequenceDEtoBLOnin10Ms);
    printf ("%s%04x:  UCHAR ucLVDS_Misc%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucLVDS_Misc)-start), FILL(16), d->ucLVDS_Misc, d->ucLVDS_Misc);
    printf ("%s%04x:  UCHAR ucPanelDefaultRefreshRate%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucPanelDefaultRefreshRate)-start), FILL(30), d->ucPanelDefaultRefreshRate, d->ucPanelDefaultRefreshRate);
    printf ("%s%04x:  UCHAR ucPanelIdentification%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucPanelIdentification)-start), FILL(26), d->ucPanelIdentification, d->ucPanelIdentification);
    printf ("%s%04x:  UCHAR ucSS_Id%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucSS_Id)-start), FILL(12), d->ucSS_Id, d->ucSS_Id);
  }
  return sizeof (ATOM_LVDS_INFO);
}
int ATOM_LVDS_INFO_V12_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_LVDS_INFO_V12 *d = (ATOM_LVDS_INFO_V12 *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ATOM_COMMON_TABLE_HEADER sHeader%s :\n", IND(indent), (int)(((uint8_t*)&d->sHeader)-start), FILL(31)); ATOM_COMMON_TABLE_HEADER_dumper (start, (uint8_t*) &d->sHeader, indent+1);
    printf ("%s%04x:  ATOM_DTD_FORMAT sLCDTiming%s :\n", IND(indent), (int)(((uint8_t*)&d->sLCDTiming)-start), FILL(25)); ATOM_DTD_FORMAT_dumper (start, (uint8_t*) &d->sLCDTiming, indent+1);
    printf ("%s%04x:  USHORT usExtInfoTableOffset%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usExtInfoTableOffset)-start), FILL(26), d->usExtInfoTableOffset, d->usExtInfoTableOffset);
    printf ("%s%04x:  USHORT usSupportedRefreshRate%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usSupportedRefreshRate)-start), FILL(28), d->usSupportedRefreshRate, d->usSupportedRefreshRate);
    printf ("%s%04x:  USHORT usOffDelayInMs%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usOffDelayInMs)-start), FILL(20), d->usOffDelayInMs, d->usOffDelayInMs);
    printf ("%s%04x:  UCHAR ucPowerSequenceDigOntoDEin10Ms%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucPowerSequenceDigOntoDEin10Ms)-start), FILL(35), d->ucPowerSequenceDigOntoDEin10Ms, d->ucPowerSequenceDigOntoDEin10Ms);
    printf ("%s%04x:  UCHAR ucPowerSequenceDEtoBLOnin10Ms%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucPowerSequenceDEtoBLOnin10Ms)-start), FILL(34), d->ucPowerSequenceDEtoBLOnin10Ms, d->ucPowerSequenceDEtoBLOnin10Ms);
    printf ("%s%04x:  UCHAR ucLVDS_Misc%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucLVDS_Misc)-start), FILL(16), d->ucLVDS_Misc, d->ucLVDS_Misc);
    printf ("%s%04x:  UCHAR ucPanelDefaultRefreshRate%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucPanelDefaultRefreshRate)-start), FILL(30), d->ucPanelDefaultRefreshRate, d->ucPanelDefaultRefreshRate);
    printf ("%s%04x:  UCHAR ucPanelIdentification%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucPanelIdentification)-start), FILL(26), d->ucPanelIdentification, d->ucPanelIdentification);
    printf ("%s%04x:  UCHAR ucSS_Id%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucSS_Id)-start), FILL(12), d->ucSS_Id, d->ucSS_Id);
    printf ("%s%04x:  USHORT usLCDVenderID%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usLCDVenderID)-start), FILL(19), d->usLCDVenderID, d->usLCDVenderID);
    printf ("%s%04x:  USHORT usLCDProductID%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usLCDProductID)-start), FILL(20), d->usLCDProductID, d->usLCDProductID);
    printf ("%s%04x:  UCHAR ucLCDPanel_SpecialHandlingCap%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucLCDPanel_SpecialHandlingCap)-start), FILL(34), d->ucLCDPanel_SpecialHandlingCap, d->ucLCDPanel_SpecialHandlingCap);
    printf ("%s%04x:  UCHAR ucPanelInfoSize%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucPanelInfoSize)-start), FILL(20), d->ucPanelInfoSize, d->ucPanelInfoSize);
    for (i = 0; i < 2; i++) {
      printf ("%s%04x:  UCHAR ucReserved%s [%d] = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucReserved[i])-start), FILL(19+(i>9)), i, d->ucReserved[i], d->ucReserved[i]); }
  }
  return sizeof (ATOM_LVDS_INFO_V12);
}
int ATOM_LCD_INFO_V13_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_LCD_INFO_V13 *d = (ATOM_LCD_INFO_V13 *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ATOM_COMMON_TABLE_HEADER sHeader%s :\n", IND(indent), (int)(((uint8_t*)&d->sHeader)-start), FILL(31)); ATOM_COMMON_TABLE_HEADER_dumper (start, (uint8_t*) &d->sHeader, indent+1);
    printf ("%s%04x:  ATOM_DTD_FORMAT sLCDTiming%s :\n", IND(indent), (int)(((uint8_t*)&d->sLCDTiming)-start), FILL(25)); ATOM_DTD_FORMAT_dumper (start, (uint8_t*) &d->sLCDTiming, indent+1);
    printf ("%s%04x:  USHORT usExtInfoTableOffset%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usExtInfoTableOffset)-start), FILL(26), d->usExtInfoTableOffset, d->usExtInfoTableOffset);
    printf ("%s%04x:  USHORT usSupportedRefreshRate%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usSupportedRefreshRate)-start), FILL(28), d->usSupportedRefreshRate, d->usSupportedRefreshRate);
    printf ("%s%04x:  ULONG ulReserved0%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulReserved0)-start), FILL(16), d->ulReserved0, d->ulReserved0);
    printf ("%s%04x:  UCHAR ucLCD_Misc%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucLCD_Misc)-start), FILL(15), d->ucLCD_Misc, d->ucLCD_Misc);
    printf ("%s%04x:  UCHAR ucPanelDefaultRefreshRate%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucPanelDefaultRefreshRate)-start), FILL(30), d->ucPanelDefaultRefreshRate, d->ucPanelDefaultRefreshRate);
    printf ("%s%04x:  UCHAR ucPanelIdentification%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucPanelIdentification)-start), FILL(26), d->ucPanelIdentification, d->ucPanelIdentification);
    printf ("%s%04x:  UCHAR ucSS_Id%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucSS_Id)-start), FILL(12), d->ucSS_Id, d->ucSS_Id);
    printf ("%s%04x:  USHORT usLCDVenderID%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usLCDVenderID)-start), FILL(19), d->usLCDVenderID, d->usLCDVenderID);
    printf ("%s%04x:  USHORT usLCDProductID%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usLCDProductID)-start), FILL(20), d->usLCDProductID, d->usLCDProductID);
    printf ("%s%04x:  UCHAR ucLCDPanel_SpecialHandlingCap%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucLCDPanel_SpecialHandlingCap)-start), FILL(34), d->ucLCDPanel_SpecialHandlingCap, d->ucLCDPanel_SpecialHandlingCap);
    printf ("%s%04x:  UCHAR ucPanelInfoSize%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucPanelInfoSize)-start), FILL(20), d->ucPanelInfoSize, d->ucPanelInfoSize);
    printf ("%s%04x:  USHORT usBacklightPWM%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usBacklightPWM)-start), FILL(20), d->usBacklightPWM, d->usBacklightPWM);
    printf ("%s%04x:  UCHAR ucPowerSequenceDIGONtoDE_in4Ms%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucPowerSequenceDIGONtoDE_in4Ms)-start), FILL(35), d->ucPowerSequenceDIGONtoDE_in4Ms, d->ucPowerSequenceDIGONtoDE_in4Ms);
    printf ("%s%04x:  UCHAR ucPowerSequenceDEtoVARY_BL_in4Ms%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucPowerSequenceDEtoVARY_BL_in4Ms)-start), FILL(37), d->ucPowerSequenceDEtoVARY_BL_in4Ms, d->ucPowerSequenceDEtoVARY_BL_in4Ms);
    printf ("%s%04x:  UCHAR ucPowerSequenceDEtoDIGON_in4Ms%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucPowerSequenceDEtoDIGON_in4Ms)-start), FILL(35), d->ucPowerSequenceDEtoDIGON_in4Ms, d->ucPowerSequenceDEtoDIGON_in4Ms);
    printf ("%s%04x:  UCHAR ucPowerSequenceVARY_BLtoDE_in4Ms%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucPowerSequenceVARY_BLtoDE_in4Ms)-start), FILL(37), d->ucPowerSequenceVARY_BLtoDE_in4Ms, d->ucPowerSequenceVARY_BLtoDE_in4Ms);
    printf ("%s%04x:  UCHAR ucOffDelay_in4Ms%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucOffDelay_in4Ms)-start), FILL(21), d->ucOffDelay_in4Ms, d->ucOffDelay_in4Ms);
    printf ("%s%04x:  UCHAR ucPowerSequenceVARY_BLtoBLON_in4Ms%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucPowerSequenceVARY_BLtoBLON_in4Ms)-start), FILL(39), d->ucPowerSequenceVARY_BLtoBLON_in4Ms, d->ucPowerSequenceVARY_BLtoBLON_in4Ms);
    printf ("%s%04x:  UCHAR ucPowerSequenceBLONtoVARY_BL_in4Ms%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucPowerSequenceBLONtoVARY_BL_in4Ms)-start), FILL(39), d->ucPowerSequenceBLONtoVARY_BL_in4Ms, d->ucPowerSequenceBLONtoVARY_BL_in4Ms);
    printf ("%s%04x:  UCHAR ucReserved1%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucReserved1)-start), FILL(16), d->ucReserved1, d->ucReserved1);
    for (i = 0; i < 4; i++) {
      printf ("%s%04x:  ULONG ulReserved%s [%d] = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulReserved[i])-start), FILL(19+(i>9)), i, d->ulReserved[i], d->ulReserved[i]); }
  }
  return sizeof (ATOM_LCD_INFO_V13);
}
int ATOM_PATCH_RECORD_MODE_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_PATCH_RECORD_MODE *d = (ATOM_PATCH_RECORD_MODE *) data;
  int i;
  if (d) {
    printf ("%s%04x:  UCHAR ucRecordType%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucRecordType)-start), FILL(17), d->ucRecordType, d->ucRecordType);
    printf ("%s%04x:  USHORT usHDisp%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usHDisp)-start), FILL(13), d->usHDisp, d->usHDisp);
    printf ("%s%04x:  USHORT usVDisp%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usVDisp)-start), FILL(13), d->usVDisp, d->usVDisp);
  }
  return sizeof (ATOM_PATCH_RECORD_MODE);
}
int ATOM_LCD_RTS_RECORD_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_LCD_RTS_RECORD *d = (ATOM_LCD_RTS_RECORD *) data;
  int i;
  if (d) {
    printf ("%s%04x:  UCHAR ucRecordType%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucRecordType)-start), FILL(17), d->ucRecordType, d->ucRecordType);
    printf ("%s%04x:  UCHAR ucRTSValue%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucRTSValue)-start), FILL(15), d->ucRTSValue, d->ucRTSValue);
  }
  return sizeof (ATOM_LCD_RTS_RECORD);
}
int ATOM_LCD_MODE_CONTROL_CAP_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_LCD_MODE_CONTROL_CAP *d = (ATOM_LCD_MODE_CONTROL_CAP *) data;
  int i;
  if (d) {
    printf ("%s%04x:  UCHAR ucRecordType%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucRecordType)-start), FILL(17), d->ucRecordType, d->ucRecordType);
    printf ("%s%04x:  USHORT usLCDCap%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usLCDCap)-start), FILL(14), d->usLCDCap, d->usLCDCap);
  }
  return sizeof (ATOM_LCD_MODE_CONTROL_CAP);
}
int ATOM_FAKE_EDID_PATCH_RECORD_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_FAKE_EDID_PATCH_RECORD *d = (ATOM_FAKE_EDID_PATCH_RECORD *) data;
  int i;
  if (d) {
    printf ("%s%04x:  UCHAR ucRecordType%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucRecordType)-start), FILL(17), d->ucRecordType, d->ucRecordType);
    printf ("%s%04x:  UCHAR ucFakeEDIDLength%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucFakeEDIDLength)-start), FILL(21), d->ucFakeEDIDLength, d->ucFakeEDIDLength);
    for (i = 0; i < 1; i++) {
      printf ("%s%04x:  UCHAR ucFakeEDIDString%s [%d] = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucFakeEDIDString[i])-start), FILL(25+(i>9)), i, d->ucFakeEDIDString[i], d->ucFakeEDIDString[i]); }
  }
  return sizeof (ATOM_FAKE_EDID_PATCH_RECORD);
}
int ATOM_PANEL_RESOLUTION_PATCH_RECORD_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_PANEL_RESOLUTION_PATCH_RECORD *d = (ATOM_PANEL_RESOLUTION_PATCH_RECORD *) data;
  int i;
  if (d) {
    printf ("%s%04x:  UCHAR ucRecordType%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucRecordType)-start), FILL(17), d->ucRecordType, d->ucRecordType);
    printf ("%s%04x:  USHORT usHSize%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usHSize)-start), FILL(13), d->usHSize, d->usHSize);
    printf ("%s%04x:  USHORT usVSize%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usVSize)-start), FILL(13), d->usVSize, d->usVSize);
  }
  return sizeof (ATOM_PANEL_RESOLUTION_PATCH_RECORD);
}
int ATOM_SPREAD_SPECTRUM_ASSIGNMENT_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_SPREAD_SPECTRUM_ASSIGNMENT *d = (ATOM_SPREAD_SPECTRUM_ASSIGNMENT *) data;
  int i;
  if (d) {
    printf ("%s%04x:  USHORT usSpreadSpectrumPercentage%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usSpreadSpectrumPercentage)-start), FILL(32), d->usSpreadSpectrumPercentage, d->usSpreadSpectrumPercentage);
    printf ("%s%04x:  UCHAR ucSpreadSpectrumType%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucSpreadSpectrumType)-start), FILL(25), d->ucSpreadSpectrumType, d->ucSpreadSpectrumType);
    printf ("%s%04x:  UCHAR ucSS_Step%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucSS_Step)-start), FILL(14), d->ucSS_Step, d->ucSS_Step);
    printf ("%s%04x:  UCHAR ucSS_Delay%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucSS_Delay)-start), FILL(15), d->ucSS_Delay, d->ucSS_Delay);
    printf ("%s%04x:  UCHAR ucSS_Id%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucSS_Id)-start), FILL(12), d->ucSS_Id, d->ucSS_Id);
    printf ("%s%04x:  UCHAR ucRecommendedRef_Div%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucRecommendedRef_Div)-start), FILL(25), d->ucRecommendedRef_Div, d->ucRecommendedRef_Div);
    printf ("%s%04x:  UCHAR ucSS_Range%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucSS_Range)-start), FILL(15), d->ucSS_Range, d->ucSS_Range);
  }
  return sizeof (ATOM_SPREAD_SPECTRUM_ASSIGNMENT);
}
int ATOM_SPREAD_SPECTRUM_INFO_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_SPREAD_SPECTRUM_INFO *d = (ATOM_SPREAD_SPECTRUM_INFO *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ATOM_COMMON_TABLE_HEADER sHeader%s :\n", IND(indent), (int)(((uint8_t*)&d->sHeader)-start), FILL(31)); ATOM_COMMON_TABLE_HEADER_dumper (start, (uint8_t*) &d->sHeader, indent+1);
    for (i = 0; i < 16; i++) {
      printf ("%s%04x:  ATOM_SPREAD_SPECTRUM_ASSIGNMENT asSS_Info%s [%d] :\n", IND(indent), (int)(((uint8_t*)&d->asSS_Info[i])-start), FILL(44+(i>9)), i); ATOM_SPREAD_SPECTRUM_ASSIGNMENT_dumper (start, (uint8_t*) &d->asSS_Info[i], indent+1); }
  }
  return sizeof (ATOM_SPREAD_SPECTRUM_INFO);
}
int ATOM_ANALOG_TV_INFO_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_ANALOG_TV_INFO *d = (ATOM_ANALOG_TV_INFO *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ATOM_COMMON_TABLE_HEADER sHeader%s :\n", IND(indent), (int)(((uint8_t*)&d->sHeader)-start), FILL(31)); ATOM_COMMON_TABLE_HEADER_dumper (start, (uint8_t*) &d->sHeader, indent+1);
    printf ("%s%04x:  UCHAR ucTV_SupportedStandard%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucTV_SupportedStandard)-start), FILL(27), d->ucTV_SupportedStandard, d->ucTV_SupportedStandard);
    printf ("%s%04x:  UCHAR ucTV_BootUpDefaultStandard%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucTV_BootUpDefaultStandard)-start), FILL(31), d->ucTV_BootUpDefaultStandard, d->ucTV_BootUpDefaultStandard);
    printf ("%s%04x:  UCHAR ucExt_TV_ASIC_ID%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucExt_TV_ASIC_ID)-start), FILL(21), d->ucExt_TV_ASIC_ID, d->ucExt_TV_ASIC_ID);
    printf ("%s%04x:  UCHAR ucExt_TV_ASIC_SlaveAddr%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucExt_TV_ASIC_SlaveAddr)-start), FILL(28), d->ucExt_TV_ASIC_SlaveAddr, d->ucExt_TV_ASIC_SlaveAddr);
    for (i = 0; i < 2; i++) {
      printf ("%s%04x:  ATOM_MODE_TIMING aModeTimings%s [%d] :\n", IND(indent), (int)(((uint8_t*)&d->aModeTimings[i])-start), FILL(32+(i>9)), i); ATOM_MODE_TIMING_dumper (start, (uint8_t*) &d->aModeTimings[i], indent+1); }
  }
  return sizeof (ATOM_ANALOG_TV_INFO);
}
int ATOM_ANALOG_TV_INFO_V1_2_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_ANALOG_TV_INFO_V1_2 *d = (ATOM_ANALOG_TV_INFO_V1_2 *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ATOM_COMMON_TABLE_HEADER sHeader%s :\n", IND(indent), (int)(((uint8_t*)&d->sHeader)-start), FILL(31)); ATOM_COMMON_TABLE_HEADER_dumper (start, (uint8_t*) &d->sHeader, indent+1);
    printf ("%s%04x:  UCHAR ucTV_SupportedStandard%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucTV_SupportedStandard)-start), FILL(27), d->ucTV_SupportedStandard, d->ucTV_SupportedStandard);
    printf ("%s%04x:  UCHAR ucTV_BootUpDefaultStandard%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucTV_BootUpDefaultStandard)-start), FILL(31), d->ucTV_BootUpDefaultStandard, d->ucTV_BootUpDefaultStandard);
    printf ("%s%04x:  UCHAR ucExt_TV_ASIC_ID%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucExt_TV_ASIC_ID)-start), FILL(21), d->ucExt_TV_ASIC_ID, d->ucExt_TV_ASIC_ID);
    printf ("%s%04x:  UCHAR ucExt_TV_ASIC_SlaveAddr%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucExt_TV_ASIC_SlaveAddr)-start), FILL(28), d->ucExt_TV_ASIC_SlaveAddr, d->ucExt_TV_ASIC_SlaveAddr);
    for (i = 0; i < 3; i++) {
      printf ("%s%04x:  ATOM_DTD_FORMAT aModeTimings%s [%d] :\n", IND(indent), (int)(((uint8_t*)&d->aModeTimings[i])-start), FILL(31+(i>9)), i); ATOM_DTD_FORMAT_dumper (start, (uint8_t*) &d->aModeTimings[i], indent+1); }
  }
  return sizeof (ATOM_ANALOG_TV_INFO_V1_2);
}
int ATOM_DPCD_INFO_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_DPCD_INFO *d = (ATOM_DPCD_INFO *) data;
  int i;
  if (d) {
    printf ("%s%04x:  UCHAR ucRevisionNumber%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucRevisionNumber)-start), FILL(21), d->ucRevisionNumber, d->ucRevisionNumber);
    printf ("%s%04x:  UCHAR ucMaxLinkRate%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucMaxLinkRate)-start), FILL(18), d->ucMaxLinkRate, d->ucMaxLinkRate);
    printf ("%s%04x:  UCHAR ucMaxLane%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucMaxLane)-start), FILL(14), d->ucMaxLane, d->ucMaxLane);
    printf ("%s%04x:  UCHAR ucMaxDownSpread%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucMaxDownSpread)-start), FILL(20), d->ucMaxDownSpread, d->ucMaxDownSpread);
  }
  return sizeof (ATOM_DPCD_INFO);
}
int ATOM_FIRMWARE_VRAM_RESERVE_INFO_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_FIRMWARE_VRAM_RESERVE_INFO *d = (ATOM_FIRMWARE_VRAM_RESERVE_INFO *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ULONG ulStartAddrUsedByFirmware%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulStartAddrUsedByFirmware)-start), FILL(30), d->ulStartAddrUsedByFirmware, d->ulStartAddrUsedByFirmware);
    printf ("%s%04x:  USHORT usFirmwareUseInKb%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usFirmwareUseInKb)-start), FILL(23), d->usFirmwareUseInKb, d->usFirmwareUseInKb);
    printf ("%s%04x:  USHORT usReserved%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usReserved)-start), FILL(16), d->usReserved, d->usReserved);
  }
  return sizeof (ATOM_FIRMWARE_VRAM_RESERVE_INFO);
}
int ATOM_VRAM_USAGE_BY_FIRMWARE_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_VRAM_USAGE_BY_FIRMWARE *d = (ATOM_VRAM_USAGE_BY_FIRMWARE *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ATOM_COMMON_TABLE_HEADER sHeader%s :\n", IND(indent), (int)(((uint8_t*)&d->sHeader)-start), FILL(31)); ATOM_COMMON_TABLE_HEADER_dumper (start, (uint8_t*) &d->sHeader, indent+1);
    for (i = 0; i < 1; i++) {
      printf ("%s%04x:  ATOM_FIRMWARE_VRAM_RESERVE_INFO asFirmwareVramReserveInfo%s [%d] :\n", IND(indent), (int)(((uint8_t*)&d->asFirmwareVramReserveInfo[i])-start), FILL(60+(i>9)), i); ATOM_FIRMWARE_VRAM_RESERVE_INFO_dumper (start, (uint8_t*) &d->asFirmwareVramReserveInfo[i], indent+1); }
  }
  return sizeof (ATOM_VRAM_USAGE_BY_FIRMWARE);
}
int ATOM_FIRMWARE_VRAM_RESERVE_INFO_V1_5_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_FIRMWARE_VRAM_RESERVE_INFO_V1_5 *d = (ATOM_FIRMWARE_VRAM_RESERVE_INFO_V1_5 *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ULONG ulStartAddrUsedByFirmware%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulStartAddrUsedByFirmware)-start), FILL(30), d->ulStartAddrUsedByFirmware, d->ulStartAddrUsedByFirmware);
    printf ("%s%04x:  USHORT usFirmwareUseInKb%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usFirmwareUseInKb)-start), FILL(23), d->usFirmwareUseInKb, d->usFirmwareUseInKb);
    printf ("%s%04x:  USHORT usFBUsedByDrvInKb%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usFBUsedByDrvInKb)-start), FILL(23), d->usFBUsedByDrvInKb, d->usFBUsedByDrvInKb);
  }
  return sizeof (ATOM_FIRMWARE_VRAM_RESERVE_INFO_V1_5);
}
int ATOM_VRAM_USAGE_BY_FIRMWARE_V1_5_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_VRAM_USAGE_BY_FIRMWARE_V1_5 *d = (ATOM_VRAM_USAGE_BY_FIRMWARE_V1_5 *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ATOM_COMMON_TABLE_HEADER sHeader%s :\n", IND(indent), (int)(((uint8_t*)&d->sHeader)-start), FILL(31)); ATOM_COMMON_TABLE_HEADER_dumper (start, (uint8_t*) &d->sHeader, indent+1);
    for (i = 0; i < 1; i++) {
      printf ("%s%04x:  ATOM_FIRMWARE_VRAM_RESERVE_INFO_V1_5 asFirmwareVramReserveInfo%s [%d] :\n", IND(indent), (int)(((uint8_t*)&d->asFirmwareVramReserveInfo[i])-start), FILL(65+(i>9)), i); ATOM_FIRMWARE_VRAM_RESERVE_INFO_V1_5_dumper (start, (uint8_t*) &d->asFirmwareVramReserveInfo[i], indent+1); }
  }
  return sizeof (ATOM_VRAM_USAGE_BY_FIRMWARE_V1_5);
}
int ATOM_GPIO_PIN_ASSIGNMENT_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_GPIO_PIN_ASSIGNMENT *d = (ATOM_GPIO_PIN_ASSIGNMENT *) data;
  int i;
  if (d) {
    printf ("%s%04x:  USHORT usGpioPin_AIndex%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usGpioPin_AIndex)-start), FILL(22), d->usGpioPin_AIndex, d->usGpioPin_AIndex);
    printf ("%s%04x:  UCHAR ucGpioPinBitShift%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucGpioPinBitShift)-start), FILL(22), d->ucGpioPinBitShift, d->ucGpioPinBitShift);
    printf ("%s%04x:  UCHAR ucGPIO_ID%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucGPIO_ID)-start), FILL(14), d->ucGPIO_ID, d->ucGPIO_ID);
  }
  return sizeof (ATOM_GPIO_PIN_ASSIGNMENT);
}
int ATOM_GPIO_PIN_LUT_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_GPIO_PIN_LUT *d = (ATOM_GPIO_PIN_LUT *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ATOM_COMMON_TABLE_HEADER sHeader%s :\n", IND(indent), (int)(((uint8_t*)&d->sHeader)-start), FILL(31)); ATOM_COMMON_TABLE_HEADER_dumper (start, (uint8_t*) &d->sHeader, indent+1);
    for (i = 0; i < COUNT_ALL (ATOM_GPIO_PIN_LUT, ATOM_GPIO_PIN_ASSIGNMENT); i++) {
      printf ("%s%04x:  ATOM_GPIO_PIN_ASSIGNMENT asGPIO_Pin%s [%d] :\n", IND(indent), (int)(((uint8_t*)&d->asGPIO_Pin[i])-start), FILL(38+(i>9)), i); ATOM_GPIO_PIN_ASSIGNMENT_dumper (start, (uint8_t*) &d->asGPIO_Pin[i], indent+1); }
  }
  return RETURN_ALL (ATOM_GPIO_PIN_LUT, ATOM_GPIO_PIN_ASSIGNMENT);
}
int ATOM_GPIO_INFO_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_GPIO_INFO *d = (ATOM_GPIO_INFO *) data;
  int i;
  if (d) {
    printf ("%s%04x:  USHORT usAOffset%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usAOffset)-start), FILL(15), d->usAOffset, d->usAOffset);
    printf ("%s%04x:  UCHAR ucSettings%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucSettings)-start), FILL(15), d->ucSettings, d->ucSettings);
    printf ("%s%04x:  UCHAR ucReserved%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucReserved)-start), FILL(15), d->ucReserved, d->ucReserved);
  }
  return sizeof (ATOM_GPIO_INFO);
}
int ATOM_COMPONENT_VIDEO_INFO_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_COMPONENT_VIDEO_INFO *d = (ATOM_COMPONENT_VIDEO_INFO *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ATOM_COMMON_TABLE_HEADER sHeader%s :\n", IND(indent), (int)(((uint8_t*)&d->sHeader)-start), FILL(31)); ATOM_COMMON_TABLE_HEADER_dumper (start, (uint8_t*) &d->sHeader, indent+1);
    printf ("%s%04x:  USHORT usMask_PinRegisterIndex%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usMask_PinRegisterIndex)-start), FILL(29), d->usMask_PinRegisterIndex, d->usMask_PinRegisterIndex);
    printf ("%s%04x:  USHORT usEN_PinRegisterIndex%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usEN_PinRegisterIndex)-start), FILL(27), d->usEN_PinRegisterIndex, d->usEN_PinRegisterIndex);
    printf ("%s%04x:  USHORT usY_PinRegisterIndex%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usY_PinRegisterIndex)-start), FILL(26), d->usY_PinRegisterIndex, d->usY_PinRegisterIndex);
    printf ("%s%04x:  USHORT usA_PinRegisterIndex%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usA_PinRegisterIndex)-start), FILL(26), d->usA_PinRegisterIndex, d->usA_PinRegisterIndex);
    printf ("%s%04x:  UCHAR ucBitShift%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucBitShift)-start), FILL(15), d->ucBitShift, d->ucBitShift);
    printf ("%s%04x:  UCHAR ucPinActiveState%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucPinActiveState)-start), FILL(21), d->ucPinActiveState, d->ucPinActiveState);
    printf ("%s%04x:  ATOM_DTD_FORMAT sReserved%s :\n", IND(indent), (int)(((uint8_t*)&d->sReserved)-start), FILL(24)); ATOM_DTD_FORMAT_dumper (start, (uint8_t*) &d->sReserved, indent+1);
    printf ("%s%04x:  UCHAR ucMiscInfo%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucMiscInfo)-start), FILL(15), d->ucMiscInfo, d->ucMiscInfo);
    printf ("%s%04x:  UCHAR uc480i%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->uc480i)-start), FILL(11), d->uc480i, d->uc480i);
    printf ("%s%04x:  UCHAR uc480p%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->uc480p)-start), FILL(11), d->uc480p, d->uc480p);
    printf ("%s%04x:  UCHAR uc720p%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->uc720p)-start), FILL(11), d->uc720p, d->uc720p);
    printf ("%s%04x:  UCHAR uc1080i%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->uc1080i)-start), FILL(12), d->uc1080i, d->uc1080i);
    printf ("%s%04x:  UCHAR ucLetterBoxMode%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucLetterBoxMode)-start), FILL(20), d->ucLetterBoxMode, d->ucLetterBoxMode);
    for (i = 0; i < 3; i++) {
      printf ("%s%04x:  UCHAR ucReserved%s [%d] = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucReserved[i])-start), FILL(19+(i>9)), i, d->ucReserved[i], d->ucReserved[i]); }
    printf ("%s%04x:  UCHAR ucNumOfWbGpioBlocks%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucNumOfWbGpioBlocks)-start), FILL(24), d->ucNumOfWbGpioBlocks, d->ucNumOfWbGpioBlocks);
    for (i = 0; i < (d->ucNumOfWbGpioBlocks); i++) {
      printf ("%s%04x:  ATOM_GPIO_INFO aWbGpioStateBlock%s [%d] :\n", IND(indent), (int)(((uint8_t*)&d->aWbGpioStateBlock[i])-start), FILL(35+(i>9)), i); ATOM_GPIO_INFO_dumper (start, (uint8_t*) &d->aWbGpioStateBlock[i], indent+1); }
    for (i = 0; i < COUNT_REMAINDER (ATOM_COMPONENT_VIDEO_INFO, aModeTimings[0], ATOM_DTD_FORMAT); i++) {
      printf ("%s%04x:  ATOM_DTD_FORMAT aModeTimings%s [%d] :\n", IND(indent), (int)(((uint8_t*)&d->aModeTimings[i])-start), FILL(31+(i>9)), i); ATOM_DTD_FORMAT_dumper (start, (uint8_t*) &d->aModeTimings[i], indent+1); }
  }
  return RETURN_REMAINDER (ATOM_COMPONENT_VIDEO_INFO, aModeTimings[0], ATOM_DTD_FORMAT);
}
int ATOM_COMPONENT_VIDEO_INFO_V21_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_COMPONENT_VIDEO_INFO_V21 *d = (ATOM_COMPONENT_VIDEO_INFO_V21 *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ATOM_COMMON_TABLE_HEADER sHeader%s :\n", IND(indent), (int)(((uint8_t*)&d->sHeader)-start), FILL(31)); ATOM_COMMON_TABLE_HEADER_dumper (start, (uint8_t*) &d->sHeader, indent+1);
    printf ("%s%04x:  UCHAR ucMiscInfo%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucMiscInfo)-start), FILL(15), d->ucMiscInfo, d->ucMiscInfo);
    printf ("%s%04x:  UCHAR uc480i%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->uc480i)-start), FILL(11), d->uc480i, d->uc480i);
    printf ("%s%04x:  UCHAR uc480p%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->uc480p)-start), FILL(11), d->uc480p, d->uc480p);
    printf ("%s%04x:  UCHAR uc720p%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->uc720p)-start), FILL(11), d->uc720p, d->uc720p);
    printf ("%s%04x:  UCHAR uc1080i%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->uc1080i)-start), FILL(12), d->uc1080i, d->uc1080i);
    printf ("%s%04x:  UCHAR ucReserved%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucReserved)-start), FILL(15), d->ucReserved, d->ucReserved);
    printf ("%s%04x:  UCHAR ucLetterBoxMode%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucLetterBoxMode)-start), FILL(20), d->ucLetterBoxMode, d->ucLetterBoxMode);
    printf ("%s%04x:  UCHAR ucNumOfWbGpioBlocks%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucNumOfWbGpioBlocks)-start), FILL(24), d->ucNumOfWbGpioBlocks, d->ucNumOfWbGpioBlocks);
    for (i = 0; i < (d->ucNumOfWbGpioBlocks); i++) {
      printf ("%s%04x:  ATOM_GPIO_INFO aWbGpioStateBlock%s [%d] :\n", IND(indent), (int)(((uint8_t*)&d->aWbGpioStateBlock[i])-start), FILL(35+(i>9)), i); ATOM_GPIO_INFO_dumper (start, (uint8_t*) &d->aWbGpioStateBlock[i], indent+1); }
    for (i = 0; i < COUNT_REMAINDER (ATOM_COMPONENT_VIDEO_INFO_V21, aModeTimings[0], ATOM_DTD_FORMAT); i++) {
      printf ("%s%04x:  ATOM_DTD_FORMAT aModeTimings%s [%d] :\n", IND(indent), (int)(((uint8_t*)&d->aModeTimings[i])-start), FILL(31+(i>9)), i); ATOM_DTD_FORMAT_dumper (start, (uint8_t*) &d->aModeTimings[i], indent+1); }
  }
  return RETURN_REMAINDER (ATOM_COMPONENT_VIDEO_INFO_V21, aModeTimings[0], ATOM_DTD_FORMAT);
}
int ATOM_OBJECT_HEADER_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_OBJECT_HEADER *d = (ATOM_OBJECT_HEADER *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ATOM_COMMON_TABLE_HEADER sHeader%s :\n", IND(indent), (int)(((uint8_t*)&d->sHeader)-start), FILL(31)); ATOM_COMMON_TABLE_HEADER_dumper (start, (uint8_t*) &d->sHeader, indent+1);
    printf ("%s%04x:  USHORT usDeviceSupport%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usDeviceSupport)-start), FILL(21), d->usDeviceSupport, d->usDeviceSupport);
    printf ("%s%04x:  USHORT usConnectorObjectTableOffset%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usConnectorObjectTableOffset)-start), FILL(34), d->usConnectorObjectTableOffset, d->usConnectorObjectTableOffset);
    printf ("%s%04x:  USHORT usRouterObjectTableOffset%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usRouterObjectTableOffset)-start), FILL(31), d->usRouterObjectTableOffset, d->usRouterObjectTableOffset);
    printf ("%s%04x:  USHORT usEncoderObjectTableOffset%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usEncoderObjectTableOffset)-start), FILL(32), d->usEncoderObjectTableOffset, d->usEncoderObjectTableOffset);
    printf ("%s%04x:  USHORT usProtectionObjectTableOffset%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usProtectionObjectTableOffset)-start), FILL(35), d->usProtectionObjectTableOffset, d->usProtectionObjectTableOffset);
    printf ("%s%04x:  USHORT usDisplayPathTableOffset%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usDisplayPathTableOffset)-start), FILL(30), d->usDisplayPathTableOffset, d->usDisplayPathTableOffset);
  }
  return sizeof (ATOM_OBJECT_HEADER);
}
int ATOM_OBJECT_HEADER_V3_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_OBJECT_HEADER_V3 *d = (ATOM_OBJECT_HEADER_V3 *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ATOM_COMMON_TABLE_HEADER sHeader%s :\n", IND(indent), (int)(((uint8_t*)&d->sHeader)-start), FILL(31)); ATOM_COMMON_TABLE_HEADER_dumper (start, (uint8_t*) &d->sHeader, indent+1);
    printf ("%s%04x:  USHORT usDeviceSupport%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usDeviceSupport)-start), FILL(21), d->usDeviceSupport, d->usDeviceSupport);
    printf ("%s%04x:  USHORT usConnectorObjectTableOffset%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usConnectorObjectTableOffset)-start), FILL(34), d->usConnectorObjectTableOffset, d->usConnectorObjectTableOffset);
    printf ("%s%04x:  USHORT usRouterObjectTableOffset%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usRouterObjectTableOffset)-start), FILL(31), d->usRouterObjectTableOffset, d->usRouterObjectTableOffset);
    printf ("%s%04x:  USHORT usEncoderObjectTableOffset%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usEncoderObjectTableOffset)-start), FILL(32), d->usEncoderObjectTableOffset, d->usEncoderObjectTableOffset);
    printf ("%s%04x:  USHORT usProtectionObjectTableOffset%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usProtectionObjectTableOffset)-start), FILL(35), d->usProtectionObjectTableOffset, d->usProtectionObjectTableOffset);
    printf ("%s%04x:  USHORT usDisplayPathTableOffset%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usDisplayPathTableOffset)-start), FILL(30), d->usDisplayPathTableOffset, d->usDisplayPathTableOffset);
    printf ("%s%04x:  USHORT usMiscObjectTableOffset%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usMiscObjectTableOffset)-start), FILL(29), d->usMiscObjectTableOffset, d->usMiscObjectTableOffset);
  }
  return sizeof (ATOM_OBJECT_HEADER_V3);
}
int ATOM_DISPLAY_OBJECT_PATH_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_DISPLAY_OBJECT_PATH *d = (ATOM_DISPLAY_OBJECT_PATH *) data;
  int i;
  if (d) {
    printf ("%s%04x:  USHORT usDeviceTag%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usDeviceTag)-start), FILL(17), d->usDeviceTag, d->usDeviceTag);
    printf ("%s%04x:  USHORT usSize%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usSize)-start), FILL(12), d->usSize, d->usSize);
    printf ("%s%04x:  USHORT usConnObjectId%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usConnObjectId)-start), FILL(20), d->usConnObjectId, d->usConnObjectId);
    printf ("%s%04x:  USHORT usGPUObjectId%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usGPUObjectId)-start), FILL(19), d->usGPUObjectId, d->usGPUObjectId);
    for (i = 0; i < 1; i++) {
      printf ("%s%04x:  USHORT usGraphicObjIds%s [%d] = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usGraphicObjIds[i])-start), FILL(25+(i>9)), i, d->usGraphicObjIds[i], d->usGraphicObjIds[i]); }
  }
  return sizeof (ATOM_DISPLAY_OBJECT_PATH);
}
int ATOM_DISPLAY_EXTERNAL_OBJECT_PATH_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_DISPLAY_EXTERNAL_OBJECT_PATH *d = (ATOM_DISPLAY_EXTERNAL_OBJECT_PATH *) data;
  int i;
  if (d) {
    printf ("%s%04x:  USHORT usDeviceTag%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usDeviceTag)-start), FILL(17), d->usDeviceTag, d->usDeviceTag);
    printf ("%s%04x:  USHORT usSize%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usSize)-start), FILL(12), d->usSize, d->usSize);
    printf ("%s%04x:  USHORT usConnObjectId%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usConnObjectId)-start), FILL(20), d->usConnObjectId, d->usConnObjectId);
    printf ("%s%04x:  USHORT usGPUObjectId%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usGPUObjectId)-start), FILL(19), d->usGPUObjectId, d->usGPUObjectId);
    for (i = 0; i < 2; i++) {
      printf ("%s%04x:  USHORT usGraphicObjIds%s [%d] = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usGraphicObjIds[i])-start), FILL(25+(i>9)), i, d->usGraphicObjIds[i], d->usGraphicObjIds[i]); }
  }
  return sizeof (ATOM_DISPLAY_EXTERNAL_OBJECT_PATH);
}
int ATOM_DISPLAY_OBJECT_PATH_TABLE_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_DISPLAY_OBJECT_PATH_TABLE *d = (ATOM_DISPLAY_OBJECT_PATH_TABLE *) data;
  int i;
  if (d) {
    printf ("%s%04x:  UCHAR ucNumOfDispPath%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucNumOfDispPath)-start), FILL(20), d->ucNumOfDispPath, d->ucNumOfDispPath);
    printf ("%s%04x:  UCHAR ucVersion%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucVersion)-start), FILL(14), d->ucVersion, d->ucVersion);
    for (i = 0; i < 2; i++) {
      printf ("%s%04x:  UCHAR ucPadding%s [%d] = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucPadding[i])-start), FILL(18+(i>9)), i, d->ucPadding[i], d->ucPadding[i]); }
    for (i = 0; i < 1; i++) {
      printf ("%s%04x:  ATOM_DISPLAY_OBJECT_PATH asDispPath%s [%d] :\n", IND(indent), (int)(((uint8_t*)&d->asDispPath[i])-start), FILL(38+(i>9)), i); ATOM_DISPLAY_OBJECT_PATH_dumper (start, (uint8_t*) &d->asDispPath[i], indent+1); }
  }
  return sizeof (ATOM_DISPLAY_OBJECT_PATH_TABLE);
}
int ATOM_OBJECT_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_OBJECT *d = (ATOM_OBJECT *) data;
  int i;
  if (d) {
    printf ("%s%04x:  USHORT usObjectID%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usObjectID)-start), FILL(16), d->usObjectID, d->usObjectID);
    printf ("%s%04x:  USHORT usSrcDstTableOffset%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usSrcDstTableOffset)-start), FILL(25), d->usSrcDstTableOffset, d->usSrcDstTableOffset);
    printf ("%s%04x:  USHORT usRecordOffset%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usRecordOffset)-start), FILL(20), d->usRecordOffset, d->usRecordOffset);
    printf ("%s%04x:  USHORT usReserved%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usReserved)-start), FILL(16), d->usReserved, d->usReserved);
  }
  return sizeof (ATOM_OBJECT);
}
int ATOM_OBJECT_TABLE_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_OBJECT_TABLE *d = (ATOM_OBJECT_TABLE *) data;
  int i;
  if (d) {
    printf ("%s%04x:  UCHAR ucNumberOfObjects%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucNumberOfObjects)-start), FILL(22), d->ucNumberOfObjects, d->ucNumberOfObjects);
    for (i = 0; i < 3; i++) {
      printf ("%s%04x:  UCHAR ucPadding%s [%d] = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucPadding[i])-start), FILL(18+(i>9)), i, d->ucPadding[i], d->ucPadding[i]); }
    for (i = 0; i < 1; i++) {
      printf ("%s%04x:  ATOM_OBJECT asObjects%s [%d] :\n", IND(indent), (int)(((uint8_t*)&d->asObjects[i])-start), FILL(24+(i>9)), i); ATOM_OBJECT_dumper (start, (uint8_t*) &d->asObjects[i], indent+1); }
  }
  return sizeof (ATOM_OBJECT_TABLE);
}
int ATOM_SRC_DST_TABLE_FOR_ONE_OBJECT_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_SRC_DST_TABLE_FOR_ONE_OBJECT *d = (ATOM_SRC_DST_TABLE_FOR_ONE_OBJECT *) data;
  int i;
  if (d) {
    printf ("%s%04x:  UCHAR ucNumberOfSrc%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucNumberOfSrc)-start), FILL(18), d->ucNumberOfSrc, d->ucNumberOfSrc);
    for (i = 0; i < 1; i++) {
      printf ("%s%04x:  USHORT usSrcObjectID%s [%d] = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usSrcObjectID[i])-start), FILL(23+(i>9)), i, d->usSrcObjectID[i], d->usSrcObjectID[i]); }
    printf ("%s%04x:  UCHAR ucNumberOfDst%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucNumberOfDst)-start), FILL(18), d->ucNumberOfDst, d->ucNumberOfDst);
    for (i = 0; i < 1; i++) {
      printf ("%s%04x:  USHORT usDstObjectID%s [%d] = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usDstObjectID[i])-start), FILL(23+(i>9)), i, d->usDstObjectID[i], d->usDstObjectID[i]); }
  }
  return sizeof (ATOM_SRC_DST_TABLE_FOR_ONE_OBJECT);
}
int ATOM_DP_CONN_CHANNEL_MAPPING_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_DP_CONN_CHANNEL_MAPPING *d = (ATOM_DP_CONN_CHANNEL_MAPPING *) data;
  int i;
  if (d) {
    printf ("%s       UCHAR ucDP_Lane0_Source:2%s = 0x%02x       (%d)\n", IND(indent), FILL(24), d->ucDP_Lane0_Source, d->ucDP_Lane0_Source);
    printf ("%s       UCHAR ucDP_Lane1_Source:2%s = 0x%02x       (%d)\n", IND(indent), FILL(24), d->ucDP_Lane1_Source, d->ucDP_Lane1_Source);
    printf ("%s       UCHAR ucDP_Lane2_Source:2%s = 0x%02x       (%d)\n", IND(indent), FILL(24), d->ucDP_Lane2_Source, d->ucDP_Lane2_Source);
    printf ("%s       UCHAR ucDP_Lane3_Source:2%s = 0x%02x       (%d)\n", IND(indent), FILL(24), d->ucDP_Lane3_Source, d->ucDP_Lane3_Source);
  }
  return sizeof (ATOM_DP_CONN_CHANNEL_MAPPING);
}
int ATOM_DVI_CONN_CHANNEL_MAPPING_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_DVI_CONN_CHANNEL_MAPPING *d = (ATOM_DVI_CONN_CHANNEL_MAPPING *) data;
  int i;
  if (d) {
    printf ("%s       UCHAR ucDVI_DATA2_Source:2%s = 0x%02x       (%d)\n", IND(indent), FILL(25), d->ucDVI_DATA2_Source, d->ucDVI_DATA2_Source);
    printf ("%s       UCHAR ucDVI_DATA1_Source:2%s = 0x%02x       (%d)\n", IND(indent), FILL(25), d->ucDVI_DATA1_Source, d->ucDVI_DATA1_Source);
    printf ("%s       UCHAR ucDVI_DATA0_Source:2%s = 0x%02x       (%d)\n", IND(indent), FILL(25), d->ucDVI_DATA0_Source, d->ucDVI_DATA0_Source);
    printf ("%s       UCHAR ucDVI_CLK_Source:2%s = 0x%02x       (%d)\n", IND(indent), FILL(23), d->ucDVI_CLK_Source, d->ucDVI_CLK_Source);
  }
  return sizeof (ATOM_DVI_CONN_CHANNEL_MAPPING);
}
int EXT_DISPLAY_PATH_dumper (uint8_t *start, uint8_t *data, int indent) {
  EXT_DISPLAY_PATH *d = (EXT_DISPLAY_PATH *) data;
  int i;
  if (d) {
    printf ("%s%04x:  USHORT usDeviceTag%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usDeviceTag)-start), FILL(17), d->usDeviceTag, d->usDeviceTag);
    printf ("%s%04x:  USHORT usDeviceACPIEnum%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usDeviceACPIEnum)-start), FILL(22), d->usDeviceACPIEnum, d->usDeviceACPIEnum);
    printf ("%s%04x:  USHORT usDeviceConnector%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usDeviceConnector)-start), FILL(23), d->usDeviceConnector, d->usDeviceConnector);
    printf ("%s%04x:  UCHAR ucExtAUXDDCLutIndex%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucExtAUXDDCLutIndex)-start), FILL(24), d->ucExtAUXDDCLutIndex, d->ucExtAUXDDCLutIndex);
    printf ("%s%04x:  UCHAR ucExtHPDPINLutIndex%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucExtHPDPINLutIndex)-start), FILL(24), d->ucExtHPDPINLutIndex, d->ucExtHPDPINLutIndex);
    printf ("%s%04x:  USHORT usExtEncoderObjId%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usExtEncoderObjId)-start), FILL(23), d->usExtEncoderObjId, d->usExtEncoderObjId);
    printf ("%s  <unparsable> line 2484:   union{\n%sskipping...\n", IND(indent), IND(indent));
  }
  return sizeof (EXT_DISPLAY_PATH);
}
int ATOM_EXTERNAL_DISPLAY_CONNECTION_INFO_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_EXTERNAL_DISPLAY_CONNECTION_INFO *d = (ATOM_EXTERNAL_DISPLAY_CONNECTION_INFO *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ATOM_COMMON_TABLE_HEADER sHeader%s :\n", IND(indent), (int)(((uint8_t*)&d->sHeader)-start), FILL(31)); ATOM_COMMON_TABLE_HEADER_dumper (start, (uint8_t*) &d->sHeader, indent+1);
    for (i = 0; i < 16; i++) {
      printf ("%s%04x:  UCHAR ucGuid%s [%d] = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucGuid[i])-start), FILL(15+(i>9)), i, d->ucGuid[i], d->ucGuid[i]); }
    for (i = 0; i < 7; i++) {
      printf ("%s%04x:  EXT_DISPLAY_PATH sPath%s [%d] :\n", IND(indent), (int)(((uint8_t*)&d->sPath[i])-start), FILL(25+(i>9)), i); EXT_DISPLAY_PATH_dumper (start, (uint8_t*) &d->sPath[i], indent+1); }
    printf ("%s%04x:  UCHAR ucChecksum%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucChecksum)-start), FILL(15), d->ucChecksum, d->ucChecksum);
    printf ("%s%04x:  UCHAR uc3DStereoPinId%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->uc3DStereoPinId)-start), FILL(20), d->uc3DStereoPinId, d->uc3DStereoPinId);
    for (i = 0; i < 6; i++) {
      printf ("%s%04x:  UCHAR Reserved%s [%d] = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->Reserved[i])-start), FILL(17+(i>9)), i, d->Reserved[i], d->Reserved[i]); }
  }
  return sizeof (ATOM_EXTERNAL_DISPLAY_CONNECTION_INFO);
}
int ATOM_COMMON_RECORD_HEADER_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_COMMON_RECORD_HEADER *d = (ATOM_COMMON_RECORD_HEADER *) data;
  int i;
  if (d) {
    printf ("%s%04x:  UCHAR ucRecordType%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucRecordType)-start), FILL(17), d->ucRecordType, d->ucRecordType);
    printf ("%s%04x:  UCHAR ucRecordSize%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucRecordSize)-start), FILL(17), d->ucRecordSize, d->ucRecordSize);
  }
  return sizeof (ATOM_COMMON_RECORD_HEADER);
}
int ATOM_I2C_RECORD_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_I2C_RECORD *d = (ATOM_I2C_RECORD *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ATOM_COMMON_RECORD_HEADER sheader%s :\n", IND(indent), (int)(((uint8_t*)&d->sheader)-start), FILL(32)); ATOM_COMMON_RECORD_HEADER_dumper (start, (uint8_t*) &d->sheader, indent+1);
    printf ("%s%04x:  ATOM_I2C_ID_CONFIG sucI2cId%s :\n", IND(indent), (int)(((uint8_t*)&d->sucI2cId)-start), FILL(26)); ATOM_I2C_ID_CONFIG_dumper (start, (uint8_t*) &d->sucI2cId, indent+1);
    printf ("%s%04x:  UCHAR ucI2CAddr%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucI2CAddr)-start), FILL(14), d->ucI2CAddr, d->ucI2CAddr);
  }
  return sizeof (ATOM_I2C_RECORD);
}
int ATOM_HPD_INT_RECORD_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_HPD_INT_RECORD *d = (ATOM_HPD_INT_RECORD *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ATOM_COMMON_RECORD_HEADER sheader%s :\n", IND(indent), (int)(((uint8_t*)&d->sheader)-start), FILL(32)); ATOM_COMMON_RECORD_HEADER_dumper (start, (uint8_t*) &d->sheader, indent+1);
    printf ("%s%04x:  UCHAR ucHPDIntGPIOID%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucHPDIntGPIOID)-start), FILL(19), d->ucHPDIntGPIOID, d->ucHPDIntGPIOID);
    printf ("%s%04x:  UCHAR ucPlugged_PinState%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucPlugged_PinState)-start), FILL(23), d->ucPlugged_PinState, d->ucPlugged_PinState);
  }
  return sizeof (ATOM_HPD_INT_RECORD);
}
int ATOM_OUTPUT_PROTECTION_RECORD_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_OUTPUT_PROTECTION_RECORD *d = (ATOM_OUTPUT_PROTECTION_RECORD *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ATOM_COMMON_RECORD_HEADER sheader%s :\n", IND(indent), (int)(((uint8_t*)&d->sheader)-start), FILL(32)); ATOM_COMMON_RECORD_HEADER_dumper (start, (uint8_t*) &d->sheader, indent+1);
    printf ("%s%04x:  UCHAR ucProtectionFlag%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucProtectionFlag)-start), FILL(21), d->ucProtectionFlag, d->ucProtectionFlag);
    printf ("%s%04x:  UCHAR ucReserved%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucReserved)-start), FILL(15), d->ucReserved, d->ucReserved);
  }
  return sizeof (ATOM_OUTPUT_PROTECTION_RECORD);
}
int ATOM_CONNECTOR_DEVICE_TAG_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_CONNECTOR_DEVICE_TAG *d = (ATOM_CONNECTOR_DEVICE_TAG *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ULONG ulACPIDeviceEnum%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulACPIDeviceEnum)-start), FILL(21), d->ulACPIDeviceEnum, d->ulACPIDeviceEnum);
    printf ("%s%04x:  USHORT usDeviceID%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usDeviceID)-start), FILL(16), d->usDeviceID, d->usDeviceID);
    printf ("%s%04x:  USHORT usPadding%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usPadding)-start), FILL(15), d->usPadding, d->usPadding);
  }
  return sizeof (ATOM_CONNECTOR_DEVICE_TAG);
}
int ATOM_CONNECTOR_DEVICE_TAG_RECORD_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_CONNECTOR_DEVICE_TAG_RECORD *d = (ATOM_CONNECTOR_DEVICE_TAG_RECORD *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ATOM_COMMON_RECORD_HEADER sheader%s :\n", IND(indent), (int)(((uint8_t*)&d->sheader)-start), FILL(32)); ATOM_COMMON_RECORD_HEADER_dumper (start, (uint8_t*) &d->sheader, indent+1);
    printf ("%s%04x:  UCHAR ucNumberOfDevice%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucNumberOfDevice)-start), FILL(21), d->ucNumberOfDevice, d->ucNumberOfDevice);
    printf ("%s%04x:  UCHAR ucReserved%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucReserved)-start), FILL(15), d->ucReserved, d->ucReserved);
    for (i = 0; i < 1; i++) {
      printf ("%s%04x:  ATOM_CONNECTOR_DEVICE_TAG asDeviceTag%s [%d] :\n", IND(indent), (int)(((uint8_t*)&d->asDeviceTag[i])-start), FILL(40+(i>9)), i); ATOM_CONNECTOR_DEVICE_TAG_dumper (start, (uint8_t*) &d->asDeviceTag[i], indent+1); }
  }
  return sizeof (ATOM_CONNECTOR_DEVICE_TAG_RECORD);
}
int ATOM_CONNECTOR_DVI_EXT_INPUT_RECORD_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_CONNECTOR_DVI_EXT_INPUT_RECORD *d = (ATOM_CONNECTOR_DVI_EXT_INPUT_RECORD *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ATOM_COMMON_RECORD_HEADER sheader%s :\n", IND(indent), (int)(((uint8_t*)&d->sheader)-start), FILL(32)); ATOM_COMMON_RECORD_HEADER_dumper (start, (uint8_t*) &d->sheader, indent+1);
    printf ("%s%04x:  UCHAR ucConfigGPIOID%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucConfigGPIOID)-start), FILL(19), d->ucConfigGPIOID, d->ucConfigGPIOID);
    printf ("%s%04x:  UCHAR ucConfigGPIOState%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucConfigGPIOState)-start), FILL(22), d->ucConfigGPIOState, d->ucConfigGPIOState);
    printf ("%s%04x:  UCHAR ucFlowinGPIPID%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucFlowinGPIPID)-start), FILL(19), d->ucFlowinGPIPID, d->ucFlowinGPIPID);
    printf ("%s%04x:  UCHAR ucExtInGPIPID%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucExtInGPIPID)-start), FILL(18), d->ucExtInGPIPID, d->ucExtInGPIPID);
  }
  return sizeof (ATOM_CONNECTOR_DVI_EXT_INPUT_RECORD);
}
int ATOM_ENCODER_FPGA_CONTROL_RECORD_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_ENCODER_FPGA_CONTROL_RECORD *d = (ATOM_ENCODER_FPGA_CONTROL_RECORD *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ATOM_COMMON_RECORD_HEADER sheader%s :\n", IND(indent), (int)(((uint8_t*)&d->sheader)-start), FILL(32)); ATOM_COMMON_RECORD_HEADER_dumper (start, (uint8_t*) &d->sheader, indent+1);
    printf ("%s%04x:  UCHAR ucCTL1GPIO_ID%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucCTL1GPIO_ID)-start), FILL(18), d->ucCTL1GPIO_ID, d->ucCTL1GPIO_ID);
    printf ("%s%04x:  UCHAR ucCTL1GPIOState%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucCTL1GPIOState)-start), FILL(20), d->ucCTL1GPIOState, d->ucCTL1GPIOState);
    printf ("%s%04x:  UCHAR ucCTL2GPIO_ID%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucCTL2GPIO_ID)-start), FILL(18), d->ucCTL2GPIO_ID, d->ucCTL2GPIO_ID);
    printf ("%s%04x:  UCHAR ucCTL2GPIOState%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucCTL2GPIOState)-start), FILL(20), d->ucCTL2GPIOState, d->ucCTL2GPIOState);
    printf ("%s%04x:  UCHAR ucCTL3GPIO_ID%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucCTL3GPIO_ID)-start), FILL(18), d->ucCTL3GPIO_ID, d->ucCTL3GPIO_ID);
    printf ("%s%04x:  UCHAR ucCTL3GPIOState%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucCTL3GPIOState)-start), FILL(20), d->ucCTL3GPIOState, d->ucCTL3GPIOState);
    printf ("%s%04x:  UCHAR ucCTLFPGA_IN_ID%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucCTLFPGA_IN_ID)-start), FILL(20), d->ucCTLFPGA_IN_ID, d->ucCTLFPGA_IN_ID);
    for (i = 0; i < 3; i++) {
      printf ("%s%04x:  UCHAR ucPadding%s [%d] = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucPadding[i])-start), FILL(18+(i>9)), i, d->ucPadding[i], d->ucPadding[i]); }
  }
  return sizeof (ATOM_ENCODER_FPGA_CONTROL_RECORD);
}
int ATOM_CONNECTOR_CVTV_SHARE_DIN_RECORD_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_CONNECTOR_CVTV_SHARE_DIN_RECORD *d = (ATOM_CONNECTOR_CVTV_SHARE_DIN_RECORD *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ATOM_COMMON_RECORD_HEADER sheader%s :\n", IND(indent), (int)(((uint8_t*)&d->sheader)-start), FILL(32)); ATOM_COMMON_RECORD_HEADER_dumper (start, (uint8_t*) &d->sheader, indent+1);
    printf ("%s%04x:  UCHAR ucGPIOID%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucGPIOID)-start), FILL(13), d->ucGPIOID, d->ucGPIOID);
    printf ("%s%04x:  UCHAR ucTVActiveState%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucTVActiveState)-start), FILL(20), d->ucTVActiveState, d->ucTVActiveState);
  }
  return sizeof (ATOM_CONNECTOR_CVTV_SHARE_DIN_RECORD);
}
int ATOM_JTAG_RECORD_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_JTAG_RECORD *d = (ATOM_JTAG_RECORD *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ATOM_COMMON_RECORD_HEADER sheader%s :\n", IND(indent), (int)(((uint8_t*)&d->sheader)-start), FILL(32)); ATOM_COMMON_RECORD_HEADER_dumper (start, (uint8_t*) &d->sheader, indent+1);
    printf ("%s%04x:  UCHAR ucTMSGPIO_ID%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucTMSGPIO_ID)-start), FILL(17), d->ucTMSGPIO_ID, d->ucTMSGPIO_ID);
    printf ("%s%04x:  UCHAR ucTMSGPIOState%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucTMSGPIOState)-start), FILL(19), d->ucTMSGPIOState, d->ucTMSGPIOState);
    printf ("%s%04x:  UCHAR ucTCKGPIO_ID%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucTCKGPIO_ID)-start), FILL(17), d->ucTCKGPIO_ID, d->ucTCKGPIO_ID);
    printf ("%s%04x:  UCHAR ucTCKGPIOState%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucTCKGPIOState)-start), FILL(19), d->ucTCKGPIOState, d->ucTCKGPIOState);
    printf ("%s%04x:  UCHAR ucTDOGPIO_ID%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucTDOGPIO_ID)-start), FILL(17), d->ucTDOGPIO_ID, d->ucTDOGPIO_ID);
    printf ("%s%04x:  UCHAR ucTDOGPIOState%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucTDOGPIOState)-start), FILL(19), d->ucTDOGPIOState, d->ucTDOGPIOState);
    printf ("%s%04x:  UCHAR ucTDIGPIO_ID%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucTDIGPIO_ID)-start), FILL(17), d->ucTDIGPIO_ID, d->ucTDIGPIO_ID);
    printf ("%s%04x:  UCHAR ucTDIGPIOState%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucTDIGPIOState)-start), FILL(19), d->ucTDIGPIOState, d->ucTDIGPIOState);
    for (i = 0; i < 2; i++) {
      printf ("%s%04x:  UCHAR ucPadding%s [%d] = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucPadding[i])-start), FILL(18+(i>9)), i, d->ucPadding[i], d->ucPadding[i]); }
  }
  return sizeof (ATOM_JTAG_RECORD);
}
int ATOM_GPIO_PIN_CONTROL_PAIR_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_GPIO_PIN_CONTROL_PAIR *d = (ATOM_GPIO_PIN_CONTROL_PAIR *) data;
  int i;
  if (d) {
    printf ("%s%04x:  UCHAR ucGPIOID%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucGPIOID)-start), FILL(13), d->ucGPIOID, d->ucGPIOID);
    printf ("%s%04x:  UCHAR ucGPIO_PinState%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucGPIO_PinState)-start), FILL(20), d->ucGPIO_PinState, d->ucGPIO_PinState);
  }
  return sizeof (ATOM_GPIO_PIN_CONTROL_PAIR);
}
int ATOM_OBJECT_GPIO_CNTL_RECORD_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_OBJECT_GPIO_CNTL_RECORD *d = (ATOM_OBJECT_GPIO_CNTL_RECORD *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ATOM_COMMON_RECORD_HEADER sheader%s :\n", IND(indent), (int)(((uint8_t*)&d->sheader)-start), FILL(32)); ATOM_COMMON_RECORD_HEADER_dumper (start, (uint8_t*) &d->sheader, indent+1);
    printf ("%s%04x:  UCHAR ucFlags%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucFlags)-start), FILL(12), d->ucFlags, d->ucFlags);
    printf ("%s%04x:  UCHAR ucNumberOfPins%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucNumberOfPins)-start), FILL(19), d->ucNumberOfPins, d->ucNumberOfPins);
    for (i = 0; i < 1; i++) {
      printf ("%s%04x:  ATOM_GPIO_PIN_CONTROL_PAIR asGpio%s [%d] :\n", IND(indent), (int)(((uint8_t*)&d->asGpio[i])-start), FILL(36+(i>9)), i); ATOM_GPIO_PIN_CONTROL_PAIR_dumper (start, (uint8_t*) &d->asGpio[i], indent+1); }
  }
  return sizeof (ATOM_OBJECT_GPIO_CNTL_RECORD);
}
int ATOM_ENCODER_DVO_CF_RECORD_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_ENCODER_DVO_CF_RECORD *d = (ATOM_ENCODER_DVO_CF_RECORD *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ATOM_COMMON_RECORD_HEADER sheader%s :\n", IND(indent), (int)(((uint8_t*)&d->sheader)-start), FILL(32)); ATOM_COMMON_RECORD_HEADER_dumper (start, (uint8_t*) &d->sheader, indent+1);
    printf ("%s%04x:  ULONG ulStrengthControl%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulStrengthControl)-start), FILL(22), d->ulStrengthControl, d->ulStrengthControl);
    for (i = 0; i < 2; i++) {
      printf ("%s%04x:  UCHAR ucPadding%s [%d] = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucPadding[i])-start), FILL(18+(i>9)), i, d->ucPadding[i], d->ucPadding[i]); }
  }
  return sizeof (ATOM_ENCODER_DVO_CF_RECORD);
}
int ATOM_ENCODER_CAP_RECORD_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_ENCODER_CAP_RECORD *d = (ATOM_ENCODER_CAP_RECORD *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ATOM_COMMON_RECORD_HEADER sheader%s :\n", IND(indent), (int)(((uint8_t*)&d->sheader)-start), FILL(32)); ATOM_COMMON_RECORD_HEADER_dumper (start, (uint8_t*) &d->sheader, indent+1);
    printf ("%s  <unparsable> line 2623:   union {\n%sskipping...\n", IND(indent), IND(indent));
  }
  return sizeof (ATOM_ENCODER_CAP_RECORD);
}
int ATOM_CONNECTOR_CF_RECORD_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_CONNECTOR_CF_RECORD *d = (ATOM_CONNECTOR_CF_RECORD *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ATOM_COMMON_RECORD_HEADER sheader%s :\n", IND(indent), (int)(((uint8_t*)&d->sheader)-start), FILL(32)); ATOM_COMMON_RECORD_HEADER_dumper (start, (uint8_t*) &d->sheader, indent+1);
    printf ("%s%04x:  USHORT usMaxPixClk%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usMaxPixClk)-start), FILL(17), d->usMaxPixClk, d->usMaxPixClk);
    printf ("%s%04x:  UCHAR ucFlowCntlGpioId%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucFlowCntlGpioId)-start), FILL(21), d->ucFlowCntlGpioId, d->ucFlowCntlGpioId);
    printf ("%s%04x:  UCHAR ucSwapCntlGpioId%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucSwapCntlGpioId)-start), FILL(21), d->ucSwapCntlGpioId, d->ucSwapCntlGpioId);
    printf ("%s%04x:  UCHAR ucConnectedDvoBundle%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucConnectedDvoBundle)-start), FILL(25), d->ucConnectedDvoBundle, d->ucConnectedDvoBundle);
    printf ("%s%04x:  UCHAR ucPadding%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucPadding)-start), FILL(14), d->ucPadding, d->ucPadding);
  }
  return sizeof (ATOM_CONNECTOR_CF_RECORD);
}
int ATOM_CONNECTOR_HARDCODE_DTD_RECORD_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_CONNECTOR_HARDCODE_DTD_RECORD *d = (ATOM_CONNECTOR_HARDCODE_DTD_RECORD *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ATOM_COMMON_RECORD_HEADER sheader%s :\n", IND(indent), (int)(((uint8_t*)&d->sheader)-start), FILL(32)); ATOM_COMMON_RECORD_HEADER_dumper (start, (uint8_t*) &d->sheader, indent+1);
    printf ("%s%04x:  ATOM_DTD_FORMAT asTiming%s :\n", IND(indent), (int)(((uint8_t*)&d->asTiming)-start), FILL(23)); ATOM_DTD_FORMAT_dumper (start, (uint8_t*) &d->asTiming, indent+1);
  }
  return sizeof (ATOM_CONNECTOR_HARDCODE_DTD_RECORD);
}
int ATOM_CONNECTOR_PCIE_SUBCONNECTOR_RECORD_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_CONNECTOR_PCIE_SUBCONNECTOR_RECORD *d = (ATOM_CONNECTOR_PCIE_SUBCONNECTOR_RECORD *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ATOM_COMMON_RECORD_HEADER sheader%s :\n", IND(indent), (int)(((uint8_t*)&d->sheader)-start), FILL(32)); ATOM_COMMON_RECORD_HEADER_dumper (start, (uint8_t*) &d->sheader, indent+1);
    printf ("%s%04x:  UCHAR ucSubConnectorType%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucSubConnectorType)-start), FILL(23), d->ucSubConnectorType, d->ucSubConnectorType);
    printf ("%s%04x:  UCHAR ucReserved%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucReserved)-start), FILL(15), d->ucReserved, d->ucReserved);
  }
  return sizeof (ATOM_CONNECTOR_PCIE_SUBCONNECTOR_RECORD);
}
int ATOM_ROUTER_DDC_PATH_SELECT_RECORD_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_ROUTER_DDC_PATH_SELECT_RECORD *d = (ATOM_ROUTER_DDC_PATH_SELECT_RECORD *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ATOM_COMMON_RECORD_HEADER sheader%s :\n", IND(indent), (int)(((uint8_t*)&d->sheader)-start), FILL(32)); ATOM_COMMON_RECORD_HEADER_dumper (start, (uint8_t*) &d->sheader, indent+1);
    printf ("%s%04x:  UCHAR ucMuxType%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucMuxType)-start), FILL(14), d->ucMuxType, d->ucMuxType);
    printf ("%s%04x:  UCHAR ucMuxControlPin%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucMuxControlPin)-start), FILL(20), d->ucMuxControlPin, d->ucMuxControlPin);
    for (i = 0; i < 2; i++) {
      printf ("%s%04x:  UCHAR ucMuxState%s [%d] = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucMuxState[i])-start), FILL(19+(i>9)), i, d->ucMuxState[i], d->ucMuxState[i]); }
  }
  return sizeof (ATOM_ROUTER_DDC_PATH_SELECT_RECORD);
}
int ATOM_ROUTER_DATA_CLOCK_PATH_SELECT_RECORD_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_ROUTER_DATA_CLOCK_PATH_SELECT_RECORD *d = (ATOM_ROUTER_DATA_CLOCK_PATH_SELECT_RECORD *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ATOM_COMMON_RECORD_HEADER sheader%s :\n", IND(indent), (int)(((uint8_t*)&d->sheader)-start), FILL(32)); ATOM_COMMON_RECORD_HEADER_dumper (start, (uint8_t*) &d->sheader, indent+1);
    printf ("%s%04x:  UCHAR ucMuxType%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucMuxType)-start), FILL(14), d->ucMuxType, d->ucMuxType);
    printf ("%s%04x:  UCHAR ucMuxControlPin%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucMuxControlPin)-start), FILL(20), d->ucMuxControlPin, d->ucMuxControlPin);
    for (i = 0; i < 2; i++) {
      printf ("%s%04x:  UCHAR ucMuxState%s [%d] = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucMuxState[i])-start), FILL(19+(i>9)), i, d->ucMuxState[i], d->ucMuxState[i]); }
  }
  return sizeof (ATOM_ROUTER_DATA_CLOCK_PATH_SELECT_RECORD);
}
int ATOM_CONNECTOR_HPDPIN_LUT_RECORD_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_CONNECTOR_HPDPIN_LUT_RECORD *d = (ATOM_CONNECTOR_HPDPIN_LUT_RECORD *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ATOM_COMMON_RECORD_HEADER sheader%s :\n", IND(indent), (int)(((uint8_t*)&d->sheader)-start), FILL(32)); ATOM_COMMON_RECORD_HEADER_dumper (start, (uint8_t*) &d->sheader, indent+1);
    for (i = 0; i < 8; i++) {
      printf ("%s%04x:  UCHAR ucHPDPINMap%s [%d] = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucHPDPINMap[i])-start), FILL(20+(i>9)), i, d->ucHPDPINMap[i], d->ucHPDPINMap[i]); }
  }
  return sizeof (ATOM_CONNECTOR_HPDPIN_LUT_RECORD);
}
int ATOM_CONNECTOR_AUXDDC_LUT_RECORD_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_CONNECTOR_AUXDDC_LUT_RECORD *d = (ATOM_CONNECTOR_AUXDDC_LUT_RECORD *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ATOM_COMMON_RECORD_HEADER sheader%s :\n", IND(indent), (int)(((uint8_t*)&d->sheader)-start), FILL(32)); ATOM_COMMON_RECORD_HEADER_dumper (start, (uint8_t*) &d->sheader, indent+1);
    for (i = 0; i < 8; i++) {
      printf ("%s%04x:  ATOM_I2C_ID_CONFIG ucAUXDDCMap%s [%d] :\n", IND(indent), (int)(((uint8_t*)&d->ucAUXDDCMap[i])-start), FILL(33+(i>9)), i); ATOM_I2C_ID_CONFIG_dumper (start, (uint8_t*) &d->ucAUXDDCMap[i], indent+1); }
  }
  return sizeof (ATOM_CONNECTOR_AUXDDC_LUT_RECORD);
}
int ATOM_OBJECT_LINK_RECORD_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_OBJECT_LINK_RECORD *d = (ATOM_OBJECT_LINK_RECORD *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ATOM_COMMON_RECORD_HEADER sheader%s :\n", IND(indent), (int)(((uint8_t*)&d->sheader)-start), FILL(32)); ATOM_COMMON_RECORD_HEADER_dumper (start, (uint8_t*) &d->sheader, indent+1);
    printf ("%s%04x:  USHORT usObjectID%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usObjectID)-start), FILL(16), d->usObjectID, d->usObjectID);
  }
  return sizeof (ATOM_OBJECT_LINK_RECORD);
}
int ATOM_CONNECTOR_REMOTE_CAP_RECORD_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_CONNECTOR_REMOTE_CAP_RECORD *d = (ATOM_CONNECTOR_REMOTE_CAP_RECORD *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ATOM_COMMON_RECORD_HEADER sheader%s :\n", IND(indent), (int)(((uint8_t*)&d->sheader)-start), FILL(32)); ATOM_COMMON_RECORD_HEADER_dumper (start, (uint8_t*) &d->sheader, indent+1);
    printf ("%s%04x:  USHORT usReserved%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usReserved)-start), FILL(16), d->usReserved, d->usReserved);
  }
  return sizeof (ATOM_CONNECTOR_REMOTE_CAP_RECORD);
}
int ATOM_VOLTAGE_INFO_HEADER_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_VOLTAGE_INFO_HEADER *d = (ATOM_VOLTAGE_INFO_HEADER *) data;
  int i;
  if (d) {
    printf ("%s%04x:  USHORT usVDDCBaseLevel%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usVDDCBaseLevel)-start), FILL(21), d->usVDDCBaseLevel, d->usVDDCBaseLevel);
    printf ("%s%04x:  USHORT usReserved%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usReserved)-start), FILL(16), d->usReserved, d->usReserved);
    printf ("%s%04x:  UCHAR ucNumOfVoltageEntries%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucNumOfVoltageEntries)-start), FILL(26), d->ucNumOfVoltageEntries, d->ucNumOfVoltageEntries);
    printf ("%s%04x:  UCHAR ucBytesPerVoltageEntry%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucBytesPerVoltageEntry)-start), FILL(27), d->ucBytesPerVoltageEntry, d->ucBytesPerVoltageEntry);
    printf ("%s%04x:  UCHAR ucVoltageStep%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucVoltageStep)-start), FILL(18), d->ucVoltageStep, d->ucVoltageStep);
    printf ("%s%04x:  UCHAR ucDefaultVoltageEntry%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucDefaultVoltageEntry)-start), FILL(26), d->ucDefaultVoltageEntry, d->ucDefaultVoltageEntry);
    printf ("%s%04x:  UCHAR ucVoltageControlI2cLine%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucVoltageControlI2cLine)-start), FILL(28), d->ucVoltageControlI2cLine, d->ucVoltageControlI2cLine);
    printf ("%s%04x:  UCHAR ucVoltageControlAddress%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucVoltageControlAddress)-start), FILL(28), d->ucVoltageControlAddress, d->ucVoltageControlAddress);
    printf ("%s%04x:  UCHAR ucVoltageControlOffset%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucVoltageControlOffset)-start), FILL(27), d->ucVoltageControlOffset, d->ucVoltageControlOffset);
  }
  return sizeof (ATOM_VOLTAGE_INFO_HEADER);
}
int ATOM_VOLTAGE_INFO_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_VOLTAGE_INFO *d = (ATOM_VOLTAGE_INFO *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ATOM_COMMON_TABLE_HEADER sHeader%s :\n", IND(indent), (int)(((uint8_t*)&d->sHeader)-start), FILL(31)); ATOM_COMMON_TABLE_HEADER_dumper (start, (uint8_t*) &d->sHeader, indent+1);
    printf ("%s%04x:  ATOM_VOLTAGE_INFO_HEADER viHeader%s :\n", IND(indent), (int)(((uint8_t*)&d->viHeader)-start), FILL(32)); ATOM_VOLTAGE_INFO_HEADER_dumper (start, (uint8_t*) &d->viHeader, indent+1);
    for (i = 0; i < 64; i++) {
      printf ("%s%04x:  UCHAR ucVoltageEntries%s [%d] = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucVoltageEntries[i])-start), FILL(25+(i>9)), i, d->ucVoltageEntries[i], d->ucVoltageEntries[i]); }
  }
  return sizeof (ATOM_VOLTAGE_INFO);
}
int ATOM_VOLTAGE_FORMULA_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_VOLTAGE_FORMULA *d = (ATOM_VOLTAGE_FORMULA *) data;
  int i;
  if (d) {
    printf ("%s%04x:  USHORT usVoltageBaseLevel%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usVoltageBaseLevel)-start), FILL(24), d->usVoltageBaseLevel, d->usVoltageBaseLevel);
    printf ("%s%04x:  USHORT usVoltageStep%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usVoltageStep)-start), FILL(19), d->usVoltageStep, d->usVoltageStep);
    printf ("%s%04x:  UCHAR ucNumOfVoltageEntries%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucNumOfVoltageEntries)-start), FILL(26), d->ucNumOfVoltageEntries, d->ucNumOfVoltageEntries);
    printf ("%s%04x:  UCHAR ucFlag%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucFlag)-start), FILL(11), d->ucFlag, d->ucFlag);
    printf ("%s%04x:  UCHAR ucBaseVID%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucBaseVID)-start), FILL(14), d->ucBaseVID, d->ucBaseVID);
    printf ("%s%04x:  UCHAR ucReserved%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucReserved)-start), FILL(15), d->ucReserved, d->ucReserved);
    for (i = 0; i < (d->ucNumOfVoltageEntries); i++) {
      printf ("%s%04x:  UCHAR ucVIDAdjustEntries%s [%d] = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucVIDAdjustEntries[i])-start), FILL(27+(i>9)), i, d->ucVIDAdjustEntries[i], d->ucVIDAdjustEntries[i]); }
  }
  return sizeof (ATOM_VOLTAGE_FORMULA);
}
int VOLTAGE_LUT_ENTRY_dumper (uint8_t *start, uint8_t *data, int indent) {
  VOLTAGE_LUT_ENTRY *d = (VOLTAGE_LUT_ENTRY *) data;
  int i;
  if (d) {
    printf ("%s%04x:  USHORT usVoltageCode%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usVoltageCode)-start), FILL(19), d->usVoltageCode, d->usVoltageCode);
    printf ("%s%04x:  USHORT usVoltageValue%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usVoltageValue)-start), FILL(20), d->usVoltageValue, d->usVoltageValue);
  }
  return sizeof (VOLTAGE_LUT_ENTRY);
}
int ATOM_VOLTAGE_FORMULA_V2_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_VOLTAGE_FORMULA_V2 *d = (ATOM_VOLTAGE_FORMULA_V2 *) data;
  int i;
  if (d) {
    printf ("%s%04x:  UCHAR ucNumOfVoltageEntries%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucNumOfVoltageEntries)-start), FILL(26), d->ucNumOfVoltageEntries, d->ucNumOfVoltageEntries);
    for (i = 0; i < 3; i++) {
      printf ("%s%04x:  UCHAR ucReserved%s [%d] = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucReserved[i])-start), FILL(19+(i>9)), i, d->ucReserved[i], d->ucReserved[i]); }
    for (i = 0; i < 32; i++) {
      printf ("%s%04x:  VOLTAGE_LUT_ENTRY asVIDAdjustEntries%s [%d] :\n", IND(indent), (int)(((uint8_t*)&d->asVIDAdjustEntries[i])-start), FILL(39+(i>9)), i); VOLTAGE_LUT_ENTRY_dumper (start, (uint8_t*) &d->asVIDAdjustEntries[i], indent+1); }
  }
  return sizeof (ATOM_VOLTAGE_FORMULA_V2);
}
int ATOM_VOLTAGE_CONTROL_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_VOLTAGE_CONTROL *d = (ATOM_VOLTAGE_CONTROL *) data;
  int i;
  if (d) {
    printf ("%s%04x:  UCHAR ucVoltageControlId%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucVoltageControlId)-start), FILL(23), d->ucVoltageControlId, d->ucVoltageControlId);
    printf ("%s%04x:  UCHAR ucVoltageControlI2cLine%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucVoltageControlI2cLine)-start), FILL(28), d->ucVoltageControlI2cLine, d->ucVoltageControlI2cLine);
    printf ("%s%04x:  UCHAR ucVoltageControlAddress%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucVoltageControlAddress)-start), FILL(28), d->ucVoltageControlAddress, d->ucVoltageControlAddress);
    printf ("%s%04x:  UCHAR ucVoltageControlOffset%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucVoltageControlOffset)-start), FILL(27), d->ucVoltageControlOffset, d->ucVoltageControlOffset);
    printf ("%s%04x:  USHORT usGpioPin_AIndex%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usGpioPin_AIndex)-start), FILL(22), d->usGpioPin_AIndex, d->usGpioPin_AIndex);
    for (i = 0; i < 9; i++) {
      printf ("%s%04x:  UCHAR ucGpioPinBitShift%s [%d] = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucGpioPinBitShift[i])-start), FILL(26+(i>9)), i, d->ucGpioPinBitShift[i], d->ucGpioPinBitShift[i]); }
    printf ("%s%04x:  UCHAR ucReserved%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucReserved)-start), FILL(15), d->ucReserved, d->ucReserved);
  }
  return sizeof (ATOM_VOLTAGE_CONTROL);
}
int ATOM_VOLTAGE_OBJECT_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_VOLTAGE_OBJECT *d = (ATOM_VOLTAGE_OBJECT *) data;
  int i;
  if (d) {
    printf ("%s%04x:  UCHAR ucVoltageType%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucVoltageType)-start), FILL(18), d->ucVoltageType, d->ucVoltageType);
    printf ("%s%04x:  UCHAR ucSize%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucSize)-start), FILL(11), d->ucSize, d->ucSize);
    printf ("%s%04x:  ATOM_VOLTAGE_CONTROL asControl%s :\n", IND(indent), (int)(((uint8_t*)&d->asControl)-start), FILL(29)); ATOM_VOLTAGE_CONTROL_dumper (start, (uint8_t*) &d->asControl, indent+1);
    printf ("%s%04x:  ATOM_VOLTAGE_FORMULA asFormula%s :\n", IND(indent), (int)(((uint8_t*)&d->asFormula)-start), FILL(29)); ATOM_VOLTAGE_FORMULA_dumper (start, (uint8_t*) &d->asFormula, indent+1);
  }
  return sizeof (ATOM_VOLTAGE_OBJECT);
}
int ATOM_VOLTAGE_OBJECT_V2_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_VOLTAGE_OBJECT_V2 *d = (ATOM_VOLTAGE_OBJECT_V2 *) data;
  int i;
  if (d) {
    printf ("%s%04x:  UCHAR ucVoltageType%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucVoltageType)-start), FILL(18), d->ucVoltageType, d->ucVoltageType);
    printf ("%s%04x:  UCHAR ucSize%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucSize)-start), FILL(11), d->ucSize, d->ucSize);
    printf ("%s%04x:  ATOM_VOLTAGE_CONTROL asControl%s :\n", IND(indent), (int)(((uint8_t*)&d->asControl)-start), FILL(29)); ATOM_VOLTAGE_CONTROL_dumper (start, (uint8_t*) &d->asControl, indent+1);
    printf ("%s%04x:  ATOM_VOLTAGE_FORMULA_V2 asFormula%s :\n", IND(indent), (int)(((uint8_t*)&d->asFormula)-start), FILL(32)); ATOM_VOLTAGE_FORMULA_V2_dumper (start, (uint8_t*) &d->asFormula, indent+1);
  }
  return sizeof (ATOM_VOLTAGE_OBJECT_V2);
}
int ATOM_VOLTAGE_OBJECT_INFO_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_VOLTAGE_OBJECT_INFO *d = (ATOM_VOLTAGE_OBJECT_INFO *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ATOM_COMMON_TABLE_HEADER sHeader%s :\n", IND(indent), (int)(((uint8_t*)&d->sHeader)-start), FILL(31)); ATOM_COMMON_TABLE_HEADER_dumper (start, (uint8_t*) &d->sHeader, indent+1);
    for (i = 0; i < (count_ATOM_VOLTAGE_OBJECT_INFO_asVoltageObj(d)); i++) {
      printf ("%s%04x:  ATOM_VOLTAGE_OBJECT asVoltageObj%s [%d] :\n", IND(indent), (int)(((uint8_t*)&*(offset_ATOM_VOLTAGE_OBJECT_INFO_asVoltageObj(d,i)))-start), FILL(35+(i>9)), i); ATOM_VOLTAGE_OBJECT_dumper (start, (uint8_t*) &*(offset_ATOM_VOLTAGE_OBJECT_INFO_asVoltageObj(d,i)), indent+1); }
  }
  return 0;
}
int ATOM_VOLTAGE_OBJECT_INFO_V2_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_VOLTAGE_OBJECT_INFO_V2 *d = (ATOM_VOLTAGE_OBJECT_INFO_V2 *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ATOM_COMMON_TABLE_HEADER sHeader%s :\n", IND(indent), (int)(((uint8_t*)&d->sHeader)-start), FILL(31)); ATOM_COMMON_TABLE_HEADER_dumper (start, (uint8_t*) &d->sHeader, indent+1);
    for (i = 0; i < 3; i++) {
      printf ("%s%04x:  ATOM_VOLTAGE_OBJECT_V2 asVoltageObj%s [%d] :\n", IND(indent), (int)(((uint8_t*)&d->asVoltageObj[i])-start), FILL(38+(i>9)), i); ATOM_VOLTAGE_OBJECT_V2_dumper (start, (uint8_t*) &d->asVoltageObj[i], indent+1); }
  }
  return sizeof (ATOM_VOLTAGE_OBJECT_INFO_V2);
}
int ATOM_LEAKID_VOLTAGE_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_LEAKID_VOLTAGE *d = (ATOM_LEAKID_VOLTAGE *) data;
  int i;
  if (d) {
    printf ("%s%04x:  UCHAR ucLeakageId%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucLeakageId)-start), FILL(16), d->ucLeakageId, d->ucLeakageId);
    printf ("%s%04x:  UCHAR ucReserved%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucReserved)-start), FILL(15), d->ucReserved, d->ucReserved);
    printf ("%s%04x:  USHORT usVoltage%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usVoltage)-start), FILL(15), d->usVoltage, d->usVoltage);
  }
  return sizeof (ATOM_LEAKID_VOLTAGE);
}
int ATOM_ASIC_PROFILE_VOLTAGE_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_ASIC_PROFILE_VOLTAGE *d = (ATOM_ASIC_PROFILE_VOLTAGE *) data;
  int i;
  if (d) {
    printf ("%s%04x:  UCHAR ucProfileId%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucProfileId)-start), FILL(16), d->ucProfileId, d->ucProfileId);
    printf ("%s%04x:  UCHAR ucReserved%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucReserved)-start), FILL(15), d->ucReserved, d->ucReserved);
    printf ("%s%04x:  USHORT usSize%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usSize)-start), FILL(12), d->usSize, d->usSize);
    printf ("%s%04x:  USHORT usEfuseSpareStartAddr%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usEfuseSpareStartAddr)-start), FILL(27), d->usEfuseSpareStartAddr, d->usEfuseSpareStartAddr);
    for (i = 0; i < 8; i++) {
      printf ("%s%04x:  USHORT usFuseIndex%s [%d] = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usFuseIndex[i])-start), FILL(21+(i>9)), i, d->usFuseIndex[i], d->usFuseIndex[i]); }
    for (i = 0; i < ((d->usSize - offsetof(ATOM_ASIC_PROFILE_VOLTAGE,asLeakVol)) / sizeof(ATOM_LEAKID_VOLTAGE)); i++) {
      printf ("%s%04x:  ATOM_LEAKID_VOLTAGE asLeakVol%s [%d] :\n", IND(indent), (int)(((uint8_t*)&d->asLeakVol[i])-start), FILL(32+(i>9)), i); ATOM_LEAKID_VOLTAGE_dumper (start, (uint8_t*) &d->asLeakVol[i], indent+1); }
  }
  return sizeof (ATOM_ASIC_PROFILE_VOLTAGE);
}
int ATOM_ASIC_PROFILING_INFO_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_ASIC_PROFILING_INFO *d = (ATOM_ASIC_PROFILING_INFO *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ATOM_COMMON_TABLE_HEADER asHeader%s :\n", IND(indent), (int)(((uint8_t*)&d->asHeader)-start), FILL(32)); ATOM_COMMON_TABLE_HEADER_dumper (start, (uint8_t*) &d->asHeader, indent+1);
    printf ("%s%04x:  ATOM_ASIC_PROFILE_VOLTAGE asVoltage%s :\n", IND(indent), (int)(((uint8_t*)&d->asVoltage)-start), FILL(34)); ATOM_ASIC_PROFILE_VOLTAGE_dumper (start, (uint8_t*) &d->asVoltage, indent+1);
  }
  return sizeof (ATOM_ASIC_PROFILING_INFO);
}
int ATOM_POWER_SOURCE_OBJECT_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_POWER_SOURCE_OBJECT *d = (ATOM_POWER_SOURCE_OBJECT *) data;
  int i;
  if (d) {
    printf ("%s%04x:  UCHAR ucPwrSrcId%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucPwrSrcId)-start), FILL(15), d->ucPwrSrcId, d->ucPwrSrcId);
    printf ("%s%04x:  UCHAR ucPwrSensorType%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucPwrSensorType)-start), FILL(20), d->ucPwrSensorType, d->ucPwrSensorType);
    printf ("%s%04x:  UCHAR ucPwrSensId%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucPwrSensId)-start), FILL(16), d->ucPwrSensId, d->ucPwrSensId);
    printf ("%s%04x:  UCHAR ucPwrSensSlaveAddr%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucPwrSensSlaveAddr)-start), FILL(23), d->ucPwrSensSlaveAddr, d->ucPwrSensSlaveAddr);
    printf ("%s%04x:  UCHAR ucPwrSensRegIndex%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucPwrSensRegIndex)-start), FILL(22), d->ucPwrSensRegIndex, d->ucPwrSensRegIndex);
    printf ("%s%04x:  UCHAR ucPwrSensRegBitMask%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucPwrSensRegBitMask)-start), FILL(24), d->ucPwrSensRegBitMask, d->ucPwrSensRegBitMask);
    printf ("%s%04x:  UCHAR ucPwrSensActiveState%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucPwrSensActiveState)-start), FILL(25), d->ucPwrSensActiveState, d->ucPwrSensActiveState);
    for (i = 0; i < 3; i++) {
      printf ("%s%04x:  UCHAR ucReserve%s [%d] = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucReserve[i])-start), FILL(18+(i>9)), i, d->ucReserve[i], d->ucReserve[i]); }
    printf ("%s%04x:  USHORT usSensPwr%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usSensPwr)-start), FILL(15), d->usSensPwr, d->usSensPwr);
  }
  return sizeof (ATOM_POWER_SOURCE_OBJECT);
}
int ATOM_POWER_SOURCE_INFO_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_POWER_SOURCE_INFO *d = (ATOM_POWER_SOURCE_INFO *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ATOM_COMMON_TABLE_HEADER asHeader%s :\n", IND(indent), (int)(((uint8_t*)&d->asHeader)-start), FILL(32)); ATOM_COMMON_TABLE_HEADER_dumper (start, (uint8_t*) &d->asHeader, indent+1);
    for (i = 0; i < 16; i++) {
      printf ("%s%04x:  UCHAR asPwrbehave%s [%d] = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->asPwrbehave[i])-start), FILL(20+(i>9)), i, d->asPwrbehave[i], d->asPwrbehave[i]); }
    for (i = 0; i < COUNT_REMAINDER (ATOM_POWER_SOURCE_INFO, asPwrObj[0], ATOM_POWER_SOURCE_OBJECT); i++) {
      printf ("%s%04x:  ATOM_POWER_SOURCE_OBJECT asPwrObj%s [%d] :\n", IND(indent), (int)(((uint8_t*)&d->asPwrObj[i])-start), FILL(36+(i>9)), i); ATOM_POWER_SOURCE_OBJECT_dumper (start, (uint8_t*) &d->asPwrObj[i], indent+1); }
  }
  return RETURN_REMAINDER (ATOM_POWER_SOURCE_INFO, asPwrObj[0], ATOM_POWER_SOURCE_OBJECT);
}
int ATOM_CLK_VOLT_CAPABILITY_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_CLK_VOLT_CAPABILITY *d = (ATOM_CLK_VOLT_CAPABILITY *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ULONG ulVoltageIndex%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulVoltageIndex)-start), FILL(19), d->ulVoltageIndex, d->ulVoltageIndex);
    printf ("%s%04x:  ULONG ulMaximumSupportedCLK%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulMaximumSupportedCLK)-start), FILL(26), d->ulMaximumSupportedCLK, d->ulMaximumSupportedCLK);
  }
  return sizeof (ATOM_CLK_VOLT_CAPABILITY);
}
int ATOM_AVAILABLE_SCLK_LIST_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_AVAILABLE_SCLK_LIST *d = (ATOM_AVAILABLE_SCLK_LIST *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ULONG ulSupportedSCLK%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulSupportedSCLK)-start), FILL(20), d->ulSupportedSCLK, d->ulSupportedSCLK);
    printf ("%s%04x:  USHORT usVoltageIndex%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usVoltageIndex)-start), FILL(20), d->usVoltageIndex, d->usVoltageIndex);
    printf ("%s%04x:  USHORT usVoltageID%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usVoltageID)-start), FILL(17), d->usVoltageID, d->usVoltageID);
  }
  return sizeof (ATOM_AVAILABLE_SCLK_LIST);
}
int ATOM_INTEGRATED_SYSTEM_INFO_V6_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_INTEGRATED_SYSTEM_INFO_V6 *d = (ATOM_INTEGRATED_SYSTEM_INFO_V6 *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ATOM_COMMON_TABLE_HEADER sHeader%s :\n", IND(indent), (int)(((uint8_t*)&d->sHeader)-start), FILL(31)); ATOM_COMMON_TABLE_HEADER_dumper (start, (uint8_t*) &d->sHeader, indent+1);
    printf ("%s%04x:  ULONG ulBootUpEngineClock%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulBootUpEngineClock)-start), FILL(24), d->ulBootUpEngineClock, d->ulBootUpEngineClock);
    printf ("%s%04x:  ULONG ulDentistVCOFreq%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulDentistVCOFreq)-start), FILL(21), d->ulDentistVCOFreq, d->ulDentistVCOFreq);
    printf ("%s%04x:  ULONG ulBootUpUMAClock%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulBootUpUMAClock)-start), FILL(21), d->ulBootUpUMAClock, d->ulBootUpUMAClock);
    for (i = 0; i < 4; i++) {
      printf ("%s%04x:  ATOM_CLK_VOLT_CAPABILITY sDISPCLK_Voltage%s [%d] :\n", IND(indent), (int)(((uint8_t*)&d->sDISPCLK_Voltage[i])-start), FILL(44+(i>9)), i); ATOM_CLK_VOLT_CAPABILITY_dumper (start, (uint8_t*) &d->sDISPCLK_Voltage[i], indent+1); }
    printf ("%s%04x:  ULONG ulBootUpReqDisplayVector%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulBootUpReqDisplayVector)-start), FILL(29), d->ulBootUpReqDisplayVector, d->ulBootUpReqDisplayVector);
    printf ("%s%04x:  ULONG ulOtherDisplayMisc%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulOtherDisplayMisc)-start), FILL(23), d->ulOtherDisplayMisc, d->ulOtherDisplayMisc);
    printf ("%s%04x:  ULONG ulGPUCapInfo%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulGPUCapInfo)-start), FILL(17), d->ulGPUCapInfo, d->ulGPUCapInfo);
    printf ("%s%04x:  ULONG ulSB_MMIO_Base_Addr%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulSB_MMIO_Base_Addr)-start), FILL(24), d->ulSB_MMIO_Base_Addr, d->ulSB_MMIO_Base_Addr);
    printf ("%s%04x:  USHORT usRequestedPWMFreqInHz%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usRequestedPWMFreqInHz)-start), FILL(28), d->usRequestedPWMFreqInHz, d->usRequestedPWMFreqInHz);
    printf ("%s%04x:  UCHAR ucHtcTmpLmt%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucHtcTmpLmt)-start), FILL(16), d->ucHtcTmpLmt, d->ucHtcTmpLmt);
    printf ("%s%04x:  UCHAR ucHtcHystLmt%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucHtcHystLmt)-start), FILL(17), d->ucHtcHystLmt, d->ucHtcHystLmt);
    printf ("%s%04x:  ULONG ulMinEngineClock%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulMinEngineClock)-start), FILL(21), d->ulMinEngineClock, d->ulMinEngineClock);
    printf ("%s%04x:  ULONG ulSystemConfig%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulSystemConfig)-start), FILL(19), d->ulSystemConfig, d->ulSystemConfig);
    printf ("%s%04x:  ULONG ulCPUCapInfo%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulCPUCapInfo)-start), FILL(17), d->ulCPUCapInfo, d->ulCPUCapInfo);
    printf ("%s%04x:  USHORT usNBP0Voltage%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usNBP0Voltage)-start), FILL(19), d->usNBP0Voltage, d->usNBP0Voltage);
    printf ("%s%04x:  USHORT usNBP1Voltage%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usNBP1Voltage)-start), FILL(19), d->usNBP1Voltage, d->usNBP1Voltage);
    printf ("%s%04x:  USHORT usBootUpNBVoltage%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usBootUpNBVoltage)-start), FILL(23), d->usBootUpNBVoltage, d->usBootUpNBVoltage);
    printf ("%s%04x:  USHORT usExtDispConnInfoOffset%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usExtDispConnInfoOffset)-start), FILL(29), d->usExtDispConnInfoOffset, d->usExtDispConnInfoOffset);
    printf ("%s%04x:  USHORT usPanelRefreshRateRange%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usPanelRefreshRateRange)-start), FILL(29), d->usPanelRefreshRateRange, d->usPanelRefreshRateRange);
    printf ("%s%04x:  UCHAR ucMemoryType%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucMemoryType)-start), FILL(17), d->ucMemoryType, d->ucMemoryType);
    printf ("%s%04x:  UCHAR ucUMAChannelNumber%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucUMAChannelNumber)-start), FILL(23), d->ucUMAChannelNumber, d->ucUMAChannelNumber);
    for (i = 0; i < 10; i++) {
      printf ("%s%04x:  ULONG ulCSR_M3_ARB_CNTL_DEFAULT%s [%d] = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulCSR_M3_ARB_CNTL_DEFAULT[i])-start), FILL(34+(i>9)), i, d->ulCSR_M3_ARB_CNTL_DEFAULT[i], d->ulCSR_M3_ARB_CNTL_DEFAULT[i]); }
    for (i = 0; i < 10; i++) {
      printf ("%s%04x:  ULONG ulCSR_M3_ARB_CNTL_UVD%s [%d] = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulCSR_M3_ARB_CNTL_UVD[i])-start), FILL(30+(i>9)), i, d->ulCSR_M3_ARB_CNTL_UVD[i], d->ulCSR_M3_ARB_CNTL_UVD[i]); }
    for (i = 0; i < 10; i++) {
      printf ("%s%04x:  ULONG ulCSR_M3_ARB_CNTL_FS3D%s [%d] = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulCSR_M3_ARB_CNTL_FS3D[i])-start), FILL(31+(i>9)), i, d->ulCSR_M3_ARB_CNTL_FS3D[i], d->ulCSR_M3_ARB_CNTL_FS3D[i]); }
    for (i = 0; i < 5; i++) {
      printf ("%s%04x:  ATOM_AVAILABLE_SCLK_LIST sAvail_SCLK%s [%d] :\n", IND(indent), (int)(((uint8_t*)&d->sAvail_SCLK[i])-start), FILL(39+(i>9)), i); ATOM_AVAILABLE_SCLK_LIST_dumper (start, (uint8_t*) &d->sAvail_SCLK[i], indent+1); }
    printf ("%s%04x:  ULONG ulGMCRestoreResetTime%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulGMCRestoreResetTime)-start), FILL(26), d->ulGMCRestoreResetTime, d->ulGMCRestoreResetTime);
    printf ("%s%04x:  ULONG ulMinimumNClk%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulMinimumNClk)-start), FILL(18), d->ulMinimumNClk, d->ulMinimumNClk);
    printf ("%s%04x:  ULONG ulIdleNClk%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulIdleNClk)-start), FILL(15), d->ulIdleNClk, d->ulIdleNClk);
    printf ("%s%04x:  ULONG ulDDR_DLL_PowerUpTime%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulDDR_DLL_PowerUpTime)-start), FILL(26), d->ulDDR_DLL_PowerUpTime, d->ulDDR_DLL_PowerUpTime);
    printf ("%s%04x:  ULONG ulDDR_PLL_PowerUpTime%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulDDR_PLL_PowerUpTime)-start), FILL(26), d->ulDDR_PLL_PowerUpTime, d->ulDDR_PLL_PowerUpTime);
    printf ("%s%04x:  USHORT usPCIEClkSSPercentage%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usPCIEClkSSPercentage)-start), FILL(27), d->usPCIEClkSSPercentage, d->usPCIEClkSSPercentage);
    printf ("%s%04x:  USHORT usPCIEClkSSType%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usPCIEClkSSType)-start), FILL(21), d->usPCIEClkSSType, d->usPCIEClkSSType);
    printf ("%s%04x:  USHORT usLvdsSSPercentage%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usLvdsSSPercentage)-start), FILL(24), d->usLvdsSSPercentage, d->usLvdsSSPercentage);
    printf ("%s%04x:  USHORT usLvdsSSpreadRateIn10Hz%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usLvdsSSpreadRateIn10Hz)-start), FILL(29), d->usLvdsSSpreadRateIn10Hz, d->usLvdsSSpreadRateIn10Hz);
    printf ("%s%04x:  USHORT usHDMISSPercentage%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usHDMISSPercentage)-start), FILL(24), d->usHDMISSPercentage, d->usHDMISSPercentage);
    printf ("%s%04x:  USHORT usHDMISSpreadRateIn10Hz%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usHDMISSpreadRateIn10Hz)-start), FILL(29), d->usHDMISSpreadRateIn10Hz, d->usHDMISSpreadRateIn10Hz);
    printf ("%s%04x:  USHORT usDVISSPercentage%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usDVISSPercentage)-start), FILL(23), d->usDVISSPercentage, d->usDVISSPercentage);
    printf ("%s%04x:  USHORT usDVISSpreadRateIn10Hz%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usDVISSpreadRateIn10Hz)-start), FILL(28), d->usDVISSpreadRateIn10Hz, d->usDVISSpreadRateIn10Hz);
    for (i = 0; i < 21; i++) {
      printf ("%s%04x:  ULONG ulReserved3%s [%d] = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulReserved3[i])-start), FILL(20+(i>9)), i, d->ulReserved3[i], d->ulReserved3[i]); }
    printf ("%s%04x:  ATOM_EXTERNAL_DISPLAY_CONNECTION_INFO sExtDispConnInfo%s :\n", IND(indent), (int)(((uint8_t*)&d->sExtDispConnInfo)-start), FILL(53)); ATOM_EXTERNAL_DISPLAY_CONNECTION_INFO_dumper (start, (uint8_t*) &d->sExtDispConnInfo, indent+1);
  }
  return sizeof (ATOM_INTEGRATED_SYSTEM_INFO_V6);
}
int ATOM_I2C_DATA_RECORD_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_I2C_DATA_RECORD *d = (ATOM_I2C_DATA_RECORD *) data;
  int i;
  if (d) {
    printf ("%s%04x:  UCHAR ucNunberOfBytes%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucNunberOfBytes)-start), FILL(20), d->ucNunberOfBytes, d->ucNunberOfBytes);
    for (i = 0; i < 1; i++) {
      printf ("%s%04x:  UCHAR ucI2CData%s [%d] = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucI2CData[i])-start), FILL(18+(i>9)), i, d->ucI2CData[i], d->ucI2CData[i]); }
  }
  return sizeof (ATOM_I2C_DATA_RECORD);
}
int ATOM_I2C_DEVICE_SETUP_INFO_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_I2C_DEVICE_SETUP_INFO *d = (ATOM_I2C_DEVICE_SETUP_INFO *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ATOM_I2C_ID_CONFIG_ACCESS sucI2cId%s :\n", IND(indent), (int)(((uint8_t*)&d->sucI2cId)-start), FILL(33)); ATOM_I2C_ID_CONFIG_ACCESS_dumper (start, (uint8_t*) &d->sucI2cId, indent+1);
    printf ("%s%04x:  UCHAR ucSSChipID%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucSSChipID)-start), FILL(15), d->ucSSChipID, d->ucSSChipID);
    printf ("%s%04x:  UCHAR ucSSChipSlaveAddr%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucSSChipSlaveAddr)-start), FILL(22), d->ucSSChipSlaveAddr, d->ucSSChipSlaveAddr);
    printf ("%s%04x:  UCHAR ucNumOfI2CDataRecords%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucNumOfI2CDataRecords)-start), FILL(26), d->ucNumOfI2CDataRecords, d->ucNumOfI2CDataRecords);
    for (i = 0; i < 1; i++) {
      printf ("%s%04x:  ATOM_I2C_DATA_RECORD asI2CData%s [%d] :\n", IND(indent), (int)(((uint8_t*)&d->asI2CData[i])-start), FILL(33+(i>9)), i); ATOM_I2C_DATA_RECORD_dumper (start, (uint8_t*) &d->asI2CData[i], indent+1); }
  }
  return sizeof (ATOM_I2C_DEVICE_SETUP_INFO);
}
int ATOM_ASIC_MVDD_INFO_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_ASIC_MVDD_INFO *d = (ATOM_ASIC_MVDD_INFO *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ATOM_COMMON_TABLE_HEADER sHeader%s :\n", IND(indent), (int)(((uint8_t*)&d->sHeader)-start), FILL(31)); ATOM_COMMON_TABLE_HEADER_dumper (start, (uint8_t*) &d->sHeader, indent+1);
    for (i = 0; i < 1; i++) {
      printf ("%s%04x:  ATOM_I2C_DEVICE_SETUP_INFO asI2CSetup%s [%d] :\n", IND(indent), (int)(((uint8_t*)&d->asI2CSetup[i])-start), FILL(40+(i>9)), i); ATOM_I2C_DEVICE_SETUP_INFO_dumper (start, (uint8_t*) &d->asI2CSetup[i], indent+1); }
  }
  return sizeof (ATOM_ASIC_MVDD_INFO);
}
int ATOM_ASIC_SS_ASSIGNMENT_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_ASIC_SS_ASSIGNMENT *d = (ATOM_ASIC_SS_ASSIGNMENT *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ULONG ulTargetClockRange%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulTargetClockRange)-start), FILL(23), d->ulTargetClockRange, d->ulTargetClockRange);
    printf ("%s%04x:  USHORT usSpreadSpectrumPercentage%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usSpreadSpectrumPercentage)-start), FILL(32), d->usSpreadSpectrumPercentage, d->usSpreadSpectrumPercentage);
    printf ("%s%04x:  USHORT usSpreadRateInKhz%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usSpreadRateInKhz)-start), FILL(23), d->usSpreadRateInKhz, d->usSpreadRateInKhz);
    printf ("%s%04x:  UCHAR ucClockIndication%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucClockIndication)-start), FILL(22), d->ucClockIndication, d->ucClockIndication);
    printf ("%s%04x:  UCHAR ucSpreadSpectrumMode%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucSpreadSpectrumMode)-start), FILL(25), d->ucSpreadSpectrumMode, d->ucSpreadSpectrumMode);
    for (i = 0; i < 2; i++) {
      printf ("%s%04x:  UCHAR ucReserved%s [%d] = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucReserved[i])-start), FILL(19+(i>9)), i, d->ucReserved[i], d->ucReserved[i]); }
  }
  return sizeof (ATOM_ASIC_SS_ASSIGNMENT);
}
int ATOM_ASIC_SS_ASSIGNMENT_V2_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_ASIC_SS_ASSIGNMENT_V2 *d = (ATOM_ASIC_SS_ASSIGNMENT_V2 *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ULONG ulTargetClockRange%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulTargetClockRange)-start), FILL(23), d->ulTargetClockRange, d->ulTargetClockRange);
    printf ("%s%04x:  USHORT usSpreadSpectrumPercentage%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usSpreadSpectrumPercentage)-start), FILL(32), d->usSpreadSpectrumPercentage, d->usSpreadSpectrumPercentage);
    printf ("%s%04x:  USHORT usSpreadRateIn10Hz%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usSpreadRateIn10Hz)-start), FILL(24), d->usSpreadRateIn10Hz, d->usSpreadRateIn10Hz);
    printf ("%s%04x:  UCHAR ucClockIndication%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucClockIndication)-start), FILL(22), d->ucClockIndication, d->ucClockIndication);
    printf ("%s%04x:  UCHAR ucSpreadSpectrumMode%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucSpreadSpectrumMode)-start), FILL(25), d->ucSpreadSpectrumMode, d->ucSpreadSpectrumMode);
    for (i = 0; i < 2; i++) {
      printf ("%s%04x:  UCHAR ucReserved%s [%d] = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucReserved[i])-start), FILL(19+(i>9)), i, d->ucReserved[i], d->ucReserved[i]); }
  }
  return sizeof (ATOM_ASIC_SS_ASSIGNMENT_V2);
}
int ATOM_ASIC_INTERNAL_SS_INFO_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_ASIC_INTERNAL_SS_INFO *d = (ATOM_ASIC_INTERNAL_SS_INFO *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ATOM_COMMON_TABLE_HEADER sHeader%s :\n", IND(indent), (int)(((uint8_t*)&d->sHeader)-start), FILL(31)); ATOM_COMMON_TABLE_HEADER_dumper (start, (uint8_t*) &d->sHeader, indent+1);
    for (i = 0; i < 4; i++) {
      printf ("%s%04x:  ATOM_ASIC_SS_ASSIGNMENT asSpreadSpectrum%s [%d] :\n", IND(indent), (int)(((uint8_t*)&d->asSpreadSpectrum[i])-start), FILL(43+(i>9)), i); ATOM_ASIC_SS_ASSIGNMENT_dumper (start, (uint8_t*) &d->asSpreadSpectrum[i], indent+1); }
  }
  return sizeof (ATOM_ASIC_INTERNAL_SS_INFO);
}
int ATOM_ASIC_INTERNAL_SS_INFO_V2_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_ASIC_INTERNAL_SS_INFO_V2 *d = (ATOM_ASIC_INTERNAL_SS_INFO_V2 *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ATOM_COMMON_TABLE_HEADER sHeader%s :\n", IND(indent), (int)(((uint8_t*)&d->sHeader)-start), FILL(31)); ATOM_COMMON_TABLE_HEADER_dumper (start, (uint8_t*) &d->sHeader, indent+1);
    for (i = 0; i < 1; i++) {
      printf ("%s%04x:  ATOM_ASIC_SS_ASSIGNMENT_V2 asSpreadSpectrum%s [%d] :\n", IND(indent), (int)(((uint8_t*)&d->asSpreadSpectrum[i])-start), FILL(46+(i>9)), i); ATOM_ASIC_SS_ASSIGNMENT_V2_dumper (start, (uint8_t*) &d->asSpreadSpectrum[i], indent+1); }
  }
  return sizeof (ATOM_ASIC_INTERNAL_SS_INFO_V2);
}
int ATOM_ASIC_SS_ASSIGNMENT_V3_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_ASIC_SS_ASSIGNMENT_V3 *d = (ATOM_ASIC_SS_ASSIGNMENT_V3 *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ULONG ulTargetClockRange%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulTargetClockRange)-start), FILL(23), d->ulTargetClockRange, d->ulTargetClockRange);
    printf ("%s%04x:  USHORT usSpreadSpectrumPercentage%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usSpreadSpectrumPercentage)-start), FILL(32), d->usSpreadSpectrumPercentage, d->usSpreadSpectrumPercentage);
    printf ("%s%04x:  USHORT usSpreadRateIn10Hz%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usSpreadRateIn10Hz)-start), FILL(24), d->usSpreadRateIn10Hz, d->usSpreadRateIn10Hz);
    printf ("%s%04x:  UCHAR ucClockIndication%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucClockIndication)-start), FILL(22), d->ucClockIndication, d->ucClockIndication);
    printf ("%s%04x:  UCHAR ucSpreadSpectrumMode%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucSpreadSpectrumMode)-start), FILL(25), d->ucSpreadSpectrumMode, d->ucSpreadSpectrumMode);
    for (i = 0; i < 2; i++) {
      printf ("%s%04x:  UCHAR ucReserved%s [%d] = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucReserved[i])-start), FILL(19+(i>9)), i, d->ucReserved[i], d->ucReserved[i]); }
  }
  return sizeof (ATOM_ASIC_SS_ASSIGNMENT_V3);
}
int ATOM_ASIC_INTERNAL_SS_INFO_V3_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_ASIC_INTERNAL_SS_INFO_V3 *d = (ATOM_ASIC_INTERNAL_SS_INFO_V3 *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ATOM_COMMON_TABLE_HEADER sHeader%s :\n", IND(indent), (int)(((uint8_t*)&d->sHeader)-start), FILL(31)); ATOM_COMMON_TABLE_HEADER_dumper (start, (uint8_t*) &d->sHeader, indent+1);
    for (i = 0; i < 1; i++) {
      printf ("%s%04x:  ATOM_ASIC_SS_ASSIGNMENT_V3 asSpreadSpectrum%s [%d] :\n", IND(indent), (int)(((uint8_t*)&d->asSpreadSpectrum[i])-start), FILL(46+(i>9)), i); ATOM_ASIC_SS_ASSIGNMENT_V3_dumper (start, (uint8_t*) &d->asSpreadSpectrum[i], indent+1); }
  }
  return sizeof (ATOM_ASIC_INTERNAL_SS_INFO_V3);
}
int MEMORY_PLLINIT_PARAMETERS_dumper (uint8_t *start, uint8_t *data, int indent) {
  MEMORY_PLLINIT_PARAMETERS *d = (MEMORY_PLLINIT_PARAMETERS *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ULONG ulTargetMemoryClock%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulTargetMemoryClock)-start), FILL(24), d->ulTargetMemoryClock, d->ulTargetMemoryClock);
    printf ("%s%04x:  UCHAR ucAction%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucAction)-start), FILL(13), d->ucAction, d->ucAction);
    printf ("%s%04x:  UCHAR ucFbDiv_Hi%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucFbDiv_Hi)-start), FILL(15), d->ucFbDiv_Hi, d->ucFbDiv_Hi);
    printf ("%s%04x:  UCHAR ucFbDiv%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucFbDiv)-start), FILL(12), d->ucFbDiv, d->ucFbDiv);
    printf ("%s%04x:  UCHAR ucPostDiv%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucPostDiv)-start), FILL(14), d->ucPostDiv, d->ucPostDiv);
  }
  return sizeof (MEMORY_PLLINIT_PARAMETERS);
}
int GPIO_PIN_CONTROL_PARAMETERS_dumper (uint8_t *start, uint8_t *data, int indent) {
  GPIO_PIN_CONTROL_PARAMETERS *d = (GPIO_PIN_CONTROL_PARAMETERS *) data;
  int i;
  if (d) {
    printf ("%s%04x:  UCHAR ucGPIO_ID%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucGPIO_ID)-start), FILL(14), d->ucGPIO_ID, d->ucGPIO_ID);
    printf ("%s%04x:  UCHAR ucGPIOBitShift%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucGPIOBitShift)-start), FILL(19), d->ucGPIOBitShift, d->ucGPIOBitShift);
    printf ("%s%04x:  UCHAR ucGPIOBitVal%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucGPIOBitVal)-start), FILL(17), d->ucGPIOBitVal, d->ucGPIOBitVal);
    printf ("%s%04x:  UCHAR ucAction%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucAction)-start), FILL(13), d->ucAction, d->ucAction);
  }
  return sizeof (GPIO_PIN_CONTROL_PARAMETERS);
}
int ENABLE_SCALER_PARAMETERS_dumper (uint8_t *start, uint8_t *data, int indent) {
  ENABLE_SCALER_PARAMETERS *d = (ENABLE_SCALER_PARAMETERS *) data;
  int i;
  if (d) {
    printf ("%s%04x:  UCHAR ucScaler%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucScaler)-start), FILL(13), d->ucScaler, d->ucScaler);
    printf ("%s%04x:  UCHAR ucEnable%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucEnable)-start), FILL(13), d->ucEnable, d->ucEnable);
    printf ("%s%04x:  UCHAR ucTVStandard%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucTVStandard)-start), FILL(17), d->ucTVStandard, d->ucTVStandard);
    for (i = 0; i < 1; i++) {
      printf ("%s%04x:  UCHAR ucPadding%s [%d] = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucPadding[i])-start), FILL(18+(i>9)), i, d->ucPadding[i], d->ucPadding[i]); }
  }
  return sizeof (ENABLE_SCALER_PARAMETERS);
}
int ENABLE_HARDWARE_ICON_CURSOR_PARAMETERS_dumper (uint8_t *start, uint8_t *data, int indent) {
  ENABLE_HARDWARE_ICON_CURSOR_PARAMETERS *d = (ENABLE_HARDWARE_ICON_CURSOR_PARAMETERS *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ULONG usHWIconHorzVertPosn%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->usHWIconHorzVertPosn)-start), FILL(25), d->usHWIconHorzVertPosn, d->usHWIconHorzVertPosn);
    printf ("%s%04x:  UCHAR ucHWIconVertOffset%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucHWIconVertOffset)-start), FILL(23), d->ucHWIconVertOffset, d->ucHWIconVertOffset);
    printf ("%s%04x:  UCHAR ucHWIconHorzOffset%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucHWIconHorzOffset)-start), FILL(23), d->ucHWIconHorzOffset, d->ucHWIconHorzOffset);
    printf ("%s%04x:  UCHAR ucSelection%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucSelection)-start), FILL(16), d->ucSelection, d->ucSelection);
    printf ("%s%04x:  UCHAR ucEnable%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucEnable)-start), FILL(13), d->ucEnable, d->ucEnable);
  }
  return sizeof (ENABLE_HARDWARE_ICON_CURSOR_PARAMETERS);
}
int ENABLE_HARDWARE_ICON_CURSOR_PS_ALLOCATION_dumper (uint8_t *start, uint8_t *data, int indent) {
  ENABLE_HARDWARE_ICON_CURSOR_PS_ALLOCATION *d = (ENABLE_HARDWARE_ICON_CURSOR_PS_ALLOCATION *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ENABLE_HARDWARE_ICON_CURSOR_PARAMETERS sEnableIcon%s :\n", IND(indent), (int)(((uint8_t*)&d->sEnableIcon)-start), FILL(49)); ENABLE_HARDWARE_ICON_CURSOR_PARAMETERS_dumper (start, (uint8_t*) &d->sEnableIcon, indent+1);
    printf ("%s%04x:  ENABLE_CRTC_PARAMETERS sReserved%s :\n", IND(indent), (int)(((uint8_t*)&d->sReserved)-start), FILL(31)); ENABLE_CRTC_PARAMETERS_dumper (start, (uint8_t*) &d->sReserved, indent+1);
  }
  return sizeof (ENABLE_HARDWARE_ICON_CURSOR_PS_ALLOCATION);
}
int ENABLE_GRAPH_SURFACE_PARAMETERS_dumper (uint8_t *start, uint8_t *data, int indent) {
  ENABLE_GRAPH_SURFACE_PARAMETERS *d = (ENABLE_GRAPH_SURFACE_PARAMETERS *) data;
  int i;
  if (d) {
    printf ("%s%04x:  USHORT usHight%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usHight)-start), FILL(13), d->usHight, d->usHight);
    printf ("%s%04x:  USHORT usWidth%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usWidth)-start), FILL(13), d->usWidth, d->usWidth);
    printf ("%s%04x:  UCHAR ucSurface%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucSurface)-start), FILL(14), d->ucSurface, d->ucSurface);
    for (i = 0; i < 3; i++) {
      printf ("%s%04x:  UCHAR ucPadding%s [%d] = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucPadding[i])-start), FILL(18+(i>9)), i, d->ucPadding[i], d->ucPadding[i]); }
  }
  return sizeof (ENABLE_GRAPH_SURFACE_PARAMETERS);
}
int ENABLE_GRAPH_SURFACE_PARAMETERS_V1_2_dumper (uint8_t *start, uint8_t *data, int indent) {
  ENABLE_GRAPH_SURFACE_PARAMETERS_V1_2 *d = (ENABLE_GRAPH_SURFACE_PARAMETERS_V1_2 *) data;
  int i;
  if (d) {
    printf ("%s%04x:  USHORT usHight%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usHight)-start), FILL(13), d->usHight, d->usHight);
    printf ("%s%04x:  USHORT usWidth%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usWidth)-start), FILL(13), d->usWidth, d->usWidth);
    printf ("%s%04x:  UCHAR ucSurface%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucSurface)-start), FILL(14), d->ucSurface, d->ucSurface);
    printf ("%s%04x:  UCHAR ucEnable%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucEnable)-start), FILL(13), d->ucEnable, d->ucEnable);
    for (i = 0; i < 2; i++) {
      printf ("%s%04x:  UCHAR ucPadding%s [%d] = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucPadding[i])-start), FILL(18+(i>9)), i, d->ucPadding[i], d->ucPadding[i]); }
  }
  return sizeof (ENABLE_GRAPH_SURFACE_PARAMETERS_V1_2);
}
int ENABLE_GRAPH_SURFACE_PARAMETERS_V1_3_dumper (uint8_t *start, uint8_t *data, int indent) {
  ENABLE_GRAPH_SURFACE_PARAMETERS_V1_3 *d = (ENABLE_GRAPH_SURFACE_PARAMETERS_V1_3 *) data;
  int i;
  if (d) {
    printf ("%s%04x:  USHORT usHight%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usHight)-start), FILL(13), d->usHight, d->usHight);
    printf ("%s%04x:  USHORT usWidth%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usWidth)-start), FILL(13), d->usWidth, d->usWidth);
    printf ("%s%04x:  UCHAR ucSurface%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucSurface)-start), FILL(14), d->ucSurface, d->ucSurface);
    printf ("%s%04x:  UCHAR ucEnable%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucEnable)-start), FILL(13), d->ucEnable, d->ucEnable);
    printf ("%s%04x:  USHORT usDeviceId%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usDeviceId)-start), FILL(16), d->usDeviceId, d->usDeviceId);
  }
  return sizeof (ENABLE_GRAPH_SURFACE_PARAMETERS_V1_3);
}
int ENABLE_GRAPH_SURFACE_PS_ALLOCATION_dumper (uint8_t *start, uint8_t *data, int indent) {
  ENABLE_GRAPH_SURFACE_PS_ALLOCATION *d = (ENABLE_GRAPH_SURFACE_PS_ALLOCATION *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ENABLE_GRAPH_SURFACE_PARAMETERS sSetSurface%s :\n", IND(indent), (int)(((uint8_t*)&d->sSetSurface)-start), FILL(42)); ENABLE_GRAPH_SURFACE_PARAMETERS_dumper (start, (uint8_t*) &d->sSetSurface, indent+1);
    printf ("%s%04x:  ENABLE_YUV_PARAMETERS sReserved%s :\n", IND(indent), (int)(((uint8_t*)&d->sReserved)-start), FILL(30)); ENABLE_YUV_PARAMETERS_dumper (start, (uint8_t*) &d->sReserved, indent+1);
  }
  return sizeof (ENABLE_GRAPH_SURFACE_PS_ALLOCATION);
}
int MEMORY_CLEAN_UP_PARAMETERS_dumper (uint8_t *start, uint8_t *data, int indent) {
  MEMORY_CLEAN_UP_PARAMETERS *d = (MEMORY_CLEAN_UP_PARAMETERS *) data;
  int i;
  if (d) {
    printf ("%s%04x:  USHORT usMemoryStart%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usMemoryStart)-start), FILL(19), d->usMemoryStart, d->usMemoryStart);
    printf ("%s%04x:  USHORT usMemorySize%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usMemorySize)-start), FILL(18), d->usMemorySize, d->usMemorySize);
  }
  return sizeof (MEMORY_CLEAN_UP_PARAMETERS);
}
int GET_DISPLAY_SURFACE_SIZE_PARAMETERS_dumper (uint8_t *start, uint8_t *data, int indent) {
  GET_DISPLAY_SURFACE_SIZE_PARAMETERS *d = (GET_DISPLAY_SURFACE_SIZE_PARAMETERS *) data;
  int i;
  if (d) {
    printf ("%s%04x:  USHORT usX_Size%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usX_Size)-start), FILL(14), d->usX_Size, d->usX_Size);
    printf ("%s%04x:  USHORT usY_Size%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usY_Size)-start), FILL(14), d->usY_Size, d->usY_Size);
  }
  return sizeof (GET_DISPLAY_SURFACE_SIZE_PARAMETERS);
}
int INDIRECT_IO_ACCESS_dumper (uint8_t *start, uint8_t *data, int indent) {
  INDIRECT_IO_ACCESS *d = (INDIRECT_IO_ACCESS *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ATOM_COMMON_TABLE_HEADER sHeader%s :\n", IND(indent), (int)(((uint8_t*)&d->sHeader)-start), FILL(31)); ATOM_COMMON_TABLE_HEADER_dumper (start, (uint8_t*) &d->sHeader, indent+1);
    for (i = 0; i < -1; i++) {
      printf ("%s%04x:  UCHAR IOAccessSequence%s [%d] = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->IOAccessSequence[i])-start), FILL(25+(i>9)), i, d->IOAccessSequence[i], d->IOAccessSequence[i]); }
  }
  return RETURN_ALL (ATOM_INDIRECT_IO_ACCESS, UCHAR);
}
int ATOM_OEM_INFO_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_OEM_INFO *d = (ATOM_OEM_INFO *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ATOM_COMMON_TABLE_HEADER sHeader%s :\n", IND(indent), (int)(((uint8_t*)&d->sHeader)-start), FILL(31)); ATOM_COMMON_TABLE_HEADER_dumper (start, (uint8_t*) &d->sHeader, indent+1);
    printf ("%s%04x:  ATOM_I2C_ID_CONFIG_ACCESS sucI2cId%s :\n", IND(indent), (int)(((uint8_t*)&d->sucI2cId)-start), FILL(33)); ATOM_I2C_ID_CONFIG_ACCESS_dumper (start, (uint8_t*) &d->sucI2cId, indent+1);
  }
  return sizeof (ATOM_OEM_INFO);
}
int ATOM_TV_MODE_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_TV_MODE *d = (ATOM_TV_MODE *) data;
  int i;
  if (d) {
    printf ("%s%04x:  UCHAR ucVMode_Num%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucVMode_Num)-start), FILL(16), d->ucVMode_Num, d->ucVMode_Num);
    printf ("%s%04x:  UCHAR ucTV_Mode_Num%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucTV_Mode_Num)-start), FILL(18), d->ucTV_Mode_Num, d->ucTV_Mode_Num);
  }
  return sizeof (ATOM_TV_MODE);
}
int ATOM_BIOS_INT_TVSTD_MODE_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_BIOS_INT_TVSTD_MODE *d = (ATOM_BIOS_INT_TVSTD_MODE *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ATOM_COMMON_TABLE_HEADER sHeader%s :\n", IND(indent), (int)(((uint8_t*)&d->sHeader)-start), FILL(31)); ATOM_COMMON_TABLE_HEADER_dumper (start, (uint8_t*) &d->sHeader, indent+1);
    printf ("%s%04x:  USHORT usTV_Mode_LUT_Offset%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usTV_Mode_LUT_Offset)-start), FILL(26), d->usTV_Mode_LUT_Offset, d->usTV_Mode_LUT_Offset);
    printf ("%s%04x:  USHORT usTV_FIFO_Offset%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usTV_FIFO_Offset)-start), FILL(22), d->usTV_FIFO_Offset, d->usTV_FIFO_Offset);
    printf ("%s%04x:  USHORT usNTSC_Tbl_Offset%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usNTSC_Tbl_Offset)-start), FILL(23), d->usNTSC_Tbl_Offset, d->usNTSC_Tbl_Offset);
    printf ("%s%04x:  USHORT usPAL_Tbl_Offset%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usPAL_Tbl_Offset)-start), FILL(22), d->usPAL_Tbl_Offset, d->usPAL_Tbl_Offset);
    printf ("%s%04x:  USHORT usCV_Tbl_Offset%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usCV_Tbl_Offset)-start), FILL(21), d->usCV_Tbl_Offset, d->usCV_Tbl_Offset);
  }
  return sizeof (ATOM_BIOS_INT_TVSTD_MODE);
}
int ATOM_TV_MODE_SCALER_PTR_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_TV_MODE_SCALER_PTR *d = (ATOM_TV_MODE_SCALER_PTR *) data;
  int i;
  if (d) {
    printf ("%s%04x:  USHORT ucFilter0_Offset%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucFilter0_Offset)-start), FILL(22), d->ucFilter0_Offset, d->ucFilter0_Offset);
    printf ("%s%04x:  USHORT usFilter1_Offset%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usFilter1_Offset)-start), FILL(22), d->usFilter1_Offset, d->usFilter1_Offset);
    printf ("%s%04x:  UCHAR ucTV_Mode_Num%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucTV_Mode_Num)-start), FILL(18), d->ucTV_Mode_Num, d->ucTV_Mode_Num);
  }
  return sizeof (ATOM_TV_MODE_SCALER_PTR);
}
int ATOM_STANDARD_VESA_TIMING_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_STANDARD_VESA_TIMING *d = (ATOM_STANDARD_VESA_TIMING *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ATOM_COMMON_TABLE_HEADER sHeader%s :\n", IND(indent), (int)(((uint8_t*)&d->sHeader)-start), FILL(31)); ATOM_COMMON_TABLE_HEADER_dumper (start, (uint8_t*) &d->sHeader, indent+1);
    for (i = 0; i < 16; i++) {
      printf ("%s%04x:  ATOM_DTD_FORMAT aModeTimings%s [%d] :\n", IND(indent), (int)(((uint8_t*)&d->aModeTimings[i])-start), FILL(31+(i>9)), i); ATOM_DTD_FORMAT_dumper (start, (uint8_t*) &d->aModeTimings[i], indent+1); }
  }
  return sizeof (ATOM_STANDARD_VESA_TIMING);
}
int ATOM_STD_FORMAT_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_STD_FORMAT *d = (ATOM_STD_FORMAT *) data;
  int i;
  if (d) {
    printf ("%s%04x:  USHORT usSTD_HDisp%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usSTD_HDisp)-start), FILL(17), d->usSTD_HDisp, d->usSTD_HDisp);
    printf ("%s%04x:  USHORT usSTD_VDisp%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usSTD_VDisp)-start), FILL(17), d->usSTD_VDisp, d->usSTD_VDisp);
    printf ("%s%04x:  USHORT usSTD_RefreshRate%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usSTD_RefreshRate)-start), FILL(23), d->usSTD_RefreshRate, d->usSTD_RefreshRate);
    printf ("%s%04x:  USHORT usReserved%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usReserved)-start), FILL(16), d->usReserved, d->usReserved);
  }
  return sizeof (ATOM_STD_FORMAT);
}
int ATOM_VESA_TO_EXTENDED_MODE_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_VESA_TO_EXTENDED_MODE *d = (ATOM_VESA_TO_EXTENDED_MODE *) data;
  int i;
  if (d) {
    printf ("%s%04x:  USHORT usVESA_ModeNumber%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usVESA_ModeNumber)-start), FILL(23), d->usVESA_ModeNumber, d->usVESA_ModeNumber);
    printf ("%s%04x:  USHORT usExtendedModeNumber%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usExtendedModeNumber)-start), FILL(26), d->usExtendedModeNumber, d->usExtendedModeNumber);
  }
  return sizeof (ATOM_VESA_TO_EXTENDED_MODE);
}
int ATOM_VESA_TO_INTENAL_MODE_LUT_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_VESA_TO_INTENAL_MODE_LUT *d = (ATOM_VESA_TO_INTENAL_MODE_LUT *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ATOM_COMMON_TABLE_HEADER sHeader%s :\n", IND(indent), (int)(((uint8_t*)&d->sHeader)-start), FILL(31)); ATOM_COMMON_TABLE_HEADER_dumper (start, (uint8_t*) &d->sHeader, indent+1);
    for (i = 0; i < COUNT_ALL (ATOM_VESA_TO_INTENAL_MODE_LUT, ATOM_VESA_TO_EXTENDED_MODE); i++) {
      printf ("%s%04x:  ATOM_VESA_TO_EXTENDED_MODE asVESA_ToExtendedModeInfo%s [%d] :\n", IND(indent), (int)(((uint8_t*)&d->asVESA_ToExtendedModeInfo[i])-start), FILL(55+(i>9)), i); ATOM_VESA_TO_EXTENDED_MODE_dumper (start, (uint8_t*) &d->asVESA_ToExtendedModeInfo[i], indent+1); }
  }
  return RETURN_ALL (ATOM_VESA_TO_INTENAL_MODE_LUT, ATOM_VESA_TO_EXTENDED_MODE);
}
int ATOM_MEMORY_VENDOR_BLOCK_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_MEMORY_VENDOR_BLOCK *d = (ATOM_MEMORY_VENDOR_BLOCK *) data;
  int i;
  if (d) {
    printf ("%s%04x:  UCHAR ucMemoryType%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucMemoryType)-start), FILL(17), d->ucMemoryType, d->ucMemoryType);
    printf ("%s%04x:  UCHAR ucMemoryVendor%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucMemoryVendor)-start), FILL(19), d->ucMemoryVendor, d->ucMemoryVendor);
    printf ("%s%04x:  UCHAR ucAdjMCId%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucAdjMCId)-start), FILL(14), d->ucAdjMCId, d->ucAdjMCId);
    printf ("%s%04x:  UCHAR ucDynClkId%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucDynClkId)-start), FILL(15), d->ucDynClkId, d->ucDynClkId);
    printf ("%s%04x:  ULONG ulDllResetClkRange%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulDllResetClkRange)-start), FILL(23), d->ulDllResetClkRange, d->ulDllResetClkRange);
  }
  return sizeof (ATOM_MEMORY_VENDOR_BLOCK);
}
int ATOM_MEMORY_SETTING_ID_CONFIG_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_MEMORY_SETTING_ID_CONFIG *d = (ATOM_MEMORY_SETTING_ID_CONFIG *) data;
  int i;
  if (d) {
    printf ("%s       ULONG ulMemClockRange:24%s = 0x%08x (%d)\n", IND(indent), FILL(23), d->ulMemClockRange, d->ulMemClockRange);
    printf ("%s       ULONG ucMemBlkId:8%s = 0x%08x (%d)\n", IND(indent), FILL(17), d->ucMemBlkId, d->ucMemBlkId);
  }
  return sizeof (ATOM_MEMORY_SETTING_ID_CONFIG);
}
int ATOM_MEMORY_SETTING_ID_CONFIG_ACCESS_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_MEMORY_SETTING_ID_CONFIG_ACCESS *d = (ATOM_MEMORY_SETTING_ID_CONFIG_ACCESS *) data;
  int i;
  if (d) {
    printf ("%s%04x:  (union) ATOM_MEMORY_SETTING_ID_CONFIG slAccess%s :\n", IND(indent), (int)(((uint8_t*)&d->slAccess)-start), FILL(45)); ATOM_MEMORY_SETTING_ID_CONFIG_dumper (start, (uint8_t*) &d->slAccess, indent+1);
    printf ("%s%04x:  (union) ULONG ulAccess%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulAccess)-start), FILL(21), d->ulAccess, d->ulAccess);
  }
  return sizeof (ATOM_MEMORY_SETTING_ID_CONFIG_ACCESS);
}
int ATOM_MEMORY_SETTING_DATA_BLOCK_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_MEMORY_SETTING_DATA_BLOCK *d = (ATOM_MEMORY_SETTING_DATA_BLOCK *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ATOM_MEMORY_SETTING_ID_CONFIG_ACCESS ulMemoryID%s :\n", IND(indent), (int)(((uint8_t*)&d->ulMemoryID)-start), FILL(46)); ATOM_MEMORY_SETTING_ID_CONFIG_ACCESS_dumper (start, (uint8_t*) &d->ulMemoryID, indent+1);
    for (i = 0; i < 1; i++) {
      printf ("%s%04x:  ULONG aulMemData%s [%d] = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->aulMemData[i])-start), FILL(19+(i>9)), i, d->aulMemData[i], d->aulMemData[i]); }
  }
  return sizeof (ATOM_MEMORY_SETTING_DATA_BLOCK);
}
int ATOM_INIT_REG_INDEX_FORMAT_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_INIT_REG_INDEX_FORMAT *d = (ATOM_INIT_REG_INDEX_FORMAT *) data;
  int i;
  if (d) {
    printf ("%s%04x:  USHORT usRegIndex%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usRegIndex)-start), FILL(16), d->usRegIndex, d->usRegIndex);
    printf ("%s%04x:  UCHAR ucPreRegDataLength%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucPreRegDataLength)-start), FILL(23), d->ucPreRegDataLength, d->ucPreRegDataLength);
  }
  return sizeof (ATOM_INIT_REG_INDEX_FORMAT);
}
int ATOM_INIT_REG_BLOCK_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_INIT_REG_BLOCK *d = (ATOM_INIT_REG_BLOCK *) data;
  int i;
  if (d) {
    printf ("%s%04x:  USHORT usRegIndexTblSize%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usRegIndexTblSize)-start), FILL(23), d->usRegIndexTblSize, d->usRegIndexTblSize);
    printf ("%s%04x:  USHORT usRegDataBlkSize%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usRegDataBlkSize)-start), FILL(22), d->usRegDataBlkSize, d->usRegDataBlkSize);
    for (i = 0; i < 1; i++) {
      printf ("%s%04x:  ATOM_INIT_REG_INDEX_FORMAT asRegIndexBuf%s [%d] :\n", IND(indent), (int)(((uint8_t*)&d->asRegIndexBuf[i])-start), FILL(43+(i>9)), i); ATOM_INIT_REG_INDEX_FORMAT_dumper (start, (uint8_t*) &d->asRegIndexBuf[i], indent+1); }
    for (i = 0; i < 1; i++) {
      printf ("%s%04x:  ATOM_MEMORY_SETTING_DATA_BLOCK asRegDataBuf%s [%d] :\n", IND(indent), (int)(((uint8_t*)&d->asRegDataBuf[i])-start), FILL(46+(i>9)), i); ATOM_MEMORY_SETTING_DATA_BLOCK_dumper (start, (uint8_t*) &d->asRegDataBuf[i], indent+1); }
  }
  return sizeof (ATOM_INIT_REG_BLOCK);
}
int ATOM_MC_INIT_PARAM_TABLE_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_MC_INIT_PARAM_TABLE *d = (ATOM_MC_INIT_PARAM_TABLE *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ATOM_COMMON_TABLE_HEADER sHeader%s :\n", IND(indent), (int)(((uint8_t*)&d->sHeader)-start), FILL(31)); ATOM_COMMON_TABLE_HEADER_dumper (start, (uint8_t*) &d->sHeader, indent+1);
    printf ("%s%04x:  USHORT usAdjustARB_SEQDataOffset%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usAdjustARB_SEQDataOffset)-start), FILL(31), d->usAdjustARB_SEQDataOffset, d->usAdjustARB_SEQDataOffset);
    printf ("%s%04x:  USHORT usMCInitMemTypeTblOffset%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usMCInitMemTypeTblOffset)-start), FILL(30), d->usMCInitMemTypeTblOffset, d->usMCInitMemTypeTblOffset);
    printf ("%s%04x:  USHORT usMCInitCommonTblOffset%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usMCInitCommonTblOffset)-start), FILL(29), d->usMCInitCommonTblOffset, d->usMCInitCommonTblOffset);
    printf ("%s%04x:  USHORT usMCInitPowerDownTblOffset%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usMCInitPowerDownTblOffset)-start), FILL(32), d->usMCInitPowerDownTblOffset, d->usMCInitPowerDownTblOffset);
    for (i = 0; i < 32; i++) {
      printf ("%s%04x:  ULONG ulARB_SEQDataBuf%s [%d] = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulARB_SEQDataBuf[i])-start), FILL(25+(i>9)), i, d->ulARB_SEQDataBuf[i], d->ulARB_SEQDataBuf[i]); }
    printf ("%s%04x:  ATOM_INIT_REG_BLOCK asMCInitMemType%s :\n", IND(indent), (int)(((uint8_t*)&d->asMCInitMemType)-start), FILL(34)); ATOM_INIT_REG_BLOCK_dumper (start, (uint8_t*) &d->asMCInitMemType, indent+1);
    printf ("%s%04x:  ATOM_INIT_REG_BLOCK asMCInitCommon%s :\n", IND(indent), (int)(((uint8_t*)&d->asMCInitCommon)-start), FILL(33)); ATOM_INIT_REG_BLOCK_dumper (start, (uint8_t*) &d->asMCInitCommon, indent+1);
  }
  return sizeof (ATOM_MC_INIT_PARAM_TABLE);
}
int MCuCodeHeader_dumper (uint8_t *start, uint8_t *data, int indent) {
  MCuCodeHeader *d = (MCuCodeHeader *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ULONG ulSignature%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulSignature)-start), FILL(16), d->ulSignature, d->ulSignature);
    printf ("%s%04x:  UCHAR ucRevision%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucRevision)-start), FILL(15), d->ucRevision, d->ucRevision);
    printf ("%s%04x:  UCHAR ucChecksum%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucChecksum)-start), FILL(15), d->ucChecksum, d->ucChecksum);
    printf ("%s%04x:  UCHAR ucReserved1%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucReserved1)-start), FILL(16), d->ucReserved1, d->ucReserved1);
    printf ("%s%04x:  UCHAR ucReserved2%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucReserved2)-start), FILL(16), d->ucReserved2, d->ucReserved2);
    printf ("%s%04x:  USHORT usParametersLength%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usParametersLength)-start), FILL(24), d->usParametersLength, d->usParametersLength);
    printf ("%s%04x:  USHORT usUCodeLength%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usUCodeLength)-start), FILL(19), d->usUCodeLength, d->usUCodeLength);
    printf ("%s%04x:  USHORT usReserved1%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usReserved1)-start), FILL(17), d->usReserved1, d->usReserved1);
    printf ("%s%04x:  USHORT usReserved2%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usReserved2)-start), FILL(17), d->usReserved2, d->usReserved2);
  }
  return sizeof (MCuCodeHeader);
}
int ATOM_VRAM_MODULE_V1_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_VRAM_MODULE_V1 *d = (ATOM_VRAM_MODULE_V1 *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ULONG ulReserved%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulReserved)-start), FILL(15), d->ulReserved, d->ulReserved);
    printf ("%s%04x:  USHORT usEMRSValue%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usEMRSValue)-start), FILL(17), d->usEMRSValue, d->usEMRSValue);
    printf ("%s%04x:  USHORT usMRSValue%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usMRSValue)-start), FILL(16), d->usMRSValue, d->usMRSValue);
    printf ("%s%04x:  USHORT usReserved%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usReserved)-start), FILL(16), d->usReserved, d->usReserved);
    printf ("%s%04x:  UCHAR ucExtMemoryID%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucExtMemoryID)-start), FILL(18), d->ucExtMemoryID, d->ucExtMemoryID);
    printf ("%s%04x:  UCHAR ucMemoryType%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucMemoryType)-start), FILL(17), d->ucMemoryType, d->ucMemoryType);
    printf ("%s%04x:  UCHAR ucMemoryVenderID%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucMemoryVenderID)-start), FILL(21), d->ucMemoryVenderID, d->ucMemoryVenderID);
    printf ("%s%04x:  UCHAR ucMemoryDeviceCfg%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucMemoryDeviceCfg)-start), FILL(22), d->ucMemoryDeviceCfg, d->ucMemoryDeviceCfg);
    printf ("%s%04x:  UCHAR ucRow%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucRow)-start), FILL(10), d->ucRow, d->ucRow);
    printf ("%s%04x:  UCHAR ucColumn%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucColumn)-start), FILL(13), d->ucColumn, d->ucColumn);
    printf ("%s%04x:  UCHAR ucBank%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucBank)-start), FILL(11), d->ucBank, d->ucBank);
    printf ("%s%04x:  UCHAR ucRank%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucRank)-start), FILL(11), d->ucRank, d->ucRank);
    printf ("%s%04x:  UCHAR ucChannelNum%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucChannelNum)-start), FILL(17), d->ucChannelNum, d->ucChannelNum);
    printf ("%s%04x:  UCHAR ucChannelConfig%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucChannelConfig)-start), FILL(20), d->ucChannelConfig, d->ucChannelConfig);
    printf ("%s%04x:  UCHAR ucDefaultMVDDQ_ID%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucDefaultMVDDQ_ID)-start), FILL(22), d->ucDefaultMVDDQ_ID, d->ucDefaultMVDDQ_ID);
    printf ("%s%04x:  UCHAR ucDefaultMVDDC_ID%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucDefaultMVDDC_ID)-start), FILL(22), d->ucDefaultMVDDC_ID, d->ucDefaultMVDDC_ID);
    for (i = 0; i < 2; i++) {
      printf ("%s%04x:  UCHAR ucReserved%s [%d] = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucReserved[i])-start), FILL(19+(i>9)), i, d->ucReserved[i], d->ucReserved[i]); }
  }
  return sizeof (ATOM_VRAM_MODULE_V1);
}
int ATOM_VRAM_MODULE_V2_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_VRAM_MODULE_V2 *d = (ATOM_VRAM_MODULE_V2 *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ULONG ulReserved%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulReserved)-start), FILL(15), d->ulReserved, d->ulReserved);
    printf ("%s%04x:  ULONG ulFlags%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulFlags)-start), FILL(12), d->ulFlags, d->ulFlags);
    printf ("%s%04x:  ULONG ulEngineClock%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulEngineClock)-start), FILL(18), d->ulEngineClock, d->ulEngineClock);
    printf ("%s%04x:  ULONG ulMemoryClock%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulMemoryClock)-start), FILL(18), d->ulMemoryClock, d->ulMemoryClock);
    printf ("%s%04x:  USHORT usEMRS2Value%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usEMRS2Value)-start), FILL(18), d->usEMRS2Value, d->usEMRS2Value);
    printf ("%s%04x:  USHORT usEMRS3Value%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usEMRS3Value)-start), FILL(18), d->usEMRS3Value, d->usEMRS3Value);
    printf ("%s%04x:  USHORT usEMRSValue%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usEMRSValue)-start), FILL(17), d->usEMRSValue, d->usEMRSValue);
    printf ("%s%04x:  USHORT usMRSValue%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usMRSValue)-start), FILL(16), d->usMRSValue, d->usMRSValue);
    printf ("%s%04x:  USHORT usReserved%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usReserved)-start), FILL(16), d->usReserved, d->usReserved);
    printf ("%s%04x:  UCHAR ucExtMemoryID%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucExtMemoryID)-start), FILL(18), d->ucExtMemoryID, d->ucExtMemoryID);
    printf ("%s%04x:  UCHAR ucMemoryType%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucMemoryType)-start), FILL(17), d->ucMemoryType, d->ucMemoryType);
    printf ("%s%04x:  UCHAR ucMemoryVenderID%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucMemoryVenderID)-start), FILL(21), d->ucMemoryVenderID, d->ucMemoryVenderID);
    printf ("%s%04x:  UCHAR ucMemoryDeviceCfg%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucMemoryDeviceCfg)-start), FILL(22), d->ucMemoryDeviceCfg, d->ucMemoryDeviceCfg);
    printf ("%s%04x:  UCHAR ucRow%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucRow)-start), FILL(10), d->ucRow, d->ucRow);
    printf ("%s%04x:  UCHAR ucColumn%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucColumn)-start), FILL(13), d->ucColumn, d->ucColumn);
    printf ("%s%04x:  UCHAR ucBank%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucBank)-start), FILL(11), d->ucBank, d->ucBank);
    printf ("%s%04x:  UCHAR ucRank%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucRank)-start), FILL(11), d->ucRank, d->ucRank);
    printf ("%s%04x:  UCHAR ucChannelNum%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucChannelNum)-start), FILL(17), d->ucChannelNum, d->ucChannelNum);
    printf ("%s%04x:  UCHAR ucChannelConfig%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucChannelConfig)-start), FILL(20), d->ucChannelConfig, d->ucChannelConfig);
    printf ("%s%04x:  UCHAR ucDefaultMVDDQ_ID%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucDefaultMVDDQ_ID)-start), FILL(22), d->ucDefaultMVDDQ_ID, d->ucDefaultMVDDQ_ID);
    printf ("%s%04x:  UCHAR ucDefaultMVDDC_ID%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucDefaultMVDDC_ID)-start), FILL(22), d->ucDefaultMVDDC_ID, d->ucDefaultMVDDC_ID);
    printf ("%s%04x:  UCHAR ucRefreshRateFactor%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucRefreshRateFactor)-start), FILL(24), d->ucRefreshRateFactor, d->ucRefreshRateFactor);
    for (i = 0; i < 3; i++) {
      printf ("%s%04x:  UCHAR ucReserved%s [%d] = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucReserved[i])-start), FILL(19+(i>9)), i, d->ucReserved[i], d->ucReserved[i]); }
  }
  return sizeof (ATOM_VRAM_MODULE_V2);
}
int ATOM_MEMORY_TIMING_FORMAT_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_MEMORY_TIMING_FORMAT *d = (ATOM_MEMORY_TIMING_FORMAT *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ULONG ulClkRange%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulClkRange)-start), FILL(15), d->ulClkRange, d->ulClkRange);
    printf ("%s  <unparsable> line 3269:   union{\n%sskipping...\n", IND(indent), IND(indent));
  }
  return sizeof (ATOM_MEMORY_TIMING_FORMAT);
}
int ATOM_MEMORY_TIMING_FORMAT_V1_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_MEMORY_TIMING_FORMAT_V1 *d = (ATOM_MEMORY_TIMING_FORMAT_V1 *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ULONG ulClkRange%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulClkRange)-start), FILL(15), d->ulClkRange, d->ulClkRange);
    printf ("%s%04x:  USHORT usMRS%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usMRS)-start), FILL(11), d->usMRS, d->usMRS);
    printf ("%s%04x:  USHORT usEMRS%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usEMRS)-start), FILL(12), d->usEMRS, d->usEMRS);
    printf ("%s%04x:  UCHAR ucCL%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucCL)-start), FILL(9), d->ucCL, d->ucCL);
    printf ("%s%04x:  UCHAR ucWL%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucWL)-start), FILL(9), d->ucWL, d->ucWL);
    printf ("%s%04x:  UCHAR uctRAS%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->uctRAS)-start), FILL(11), d->uctRAS, d->uctRAS);
    printf ("%s%04x:  UCHAR uctRC%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->uctRC)-start), FILL(10), d->uctRC, d->uctRC);
    printf ("%s%04x:  UCHAR uctRFC%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->uctRFC)-start), FILL(11), d->uctRFC, d->uctRFC);
    printf ("%s%04x:  UCHAR uctRCDR%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->uctRCDR)-start), FILL(12), d->uctRCDR, d->uctRCDR);
    printf ("%s%04x:  UCHAR uctRCDW%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->uctRCDW)-start), FILL(12), d->uctRCDW, d->uctRCDW);
    printf ("%s%04x:  UCHAR uctRP%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->uctRP)-start), FILL(10), d->uctRP, d->uctRP);
    printf ("%s%04x:  UCHAR uctRRD%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->uctRRD)-start), FILL(11), d->uctRRD, d->uctRRD);
    printf ("%s%04x:  UCHAR uctWR%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->uctWR)-start), FILL(10), d->uctWR, d->uctWR);
    printf ("%s%04x:  UCHAR uctWTR%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->uctWTR)-start), FILL(11), d->uctWTR, d->uctWTR);
    printf ("%s%04x:  UCHAR uctPDIX%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->uctPDIX)-start), FILL(12), d->uctPDIX, d->uctPDIX);
    printf ("%s%04x:  UCHAR uctFAW%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->uctFAW)-start), FILL(11), d->uctFAW, d->uctFAW);
    printf ("%s%04x:  UCHAR uctAOND%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->uctAOND)-start), FILL(12), d->uctAOND, d->uctAOND);
    printf ("%s%04x:  UCHAR ucflag%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucflag)-start), FILL(11), d->ucflag, d->ucflag);
    printf ("%s%04x:  UCHAR uctCCDL%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->uctCCDL)-start), FILL(12), d->uctCCDL, d->uctCCDL);
    printf ("%s%04x:  UCHAR uctCRCRL%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->uctCRCRL)-start), FILL(13), d->uctCRCRL, d->uctCRCRL);
    printf ("%s%04x:  UCHAR uctCRCWL%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->uctCRCWL)-start), FILL(13), d->uctCRCWL, d->uctCRCWL);
    printf ("%s%04x:  UCHAR uctCKE%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->uctCKE)-start), FILL(11), d->uctCKE, d->uctCKE);
    printf ("%s%04x:  UCHAR uctCKRSE%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->uctCKRSE)-start), FILL(13), d->uctCKRSE, d->uctCKRSE);
    printf ("%s%04x:  UCHAR uctCKRSX%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->uctCKRSX)-start), FILL(13), d->uctCKRSX, d->uctCKRSX);
    printf ("%s%04x:  UCHAR uctFAW32%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->uctFAW32)-start), FILL(13), d->uctFAW32, d->uctFAW32);
    printf ("%s%04x:  UCHAR ucMR5lo%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucMR5lo)-start), FILL(12), d->ucMR5lo, d->ucMR5lo);
    printf ("%s%04x:  UCHAR ucMR5hi%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucMR5hi)-start), FILL(12), d->ucMR5hi, d->ucMR5hi);
    printf ("%s%04x:  UCHAR ucTerminator%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucTerminator)-start), FILL(17), d->ucTerminator, d->ucTerminator);
  }
  return sizeof (ATOM_MEMORY_TIMING_FORMAT_V1);
}
int ATOM_MEMORY_TIMING_FORMAT_V2_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_MEMORY_TIMING_FORMAT_V2 *d = (ATOM_MEMORY_TIMING_FORMAT_V2 *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ULONG ulClkRange%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulClkRange)-start), FILL(15), d->ulClkRange, d->ulClkRange);
    printf ("%s%04x:  USHORT usMRS%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usMRS)-start), FILL(11), d->usMRS, d->usMRS);
    printf ("%s%04x:  USHORT usEMRS%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usEMRS)-start), FILL(12), d->usEMRS, d->usEMRS);
    printf ("%s%04x:  UCHAR ucCL%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucCL)-start), FILL(9), d->ucCL, d->ucCL);
    printf ("%s%04x:  UCHAR ucWL%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucWL)-start), FILL(9), d->ucWL, d->ucWL);
    printf ("%s%04x:  UCHAR uctRAS%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->uctRAS)-start), FILL(11), d->uctRAS, d->uctRAS);
    printf ("%s%04x:  UCHAR uctRC%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->uctRC)-start), FILL(10), d->uctRC, d->uctRC);
    printf ("%s%04x:  UCHAR uctRFC%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->uctRFC)-start), FILL(11), d->uctRFC, d->uctRFC);
    printf ("%s%04x:  UCHAR uctRCDR%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->uctRCDR)-start), FILL(12), d->uctRCDR, d->uctRCDR);
    printf ("%s%04x:  UCHAR uctRCDW%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->uctRCDW)-start), FILL(12), d->uctRCDW, d->uctRCDW);
    printf ("%s%04x:  UCHAR uctRP%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->uctRP)-start), FILL(10), d->uctRP, d->uctRP);
    printf ("%s%04x:  UCHAR uctRRD%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->uctRRD)-start), FILL(11), d->uctRRD, d->uctRRD);
    printf ("%s%04x:  UCHAR uctWR%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->uctWR)-start), FILL(10), d->uctWR, d->uctWR);
    printf ("%s%04x:  UCHAR uctWTR%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->uctWTR)-start), FILL(11), d->uctWTR, d->uctWTR);
    printf ("%s%04x:  UCHAR uctPDIX%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->uctPDIX)-start), FILL(12), d->uctPDIX, d->uctPDIX);
    printf ("%s%04x:  UCHAR uctFAW%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->uctFAW)-start), FILL(11), d->uctFAW, d->uctFAW);
    printf ("%s%04x:  UCHAR uctAOND%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->uctAOND)-start), FILL(12), d->uctAOND, d->uctAOND);
    printf ("%s%04x:  UCHAR ucflag%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucflag)-start), FILL(11), d->ucflag, d->ucflag);
    printf ("%s%04x:  UCHAR uctCCDL%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->uctCCDL)-start), FILL(12), d->uctCCDL, d->uctCCDL);
    printf ("%s%04x:  UCHAR uctCRCRL%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->uctCRCRL)-start), FILL(13), d->uctCRCRL, d->uctCRCRL);
    printf ("%s%04x:  UCHAR uctCRCWL%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->uctCRCWL)-start), FILL(13), d->uctCRCWL, d->uctCRCWL);
    printf ("%s%04x:  UCHAR uctCKE%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->uctCKE)-start), FILL(11), d->uctCKE, d->uctCKE);
    printf ("%s%04x:  UCHAR uctCKRSE%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->uctCKRSE)-start), FILL(13), d->uctCKRSE, d->uctCKRSE);
    printf ("%s%04x:  UCHAR uctCKRSX%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->uctCKRSX)-start), FILL(13), d->uctCKRSX, d->uctCKRSX);
    printf ("%s%04x:  UCHAR uctFAW32%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->uctFAW32)-start), FILL(13), d->uctFAW32, d->uctFAW32);
    printf ("%s%04x:  UCHAR ucMR4lo%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucMR4lo)-start), FILL(12), d->ucMR4lo, d->ucMR4lo);
    printf ("%s%04x:  UCHAR ucMR4hi%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucMR4hi)-start), FILL(12), d->ucMR4hi, d->ucMR4hi);
    printf ("%s%04x:  UCHAR ucMR5lo%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucMR5lo)-start), FILL(12), d->ucMR5lo, d->ucMR5lo);
    printf ("%s%04x:  UCHAR ucMR5hi%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucMR5hi)-start), FILL(12), d->ucMR5hi, d->ucMR5hi);
    printf ("%s%04x:  UCHAR ucTerminator%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucTerminator)-start), FILL(17), d->ucTerminator, d->ucTerminator);
    printf ("%s%04x:  UCHAR ucReserved%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucReserved)-start), FILL(15), d->ucReserved, d->ucReserved);
  }
  return sizeof (ATOM_MEMORY_TIMING_FORMAT_V2);
}
int ATOM_MEMORY_FORMAT_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_MEMORY_FORMAT *d = (ATOM_MEMORY_FORMAT *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ULONG ulDllDisClock%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulDllDisClock)-start), FILL(18), d->ulDllDisClock, d->ulDllDisClock);
    printf ("%s  <unparsable> line 3374:   union{\n%sskipping...\n", IND(indent), IND(indent));
  }
  return sizeof (ATOM_MEMORY_FORMAT);
}
int ATOM_VRAM_MODULE_V3_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_VRAM_MODULE_V3 *d = (ATOM_VRAM_MODULE_V3 *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ULONG ulChannelMapCfg%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulChannelMapCfg)-start), FILL(20), d->ulChannelMapCfg, d->ulChannelMapCfg);
    printf ("%s%04x:  USHORT usSize%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usSize)-start), FILL(12), d->usSize, d->usSize);
    printf ("%s%04x:  USHORT usDefaultMVDDQ%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usDefaultMVDDQ)-start), FILL(20), d->usDefaultMVDDQ, d->usDefaultMVDDQ);
    printf ("%s%04x:  USHORT usDefaultMVDDC%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usDefaultMVDDC)-start), FILL(20), d->usDefaultMVDDC, d->usDefaultMVDDC);
    printf ("%s%04x:  UCHAR ucExtMemoryID%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucExtMemoryID)-start), FILL(18), d->ucExtMemoryID, d->ucExtMemoryID);
    printf ("%s%04x:  UCHAR ucChannelNum%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucChannelNum)-start), FILL(17), d->ucChannelNum, d->ucChannelNum);
    printf ("%s%04x:  UCHAR ucChannelSize%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucChannelSize)-start), FILL(18), d->ucChannelSize, d->ucChannelSize);
    printf ("%s%04x:  UCHAR ucVREFI%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucVREFI)-start), FILL(12), d->ucVREFI, d->ucVREFI);
    printf ("%s%04x:  UCHAR ucNPL_RT%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucNPL_RT)-start), FILL(13), d->ucNPL_RT, d->ucNPL_RT);
    printf ("%s%04x:  UCHAR ucFlag%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucFlag)-start), FILL(11), d->ucFlag, d->ucFlag);
    printf ("%s%04x:  ATOM_MEMORY_FORMAT asMemory%s :\n", IND(indent), (int)(((uint8_t*)&d->asMemory)-start), FILL(26)); ATOM_MEMORY_FORMAT_dumper (start, (uint8_t*) &d->asMemory, indent+1);
  }
  return sizeof (ATOM_VRAM_MODULE_V3);
}
int ATOM_VRAM_MODULE_V4_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_VRAM_MODULE_V4 *d = (ATOM_VRAM_MODULE_V4 *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ULONG ulChannelMapCfg%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulChannelMapCfg)-start), FILL(20), d->ulChannelMapCfg, d->ulChannelMapCfg);
    printf ("%s%04x:  USHORT usModuleSize%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usModuleSize)-start), FILL(18), d->usModuleSize, d->usModuleSize);
    printf ("%s%04x:  USHORT usPrivateReserved%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usPrivateReserved)-start), FILL(23), d->usPrivateReserved, d->usPrivateReserved);
    printf ("%s%04x:  USHORT usReserved%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usReserved)-start), FILL(16), d->usReserved, d->usReserved);
    printf ("%s%04x:  UCHAR ucExtMemoryID%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucExtMemoryID)-start), FILL(18), d->ucExtMemoryID, d->ucExtMemoryID);
    printf ("%s%04x:  UCHAR ucMemoryType%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucMemoryType)-start), FILL(17), d->ucMemoryType, d->ucMemoryType);
    printf ("%s%04x:  UCHAR ucChannelNum%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucChannelNum)-start), FILL(17), d->ucChannelNum, d->ucChannelNum);
    printf ("%s%04x:  UCHAR ucChannelWidth%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucChannelWidth)-start), FILL(19), d->ucChannelWidth, d->ucChannelWidth);
    printf ("%s%04x:  UCHAR ucDensity%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucDensity)-start), FILL(14), d->ucDensity, d->ucDensity);
    printf ("%s%04x:  UCHAR ucFlag%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucFlag)-start), FILL(11), d->ucFlag, d->ucFlag);
    printf ("%s%04x:  UCHAR ucMisc%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucMisc)-start), FILL(11), d->ucMisc, d->ucMisc);
    printf ("%s%04x:  UCHAR ucVREFI%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucVREFI)-start), FILL(12), d->ucVREFI, d->ucVREFI);
    printf ("%s%04x:  UCHAR ucNPL_RT%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucNPL_RT)-start), FILL(13), d->ucNPL_RT, d->ucNPL_RT);
    printf ("%s%04x:  UCHAR ucPreamble%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucPreamble)-start), FILL(15), d->ucPreamble, d->ucPreamble);
    printf ("%s%04x:  UCHAR ucMemorySize%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucMemorySize)-start), FILL(17), d->ucMemorySize, d->ucMemorySize);
    for (i = 0; i < 3; i++) {
      printf ("%s%04x:  UCHAR ucReserved%s [%d] = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucReserved[i])-start), FILL(19+(i>9)), i, d->ucReserved[i], d->ucReserved[i]); }
    printf ("%s  <unparsable> line 3435:   union{\n%sskipping...\n", IND(indent), IND(indent));
  }
  return sizeof (ATOM_VRAM_MODULE_V4);
}
int ATOM_VRAM_MODULE_V5_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_VRAM_MODULE_V5 *d = (ATOM_VRAM_MODULE_V5 *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ULONG ulChannelMapCfg%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulChannelMapCfg)-start), FILL(20), d->ulChannelMapCfg, d->ulChannelMapCfg);
    printf ("%s%04x:  USHORT usModuleSize%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usModuleSize)-start), FILL(18), d->usModuleSize, d->usModuleSize);
    printf ("%s%04x:  USHORT usPrivateReserved%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usPrivateReserved)-start), FILL(23), d->usPrivateReserved, d->usPrivateReserved);
    printf ("%s%04x:  USHORT usReserved%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usReserved)-start), FILL(16), d->usReserved, d->usReserved);
    printf ("%s%04x:  UCHAR ucExtMemoryID%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucExtMemoryID)-start), FILL(18), d->ucExtMemoryID, d->ucExtMemoryID);
    printf ("%s%04x:  UCHAR ucMemoryType%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucMemoryType)-start), FILL(17), d->ucMemoryType, d->ucMemoryType);
    printf ("%s%04x:  UCHAR ucChannelNum%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucChannelNum)-start), FILL(17), d->ucChannelNum, d->ucChannelNum);
    printf ("%s%04x:  UCHAR ucChannelWidth%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucChannelWidth)-start), FILL(19), d->ucChannelWidth, d->ucChannelWidth);
    printf ("%s%04x:  UCHAR ucDensity%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucDensity)-start), FILL(14), d->ucDensity, d->ucDensity);
    printf ("%s%04x:  UCHAR ucFlag%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucFlag)-start), FILL(11), d->ucFlag, d->ucFlag);
    printf ("%s%04x:  UCHAR ucMisc%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucMisc)-start), FILL(11), d->ucMisc, d->ucMisc);
    printf ("%s%04x:  UCHAR ucVREFI%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucVREFI)-start), FILL(12), d->ucVREFI, d->ucVREFI);
    printf ("%s%04x:  UCHAR ucNPL_RT%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucNPL_RT)-start), FILL(13), d->ucNPL_RT, d->ucNPL_RT);
    printf ("%s%04x:  UCHAR ucPreamble%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucPreamble)-start), FILL(15), d->ucPreamble, d->ucPreamble);
    printf ("%s%04x:  UCHAR ucMemorySize%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucMemorySize)-start), FILL(17), d->ucMemorySize, d->ucMemorySize);
    for (i = 0; i < 3; i++) {
      printf ("%s%04x:  UCHAR ucReserved%s [%d] = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucReserved[i])-start), FILL(19+(i>9)), i, d->ucReserved[i], d->ucReserved[i]); }
    printf ("%s%04x:  USHORT usEMRS2Value%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usEMRS2Value)-start), FILL(18), d->usEMRS2Value, d->usEMRS2Value);
    printf ("%s%04x:  USHORT usEMRS3Value%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usEMRS3Value)-start), FILL(18), d->usEMRS3Value, d->usEMRS3Value);
    printf ("%s%04x:  UCHAR ucMemoryVenderID%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucMemoryVenderID)-start), FILL(21), d->ucMemoryVenderID, d->ucMemoryVenderID);
    printf ("%s%04x:  UCHAR ucRefreshRateFactor%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucRefreshRateFactor)-start), FILL(24), d->ucRefreshRateFactor, d->ucRefreshRateFactor);
    printf ("%s%04x:  UCHAR ucFIFODepth%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucFIFODepth)-start), FILL(16), d->ucFIFODepth, d->ucFIFODepth);
    printf ("%s%04x:  UCHAR ucCDR_Bandwidth%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucCDR_Bandwidth)-start), FILL(20), d->ucCDR_Bandwidth, d->ucCDR_Bandwidth);
    for (i = 0; i < 5; i++) {
      printf ("%s%04x:  ATOM_MEMORY_TIMING_FORMAT_V1 asMemTiming%s [%d] :\n", IND(indent), (int)(((uint8_t*)&d->asMemTiming[i])-start), FILL(43+(i>9)), i); ATOM_MEMORY_TIMING_FORMAT_V1_dumper (start, (uint8_t*) &d->asMemTiming[i], indent+1); }
  }
  return sizeof (ATOM_VRAM_MODULE_V5);
}
int ATOM_VRAM_MODULE_V6_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_VRAM_MODULE_V6 *d = (ATOM_VRAM_MODULE_V6 *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ULONG ulChannelMapCfg%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulChannelMapCfg)-start), FILL(20), d->ulChannelMapCfg, d->ulChannelMapCfg);
    printf ("%s%04x:  USHORT usModuleSize%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usModuleSize)-start), FILL(18), d->usModuleSize, d->usModuleSize);
    printf ("%s%04x:  USHORT usPrivateReserved%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usPrivateReserved)-start), FILL(23), d->usPrivateReserved, d->usPrivateReserved);
    printf ("%s%04x:  USHORT usReserved%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usReserved)-start), FILL(16), d->usReserved, d->usReserved);
    printf ("%s%04x:  UCHAR ucExtMemoryID%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucExtMemoryID)-start), FILL(18), d->ucExtMemoryID, d->ucExtMemoryID);
    printf ("%s%04x:  UCHAR ucMemoryType%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucMemoryType)-start), FILL(17), d->ucMemoryType, d->ucMemoryType);
    printf ("%s%04x:  UCHAR ucChannelNum%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucChannelNum)-start), FILL(17), d->ucChannelNum, d->ucChannelNum);
    printf ("%s%04x:  UCHAR ucChannelWidth%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucChannelWidth)-start), FILL(19), d->ucChannelWidth, d->ucChannelWidth);
    printf ("%s%04x:  UCHAR ucDensity%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucDensity)-start), FILL(14), d->ucDensity, d->ucDensity);
    printf ("%s%04x:  UCHAR ucFlag%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucFlag)-start), FILL(11), d->ucFlag, d->ucFlag);
    printf ("%s%04x:  UCHAR ucMisc%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucMisc)-start), FILL(11), d->ucMisc, d->ucMisc);
    printf ("%s%04x:  UCHAR ucVREFI%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucVREFI)-start), FILL(12), d->ucVREFI, d->ucVREFI);
    printf ("%s%04x:  UCHAR ucNPL_RT%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucNPL_RT)-start), FILL(13), d->ucNPL_RT, d->ucNPL_RT);
    printf ("%s%04x:  UCHAR ucPreamble%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucPreamble)-start), FILL(15), d->ucPreamble, d->ucPreamble);
    printf ("%s%04x:  UCHAR ucMemorySize%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucMemorySize)-start), FILL(17), d->ucMemorySize, d->ucMemorySize);
    for (i = 0; i < 3; i++) {
      printf ("%s%04x:  UCHAR ucReserved%s [%d] = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucReserved[i])-start), FILL(19+(i>9)), i, d->ucReserved[i], d->ucReserved[i]); }
    printf ("%s%04x:  USHORT usEMRS2Value%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usEMRS2Value)-start), FILL(18), d->usEMRS2Value, d->usEMRS2Value);
    printf ("%s%04x:  USHORT usEMRS3Value%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usEMRS3Value)-start), FILL(18), d->usEMRS3Value, d->usEMRS3Value);
    printf ("%s%04x:  UCHAR ucMemoryVenderID%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucMemoryVenderID)-start), FILL(21), d->ucMemoryVenderID, d->ucMemoryVenderID);
    printf ("%s%04x:  UCHAR ucRefreshRateFactor%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucRefreshRateFactor)-start), FILL(24), d->ucRefreshRateFactor, d->ucRefreshRateFactor);
    printf ("%s%04x:  UCHAR ucFIFODepth%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucFIFODepth)-start), FILL(16), d->ucFIFODepth, d->ucFIFODepth);
    printf ("%s%04x:  UCHAR ucCDR_Bandwidth%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucCDR_Bandwidth)-start), FILL(20), d->ucCDR_Bandwidth, d->ucCDR_Bandwidth);
    for (i = 0; i < 5; i++) {
      printf ("%s%04x:  ATOM_MEMORY_TIMING_FORMAT_V2 asMemTiming%s [%d] :\n", IND(indent), (int)(((uint8_t*)&d->asMemTiming[i])-start), FILL(43+(i>9)), i); ATOM_MEMORY_TIMING_FORMAT_V2_dumper (start, (uint8_t*) &d->asMemTiming[i], indent+1); }
  }
  return sizeof (ATOM_VRAM_MODULE_V6);
}
int ATOM_VRAM_MODULE_V7_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_VRAM_MODULE_V7 *d = (ATOM_VRAM_MODULE_V7 *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ULONG ulChannelMapCfg%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulChannelMapCfg)-start), FILL(20), d->ulChannelMapCfg, d->ulChannelMapCfg);
    printf ("%s%04x:  USHORT usModuleSize%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usModuleSize)-start), FILL(18), d->usModuleSize, d->usModuleSize);
    printf ("%s%04x:  USHORT usPrivateReserved%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usPrivateReserved)-start), FILL(23), d->usPrivateReserved, d->usPrivateReserved);
    printf ("%s%04x:  USHORT usReserved%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usReserved)-start), FILL(16), d->usReserved, d->usReserved);
    printf ("%s%04x:  UCHAR ucExtMemoryID%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucExtMemoryID)-start), FILL(18), d->ucExtMemoryID, d->ucExtMemoryID);
    printf ("%s%04x:  UCHAR ucMemoryType%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucMemoryType)-start), FILL(17), d->ucMemoryType, d->ucMemoryType);
    printf ("%s%04x:  UCHAR ucChannelNum%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucChannelNum)-start), FILL(17), d->ucChannelNum, d->ucChannelNum);
    printf ("%s%04x:  UCHAR ucChannelWidth%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucChannelWidth)-start), FILL(19), d->ucChannelWidth, d->ucChannelWidth);
    printf ("%s%04x:  UCHAR ucDensity%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucDensity)-start), FILL(14), d->ucDensity, d->ucDensity);
    printf ("%s%04x:  UCHAR ucReserve%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucReserve)-start), FILL(14), d->ucReserve, d->ucReserve);
    printf ("%s%04x:  UCHAR ucMisc%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucMisc)-start), FILL(11), d->ucMisc, d->ucMisc);
    printf ("%s%04x:  UCHAR ucVREFI%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucVREFI)-start), FILL(12), d->ucVREFI, d->ucVREFI);
    printf ("%s%04x:  UCHAR ucNPL_RT%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucNPL_RT)-start), FILL(13), d->ucNPL_RT, d->ucNPL_RT);
    printf ("%s%04x:  UCHAR ucPreamble%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucPreamble)-start), FILL(15), d->ucPreamble, d->ucPreamble);
    printf ("%s%04x:  UCHAR ucMemorySize%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucMemorySize)-start), FILL(17), d->ucMemorySize, d->ucMemorySize);
    for (i = 0; i < 3; i++) {
      printf ("%s%04x:  UCHAR ucReserved%s [%d] = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucReserved[i])-start), FILL(19+(i>9)), i, d->ucReserved[i], d->ucReserved[i]); }
    printf ("%s%04x:  USHORT usEMRS2Value%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usEMRS2Value)-start), FILL(18), d->usEMRS2Value, d->usEMRS2Value);
    printf ("%s%04x:  USHORT usEMRS3Value%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usEMRS3Value)-start), FILL(18), d->usEMRS3Value, d->usEMRS3Value);
    printf ("%s%04x:  UCHAR ucMemoryVenderID%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucMemoryVenderID)-start), FILL(21), d->ucMemoryVenderID, d->ucMemoryVenderID);
    printf ("%s%04x:  UCHAR ucRefreshRateFactor%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucRefreshRateFactor)-start), FILL(24), d->ucRefreshRateFactor, d->ucRefreshRateFactor);
    printf ("%s%04x:  UCHAR ucFIFODepth%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucFIFODepth)-start), FILL(16), d->ucFIFODepth, d->ucFIFODepth);
    printf ("%s%04x:  UCHAR ucCDR_Bandwidth%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucCDR_Bandwidth)-start), FILL(20), d->ucCDR_Bandwidth, d->ucCDR_Bandwidth);
    for (i = 0; i < 20; i++) {
      printf ("%s%04x:  char strMemPNString%s [%d] = 0x%02x '%c'   (%d)\n", IND(indent), (int)(((uint8_t*)&d->strMemPNString[i])-start), FILL(22+(i>9)), i, d->strMemPNString[i], d->strMemPNString[i], d->strMemPNString[i]); }
  }
  return sizeof (ATOM_VRAM_MODULE_V7);
}
int ATOM_VRAM_INFO_V2_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_VRAM_INFO_V2 *d = (ATOM_VRAM_INFO_V2 *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ATOM_COMMON_TABLE_HEADER sHeader%s :\n", IND(indent), (int)(((uint8_t*)&d->sHeader)-start), FILL(31)); ATOM_COMMON_TABLE_HEADER_dumper (start, (uint8_t*) &d->sHeader, indent+1);
    printf ("%s%04x:  UCHAR ucNumOfVRAMModule%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucNumOfVRAMModule)-start), FILL(22), d->ucNumOfVRAMModule, d->ucNumOfVRAMModule);
    for (i = 0; i < 16; i++) {
      printf ("%s%04x:  ATOM_VRAM_MODULE_V3 aVramInfo%s [%d] :\n", IND(indent), (int)(((uint8_t*)&d->aVramInfo[i])-start), FILL(32+(i>9)), i); ATOM_VRAM_MODULE_V3_dumper (start, (uint8_t*) &d->aVramInfo[i], indent+1); }
  }
  return sizeof (ATOM_VRAM_INFO_V2);
}
int ATOM_VRAM_INFO_V3_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_VRAM_INFO_V3 *d = (ATOM_VRAM_INFO_V3 *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ATOM_COMMON_TABLE_HEADER sHeader%s :\n", IND(indent), (int)(((uint8_t*)&d->sHeader)-start), FILL(31)); ATOM_COMMON_TABLE_HEADER_dumper (start, (uint8_t*) &d->sHeader, indent+1);
    printf ("%s%04x:  USHORT usMemAdjustTblOffset%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usMemAdjustTblOffset)-start), FILL(26), d->usMemAdjustTblOffset, d->usMemAdjustTblOffset);
    printf ("%s%04x:  USHORT usMemClkPatchTblOffset%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usMemClkPatchTblOffset)-start), FILL(28), d->usMemClkPatchTblOffset, d->usMemClkPatchTblOffset);
    printf ("%s%04x:  USHORT usRerseved%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usRerseved)-start), FILL(16), d->usRerseved, d->usRerseved);
    for (i = 0; i < 9; i++) {
      printf ("%s%04x:  UCHAR aVID_PinsShift%s [%d] = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->aVID_PinsShift[i])-start), FILL(23+(i>9)), i, d->aVID_PinsShift[i], d->aVID_PinsShift[i]); }
    printf ("%s%04x:  UCHAR ucNumOfVRAMModule%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucNumOfVRAMModule)-start), FILL(22), d->ucNumOfVRAMModule, d->ucNumOfVRAMModule);
    for (i = 0; i < (count_ATOM_VRAM_INFO_V3_aVramInfo(d)); i++) {
      printf ("%s%04x:  ATOM_VRAM_MODULE_V3 aVramInfo%s [%d] :\n", IND(indent), (int)(((uint8_t*)&*(offset_ATOM_VRAM_INFO_V3_aVramInfo(d,i)))-start), FILL(32+(i>9)), i); ATOM_VRAM_MODULE_V3_dumper (start, (uint8_t*) &*(offset_ATOM_VRAM_INFO_V3_aVramInfo(d,i)), indent+1); }
    printf ("%s%04x:  ATOM_INIT_REG_BLOCK asMemPatch%s :\n", IND(indent), (int)(((uint8_t*)&*(data + d->usMemClkPatchTblOffset))-start), FILL(29)); ATOM_INIT_REG_BLOCK_dumper (start, (uint8_t*) &*(data + d->usMemClkPatchTblOffset), indent+1);
  }
  return 0;
}
int ATOM_VRAM_INFO_V4_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_VRAM_INFO_V4 *d = (ATOM_VRAM_INFO_V4 *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ATOM_COMMON_TABLE_HEADER sHeader%s :\n", IND(indent), (int)(((uint8_t*)&d->sHeader)-start), FILL(31)); ATOM_COMMON_TABLE_HEADER_dumper (start, (uint8_t*) &d->sHeader, indent+1);
    printf ("%s%04x:  USHORT usMemAdjustTblOffset%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usMemAdjustTblOffset)-start), FILL(26), d->usMemAdjustTblOffset, d->usMemAdjustTblOffset);
    printf ("%s%04x:  USHORT usMemClkPatchTblOffset%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usMemClkPatchTblOffset)-start), FILL(28), d->usMemClkPatchTblOffset, d->usMemClkPatchTblOffset);
    printf ("%s%04x:  USHORT usRerseved%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usRerseved)-start), FILL(16), d->usRerseved, d->usRerseved);
    printf ("%s%04x:  UCHAR ucMemDQ7_0ByteRemap%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucMemDQ7_0ByteRemap)-start), FILL(24), d->ucMemDQ7_0ByteRemap, d->ucMemDQ7_0ByteRemap);
    printf ("%s%04x:  ULONG ulMemDQ7_0BitRemap%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulMemDQ7_0BitRemap)-start), FILL(23), d->ulMemDQ7_0BitRemap, d->ulMemDQ7_0BitRemap);
    for (i = 0; i < 4; i++) {
      printf ("%s%04x:  UCHAR ucReservde%s [%d] = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucReservde[i])-start), FILL(19+(i>9)), i, d->ucReservde[i], d->ucReservde[i]); }
    printf ("%s%04x:  UCHAR ucNumOfVRAMModule%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucNumOfVRAMModule)-start), FILL(22), d->ucNumOfVRAMModule, d->ucNumOfVRAMModule);
    for (i = 0; i < 16; i++) {
      printf ("%s%04x:  ATOM_VRAM_MODULE_V4 aVramInfo%s [%d] :\n", IND(indent), (int)(((uint8_t*)&d->aVramInfo[i])-start), FILL(32+(i>9)), i); ATOM_VRAM_MODULE_V4_dumper (start, (uint8_t*) &d->aVramInfo[i], indent+1); }
    printf ("%s%04x:  ATOM_INIT_REG_BLOCK asMemPatch%s :\n", IND(indent), (int)(((uint8_t*)&d->asMemPatch)-start), FILL(29)); ATOM_INIT_REG_BLOCK_dumper (start, (uint8_t*) &d->asMemPatch, indent+1);
  }
  return sizeof (ATOM_VRAM_INFO_V4);
}
int ATOM_VRAM_INFO_HEADER_V2_1_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_VRAM_INFO_HEADER_V2_1 *d = (ATOM_VRAM_INFO_HEADER_V2_1 *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ATOM_COMMON_TABLE_HEADER sHeader%s :\n", IND(indent), (int)(((uint8_t*)&d->sHeader)-start), FILL(31)); ATOM_COMMON_TABLE_HEADER_dumper (start, (uint8_t*) &d->sHeader, indent+1);
    printf ("%s%04x:  USHORT usMemAdjustTblOffset%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usMemAdjustTblOffset)-start), FILL(26), d->usMemAdjustTblOffset, d->usMemAdjustTblOffset);
    printf ("%s%04x:  USHORT usMemClkPatchTblOffset%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usMemClkPatchTblOffset)-start), FILL(28), d->usMemClkPatchTblOffset, d->usMemClkPatchTblOffset);
    for (i = 0; i < 4; i++) {
      printf ("%s%04x:  USHORT usReserved%s [%d] = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usReserved[i])-start), FILL(20+(i>9)), i, d->usReserved[i], d->usReserved[i]); }
    printf ("%s%04x:  UCHAR ucNumOfVRAMModule%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucNumOfVRAMModule)-start), FILL(22), d->ucNumOfVRAMModule, d->ucNumOfVRAMModule);
    printf ("%s%04x:  UCHAR ucMemoryClkPatchTblVer%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucMemoryClkPatchTblVer)-start), FILL(27), d->ucMemoryClkPatchTblVer, d->ucMemoryClkPatchTblVer);
    printf ("%s%04x:  UCHAR ucVramModuleVer%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucVramModuleVer)-start), FILL(20), d->ucVramModuleVer, d->ucVramModuleVer);
    printf ("%s%04x:  UCHAR ucReserved%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucReserved)-start), FILL(15), d->ucReserved, d->ucReserved);
    for (i = 0; i < 16; i++) {
      printf ("%s%04x:  ATOM_VRAM_MODULE_V7 aVramInfo%s [%d] :\n", IND(indent), (int)(((uint8_t*)&d->aVramInfo[i])-start), FILL(32+(i>9)), i); ATOM_VRAM_MODULE_V7_dumper (start, (uint8_t*) &d->aVramInfo[i], indent+1); }
  }
  return sizeof (ATOM_VRAM_INFO_HEADER_V2_1);
}
int ATOM_VRAM_GPIO_DETECTION_INFO_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_VRAM_GPIO_DETECTION_INFO *d = (ATOM_VRAM_GPIO_DETECTION_INFO *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ATOM_COMMON_TABLE_HEADER sHeader%s :\n", IND(indent), (int)(((uint8_t*)&d->sHeader)-start), FILL(31)); ATOM_COMMON_TABLE_HEADER_dumper (start, (uint8_t*) &d->sHeader, indent+1);
    for (i = 0; i < 9; i++) {
      printf ("%s%04x:  UCHAR aVID_PinsShift%s [%d] = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->aVID_PinsShift[i])-start), FILL(23+(i>9)), i, d->aVID_PinsShift[i], d->aVID_PinsShift[i]); }
  }
  return sizeof (ATOM_VRAM_GPIO_DETECTION_INFO);
}
int ATOM_MEMORY_TRAINING_INFO_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_MEMORY_TRAINING_INFO *d = (ATOM_MEMORY_TRAINING_INFO *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ATOM_COMMON_TABLE_HEADER sHeader%s :\n", IND(indent), (int)(((uint8_t*)&d->sHeader)-start), FILL(31)); ATOM_COMMON_TABLE_HEADER_dumper (start, (uint8_t*) &d->sHeader, indent+1);
    printf ("%s%04x:  UCHAR ucTrainingLoop%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucTrainingLoop)-start), FILL(19), d->ucTrainingLoop, d->ucTrainingLoop);
    for (i = 0; i < 3; i++) {
      printf ("%s%04x:  UCHAR ucReserved%s [%d] = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucReserved[i])-start), FILL(19+(i>9)), i, d->ucReserved[i], d->ucReserved[i]); }
    printf ("%s%04x:  ATOM_INIT_REG_BLOCK asMemTrainingSetting%s :\n", IND(indent), (int)(((uint8_t*)&d->asMemTrainingSetting)-start), FILL(39)); ATOM_INIT_REG_BLOCK_dumper (start, (uint8_t*) &d->asMemTrainingSetting, indent+1);
  }
  return sizeof (ATOM_MEMORY_TRAINING_INFO);
}
int SW_I2C_IO_DATA_PARAMETERS_dumper (uint8_t *start, uint8_t *data, int indent) {
  SW_I2C_IO_DATA_PARAMETERS *d = (SW_I2C_IO_DATA_PARAMETERS *) data;
  int i;
  if (d) {
    printf ("%s%04x:  USHORT GPIO_Info%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->GPIO_Info)-start), FILL(15), d->GPIO_Info, d->GPIO_Info);
    printf ("%s%04x:  UCHAR ucAct%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucAct)-start), FILL(10), d->ucAct, d->ucAct);
    printf ("%s%04x:  UCHAR ucData%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucData)-start), FILL(11), d->ucData, d->ucData);
  }
  return sizeof (SW_I2C_IO_DATA_PARAMETERS);
}
int PTR_32_BIT_STRUCTURE_dumper (uint8_t *start, uint8_t *data, int indent) {
  PTR_32_BIT_STRUCTURE *d = (PTR_32_BIT_STRUCTURE *) data;
  int i;
  if (d) {
    printf ("%s%04x:  USHORT Offset16%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->Offset16)-start), FILL(14), d->Offset16, d->Offset16);
    printf ("%s%04x:  USHORT Segment16%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->Segment16)-start), FILL(15), d->Segment16, d->Segment16);
  }
  return sizeof (PTR_32_BIT_STRUCTURE);
}
int PTR_32_BIT_UNION_dumper (uint8_t *start, uint8_t *data, int indent) {
  PTR_32_BIT_UNION *d = (PTR_32_BIT_UNION *) data;
  int i;
  if (d) {
    printf ("%s%04x:  (union) PTR_32_BIT_STRUCTURE SegmentOffset%s :\n", IND(indent), (int)(((uint8_t*)&d->SegmentOffset)-start), FILL(41)); PTR_32_BIT_STRUCTURE_dumper (start, (uint8_t*) &d->SegmentOffset, indent+1);
    printf ("%s%04x:  (union) ULONG Ptr32_Bit%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->Ptr32_Bit)-start), FILL(22), d->Ptr32_Bit, d->Ptr32_Bit);
  }
  return sizeof (PTR_32_BIT_UNION);
}
int VBE_1_2_INFO_BLOCK_UPDATABLE_dumper (uint8_t *start, uint8_t *data, int indent) {
  VBE_1_2_INFO_BLOCK_UPDATABLE *d = (VBE_1_2_INFO_BLOCK_UPDATABLE *) data;
  int i;
  if (d) {
    for (i = 0; i < 4; i++) {
      printf ("%s%04x:  UCHAR VbeSignature%s [%d] = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->VbeSignature[i])-start), FILL(21+(i>9)), i, d->VbeSignature[i], d->VbeSignature[i]); }
    printf ("%s%04x:  USHORT VbeVersion%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->VbeVersion)-start), FILL(16), d->VbeVersion, d->VbeVersion);
    printf ("%s%04x:  PTR_32_BIT_UNION OemStringPtr%s :\n", IND(indent), (int)(((uint8_t*)&d->OemStringPtr)-start), FILL(28)); PTR_32_BIT_UNION_dumper (start, (uint8_t*) &d->OemStringPtr, indent+1);
    for (i = 0; i < 4; i++) {
      printf ("%s%04x:  UCHAR Capabilities%s [%d] = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->Capabilities[i])-start), FILL(21+(i>9)), i, d->Capabilities[i], d->Capabilities[i]); }
    printf ("%s%04x:  PTR_32_BIT_UNION VideoModePtr%s :\n", IND(indent), (int)(((uint8_t*)&d->VideoModePtr)-start), FILL(28)); PTR_32_BIT_UNION_dumper (start, (uint8_t*) &d->VideoModePtr, indent+1);
    printf ("%s%04x:  USHORT TotalMemory%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->TotalMemory)-start), FILL(17), d->TotalMemory, d->TotalMemory);
  }
  return sizeof (VBE_1_2_INFO_BLOCK_UPDATABLE);
}
int VBE_2_0_INFO_BLOCK_UPDATABLE_dumper (uint8_t *start, uint8_t *data, int indent) {
  VBE_2_0_INFO_BLOCK_UPDATABLE *d = (VBE_2_0_INFO_BLOCK_UPDATABLE *) data;
  int i;
  if (d) {
    printf ("%s%04x:  VBE_1_2_INFO_BLOCK_UPDATABLE CommonBlock%s :\n", IND(indent), (int)(((uint8_t*)&d->CommonBlock)-start), FILL(39)); VBE_1_2_INFO_BLOCK_UPDATABLE_dumper (start, (uint8_t*) &d->CommonBlock, indent+1);
    printf ("%s%04x:  USHORT OemSoftRev%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->OemSoftRev)-start), FILL(16), d->OemSoftRev, d->OemSoftRev);
    printf ("%s%04x:  PTR_32_BIT_UNION OemVendorNamePtr%s :\n", IND(indent), (int)(((uint8_t*)&d->OemVendorNamePtr)-start), FILL(32)); PTR_32_BIT_UNION_dumper (start, (uint8_t*) &d->OemVendorNamePtr, indent+1);
    printf ("%s%04x:  PTR_32_BIT_UNION OemProductNamePtr%s :\n", IND(indent), (int)(((uint8_t*)&d->OemProductNamePtr)-start), FILL(33)); PTR_32_BIT_UNION_dumper (start, (uint8_t*) &d->OemProductNamePtr, indent+1);
    printf ("%s%04x:  PTR_32_BIT_UNION OemProductRevPtr%s :\n", IND(indent), (int)(((uint8_t*)&d->OemProductRevPtr)-start), FILL(32)); PTR_32_BIT_UNION_dumper (start, (uint8_t*) &d->OemProductRevPtr, indent+1);
  }
  return sizeof (VBE_2_0_INFO_BLOCK_UPDATABLE);
}
int VBE_VERSION_UNION_dumper (uint8_t *start, uint8_t *data, int indent) {
  VBE_VERSION_UNION *d = (VBE_VERSION_UNION *) data;
  int i;
  if (d) {
    printf ("%s%04x:  (union) VBE_2_0_INFO_BLOCK_UPDATABLE VBE_2_0_InfoBlock%s :\n", IND(indent), (int)(((uint8_t*)&d->VBE_2_0_InfoBlock)-start), FILL(53)); VBE_2_0_INFO_BLOCK_UPDATABLE_dumper (start, (uint8_t*) &d->VBE_2_0_InfoBlock, indent+1);
    printf ("%s%04x:  (union) VBE_1_2_INFO_BLOCK_UPDATABLE VBE_1_2_InfoBlock%s :\n", IND(indent), (int)(((uint8_t*)&d->VBE_1_2_InfoBlock)-start), FILL(53)); VBE_1_2_INFO_BLOCK_UPDATABLE_dumper (start, (uint8_t*) &d->VBE_1_2_InfoBlock, indent+1);
  }
  return sizeof (VBE_VERSION_UNION);
}
int VBE_INFO_BLOCK_dumper (uint8_t *start, uint8_t *data, int indent) {
  VBE_INFO_BLOCK *d = (VBE_INFO_BLOCK *) data;
  int i;
  if (d) {
    printf ("%s%04x:  VBE_VERSION_UNION UpdatableVBE_Info%s :\n", IND(indent), (int)(((uint8_t*)&d->UpdatableVBE_Info)-start), FILL(34)); VBE_VERSION_UNION_dumper (start, (uint8_t*) &d->UpdatableVBE_Info, indent+1);
    for (i = 0; i < 222; i++) {
      printf ("%s%04x:  UCHAR Reserved%s [%d] = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->Reserved[i])-start), FILL(17+(i>9)), i, d->Reserved[i], d->Reserved[i]); }
    for (i = 0; i < 256; i++) {
      printf ("%s%04x:  UCHAR OemData%s [%d] = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->OemData[i])-start), FILL(16+(i>9)), i, d->OemData[i], d->OemData[i]); }
  }
  return sizeof (VBE_INFO_BLOCK);
}
int VBE_FP_INFO_dumper (uint8_t *start, uint8_t *data, int indent) {
  VBE_FP_INFO *d = (VBE_FP_INFO *) data;
  int i;
  if (d) {
    printf ("%s%04x:  USHORT HSize%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->HSize)-start), FILL(11), d->HSize, d->HSize);
    printf ("%s%04x:  USHORT VSize%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->VSize)-start), FILL(11), d->VSize, d->VSize);
    printf ("%s%04x:  USHORT FPType%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->FPType)-start), FILL(12), d->FPType, d->FPType);
    printf ("%s%04x:  UCHAR RedBPP%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->RedBPP)-start), FILL(11), d->RedBPP, d->RedBPP);
    printf ("%s%04x:  UCHAR GreenBPP%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->GreenBPP)-start), FILL(13), d->GreenBPP, d->GreenBPP);
    printf ("%s%04x:  UCHAR BlueBPP%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->BlueBPP)-start), FILL(12), d->BlueBPP, d->BlueBPP);
    printf ("%s%04x:  UCHAR ReservedBPP%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ReservedBPP)-start), FILL(16), d->ReservedBPP, d->ReservedBPP);
    printf ("%s%04x:  ULONG RsvdOffScrnMemSize%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->RsvdOffScrnMemSize)-start), FILL(23), d->RsvdOffScrnMemSize, d->RsvdOffScrnMemSize);
    printf ("%s%04x:  ULONG RsvdOffScrnMEmPtr%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->RsvdOffScrnMEmPtr)-start), FILL(22), d->RsvdOffScrnMEmPtr, d->RsvdOffScrnMEmPtr);
    for (i = 0; i < 14; i++) {
      printf ("%s%04x:  UCHAR Reserved%s [%d] = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->Reserved[i])-start), FILL(17+(i>9)), i, d->Reserved[i], d->Reserved[i]); }
  }
  return sizeof (VBE_FP_INFO);
}
int VESA_MODE_INFO_BLOCK_dumper (uint8_t *start, uint8_t *data, int indent) {
  VESA_MODE_INFO_BLOCK *d = (VESA_MODE_INFO_BLOCK *) data;
  int i;
  if (d) {
    printf ("%s%04x:  USHORT ModeAttributes%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->ModeAttributes)-start), FILL(20), d->ModeAttributes, d->ModeAttributes);
    printf ("%s%04x:  UCHAR WinAAttributes%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->WinAAttributes)-start), FILL(19), d->WinAAttributes, d->WinAAttributes);
    printf ("%s%04x:  UCHAR WinBAttributes%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->WinBAttributes)-start), FILL(19), d->WinBAttributes, d->WinBAttributes);
    printf ("%s%04x:  USHORT WinGranularity%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->WinGranularity)-start), FILL(20), d->WinGranularity, d->WinGranularity);
    printf ("%s%04x:  USHORT WinSize%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->WinSize)-start), FILL(13), d->WinSize, d->WinSize);
    printf ("%s%04x:  USHORT WinASegment%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->WinASegment)-start), FILL(17), d->WinASegment, d->WinASegment);
    printf ("%s%04x:  USHORT WinBSegment%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->WinBSegment)-start), FILL(17), d->WinBSegment, d->WinBSegment);
    printf ("%s%04x:  ULONG WinFuncPtr%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->WinFuncPtr)-start), FILL(15), d->WinFuncPtr, d->WinFuncPtr);
    printf ("%s%04x:  USHORT BytesPerScanLine%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->BytesPerScanLine)-start), FILL(22), d->BytesPerScanLine, d->BytesPerScanLine);
    printf ("%s%04x:  USHORT XResolution%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->XResolution)-start), FILL(17), d->XResolution, d->XResolution);
    printf ("%s%04x:  USHORT YResolution%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->YResolution)-start), FILL(17), d->YResolution, d->YResolution);
    printf ("%s%04x:  UCHAR XCharSize%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->XCharSize)-start), FILL(14), d->XCharSize, d->XCharSize);
    printf ("%s%04x:  UCHAR YCharSize%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->YCharSize)-start), FILL(14), d->YCharSize, d->YCharSize);
    printf ("%s%04x:  UCHAR NumberOfPlanes%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->NumberOfPlanes)-start), FILL(19), d->NumberOfPlanes, d->NumberOfPlanes);
    printf ("%s%04x:  UCHAR BitsPerPixel%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->BitsPerPixel)-start), FILL(17), d->BitsPerPixel, d->BitsPerPixel);
    printf ("%s%04x:  UCHAR NumberOfBanks%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->NumberOfBanks)-start), FILL(18), d->NumberOfBanks, d->NumberOfBanks);
    printf ("%s%04x:  UCHAR MemoryModel%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->MemoryModel)-start), FILL(16), d->MemoryModel, d->MemoryModel);
    printf ("%s%04x:  UCHAR BankSize%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->BankSize)-start), FILL(13), d->BankSize, d->BankSize);
    printf ("%s%04x:  UCHAR NumberOfImagePages%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->NumberOfImagePages)-start), FILL(23), d->NumberOfImagePages, d->NumberOfImagePages);
    printf ("%s%04x:  UCHAR ReservedForPageFunction%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ReservedForPageFunction)-start), FILL(28), d->ReservedForPageFunction, d->ReservedForPageFunction);
    printf ("%s%04x:  UCHAR RedMaskSize%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->RedMaskSize)-start), FILL(16), d->RedMaskSize, d->RedMaskSize);
    printf ("%s%04x:  UCHAR RedFieldPosition%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->RedFieldPosition)-start), FILL(21), d->RedFieldPosition, d->RedFieldPosition);
    printf ("%s%04x:  UCHAR GreenMaskSize%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->GreenMaskSize)-start), FILL(18), d->GreenMaskSize, d->GreenMaskSize);
    printf ("%s%04x:  UCHAR GreenFieldPosition%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->GreenFieldPosition)-start), FILL(23), d->GreenFieldPosition, d->GreenFieldPosition);
    printf ("%s%04x:  UCHAR BlueMaskSize%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->BlueMaskSize)-start), FILL(17), d->BlueMaskSize, d->BlueMaskSize);
    printf ("%s%04x:  UCHAR BlueFieldPosition%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->BlueFieldPosition)-start), FILL(22), d->BlueFieldPosition, d->BlueFieldPosition);
    printf ("%s%04x:  UCHAR RsvdMaskSize%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->RsvdMaskSize)-start), FILL(17), d->RsvdMaskSize, d->RsvdMaskSize);
    printf ("%s%04x:  UCHAR RsvdFieldPosition%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->RsvdFieldPosition)-start), FILL(22), d->RsvdFieldPosition, d->RsvdFieldPosition);
    printf ("%s%04x:  UCHAR DirectColorModeInfo%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->DirectColorModeInfo)-start), FILL(24), d->DirectColorModeInfo, d->DirectColorModeInfo);
    printf ("%s%04x:  ULONG PhysBasePtr%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->PhysBasePtr)-start), FILL(16), d->PhysBasePtr, d->PhysBasePtr);
    printf ("%s%04x:  ULONG Reserved_1%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->Reserved_1)-start), FILL(15), d->Reserved_1, d->Reserved_1);
    printf ("%s%04x:  USHORT Reserved_2%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->Reserved_2)-start), FILL(16), d->Reserved_2, d->Reserved_2);
    printf ("%s%04x:  USHORT LinBytesPerScanLine%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->LinBytesPerScanLine)-start), FILL(25), d->LinBytesPerScanLine, d->LinBytesPerScanLine);
    printf ("%s%04x:  UCHAR BnkNumberOfImagePages%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->BnkNumberOfImagePages)-start), FILL(26), d->BnkNumberOfImagePages, d->BnkNumberOfImagePages);
    printf ("%s%04x:  UCHAR LinNumberOfImagPages%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->LinNumberOfImagPages)-start), FILL(25), d->LinNumberOfImagPages, d->LinNumberOfImagPages);
    printf ("%s%04x:  UCHAR LinRedMaskSize%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->LinRedMaskSize)-start), FILL(19), d->LinRedMaskSize, d->LinRedMaskSize);
    printf ("%s%04x:  UCHAR LinRedFieldPosition%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->LinRedFieldPosition)-start), FILL(24), d->LinRedFieldPosition, d->LinRedFieldPosition);
    printf ("%s%04x:  UCHAR LinGreenMaskSize%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->LinGreenMaskSize)-start), FILL(21), d->LinGreenMaskSize, d->LinGreenMaskSize);
    printf ("%s%04x:  UCHAR LinGreenFieldPosition%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->LinGreenFieldPosition)-start), FILL(26), d->LinGreenFieldPosition, d->LinGreenFieldPosition);
    printf ("%s%04x:  UCHAR LinBlueMaskSize%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->LinBlueMaskSize)-start), FILL(20), d->LinBlueMaskSize, d->LinBlueMaskSize);
    printf ("%s%04x:  UCHAR LinBlueFieldPosition%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->LinBlueFieldPosition)-start), FILL(25), d->LinBlueFieldPosition, d->LinBlueFieldPosition);
    printf ("%s%04x:  UCHAR LinRsvdMaskSize%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->LinRsvdMaskSize)-start), FILL(20), d->LinRsvdMaskSize, d->LinRsvdMaskSize);
    printf ("%s%04x:  UCHAR LinRsvdFieldPosition%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->LinRsvdFieldPosition)-start), FILL(25), d->LinRsvdFieldPosition, d->LinRsvdFieldPosition);
    printf ("%s%04x:  ULONG MaxPixelClock%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->MaxPixelClock)-start), FILL(18), d->MaxPixelClock, d->MaxPixelClock);
    printf ("%s%04x:  UCHAR Reserved%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->Reserved)-start), FILL(13), d->Reserved, d->Reserved);
  }
  return sizeof (VESA_MODE_INFO_BLOCK);
}
int ASIC_TRANSMITTER_INFO_dumper (uint8_t *start, uint8_t *data, int indent) {
  ASIC_TRANSMITTER_INFO *d = (ASIC_TRANSMITTER_INFO *) data;
  int i;
  if (d) {
    printf ("%s%04x:  USHORT usTransmitterObjId%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usTransmitterObjId)-start), FILL(24), d->usTransmitterObjId, d->usTransmitterObjId);
    printf ("%s%04x:  USHORT usSupportDevice%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usSupportDevice)-start), FILL(21), d->usSupportDevice, d->usSupportDevice);
    printf ("%s%04x:  UCHAR ucTransmitterCmdTblId%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucTransmitterCmdTblId)-start), FILL(26), d->ucTransmitterCmdTblId, d->ucTransmitterCmdTblId);
    printf ("%s%04x:  UCHAR ucConfig%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucConfig)-start), FILL(13), d->ucConfig, d->ucConfig);
    printf ("%s%04x:  UCHAR ucEncoderID%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucEncoderID)-start), FILL(16), d->ucEncoderID, d->ucEncoderID);
    printf ("%s%04x:  UCHAR ucOptionEncoderID%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucOptionEncoderID)-start), FILL(22), d->ucOptionEncoderID, d->ucOptionEncoderID);
    printf ("%s%04x:  UCHAR uc2ndEncoderID%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->uc2ndEncoderID)-start), FILL(19), d->uc2ndEncoderID, d->uc2ndEncoderID);
    printf ("%s%04x:  UCHAR ucReserved%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucReserved)-start), FILL(15), d->ucReserved, d->ucReserved);
  }
  return sizeof (ASIC_TRANSMITTER_INFO);
}
int ASIC_ENCODER_INFO_dumper (uint8_t *start, uint8_t *data, int indent) {
  ASIC_ENCODER_INFO *d = (ASIC_ENCODER_INFO *) data;
  int i;
  if (d) {
    printf ("%s%04x:  UCHAR ucEncoderID%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucEncoderID)-start), FILL(16), d->ucEncoderID, d->ucEncoderID);
    printf ("%s%04x:  UCHAR ucEncoderConfig%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucEncoderConfig)-start), FILL(20), d->ucEncoderConfig, d->ucEncoderConfig);
    printf ("%s%04x:  USHORT usEncoderCmdTblId%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usEncoderCmdTblId)-start), FILL(23), d->usEncoderCmdTblId, d->usEncoderCmdTblId);
  }
  return sizeof (ASIC_ENCODER_INFO);
}
int ATOM_DISP_OUT_INFO_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_DISP_OUT_INFO *d = (ATOM_DISP_OUT_INFO *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ATOM_COMMON_TABLE_HEADER sHeader%s :\n", IND(indent), (int)(((uint8_t*)&d->sHeader)-start), FILL(31)); ATOM_COMMON_TABLE_HEADER_dumper (start, (uint8_t*) &d->sHeader, indent+1);
    printf ("%s%04x:  USHORT ptrTransmitterInfo%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->ptrTransmitterInfo)-start), FILL(24), d->ptrTransmitterInfo, d->ptrTransmitterInfo);
    printf ("%s%04x:  USHORT ptrEncoderInfo%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->ptrEncoderInfo)-start), FILL(20), d->ptrEncoderInfo, d->ptrEncoderInfo);
    for (i = 0; i < 1; i++) {
      printf ("%s%04x:  ASIC_TRANSMITTER_INFO asTransmitterInfo%s [%d] :\n", IND(indent), (int)(((uint8_t*)&d->asTransmitterInfo[i])-start), FILL(42+(i>9)), i); ASIC_TRANSMITTER_INFO_dumper (start, (uint8_t*) &d->asTransmitterInfo[i], indent+1); }
    for (i = 0; i < 1; i++) {
      printf ("%s%04x:  ASIC_ENCODER_INFO asEncoderInfo%s [%d] :\n", IND(indent), (int)(((uint8_t*)&d->asEncoderInfo[i])-start), FILL(34+(i>9)), i); ASIC_ENCODER_INFO_dumper (start, (uint8_t*) &d->asEncoderInfo[i], indent+1); }
  }
  return sizeof (ATOM_DISP_OUT_INFO);
}
int ATOM_DISP_OUT_INFO_V2_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_DISP_OUT_INFO_V2 *d = (ATOM_DISP_OUT_INFO_V2 *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ATOM_COMMON_TABLE_HEADER sHeader%s :\n", IND(indent), (int)(((uint8_t*)&d->sHeader)-start), FILL(31)); ATOM_COMMON_TABLE_HEADER_dumper (start, (uint8_t*) &d->sHeader, indent+1);
    printf ("%s%04x:  USHORT ptrTransmitterInfo%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->ptrTransmitterInfo)-start), FILL(24), d->ptrTransmitterInfo, d->ptrTransmitterInfo);
    printf ("%s%04x:  USHORT ptrEncoderInfo%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->ptrEncoderInfo)-start), FILL(20), d->ptrEncoderInfo, d->ptrEncoderInfo);
    printf ("%s%04x:  USHORT ptrMainCallParserFar%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->ptrMainCallParserFar)-start), FILL(26), d->ptrMainCallParserFar, d->ptrMainCallParserFar);
    for (i = 0; i < 1; i++) {
      printf ("%s%04x:  ASIC_TRANSMITTER_INFO asTransmitterInfo%s [%d] :\n", IND(indent), (int)(((uint8_t*)&d->asTransmitterInfo[i])-start), FILL(42+(i>9)), i); ASIC_TRANSMITTER_INFO_dumper (start, (uint8_t*) &d->asTransmitterInfo[i], indent+1); }
    for (i = 0; i < 1; i++) {
      printf ("%s%04x:  ASIC_ENCODER_INFO asEncoderInfo%s [%d] :\n", IND(indent), (int)(((uint8_t*)&d->asEncoderInfo[i])-start), FILL(34+(i>9)), i); ASIC_ENCODER_INFO_dumper (start, (uint8_t*) &d->asEncoderInfo[i], indent+1); }
  }
  return sizeof (ATOM_DISP_OUT_INFO_V2);
}
int ATOM_DISPLAY_DEVICE_PRIORITY_INFO_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_DISPLAY_DEVICE_PRIORITY_INFO *d = (ATOM_DISPLAY_DEVICE_PRIORITY_INFO *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ATOM_COMMON_TABLE_HEADER sHeader%s :\n", IND(indent), (int)(((uint8_t*)&d->sHeader)-start), FILL(31)); ATOM_COMMON_TABLE_HEADER_dumper (start, (uint8_t*) &d->sHeader, indent+1);
    for (i = 0; i < 16; i++) {
      printf ("%s%04x:  USHORT asDevicePriority%s [%d] = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->asDevicePriority[i])-start), FILL(26+(i>9)), i, d->asDevicePriority[i], d->asDevicePriority[i]); }
  }
  return sizeof (ATOM_DISPLAY_DEVICE_PRIORITY_INFO);
}
int PROCESS_AUX_CHANNEL_TRANSACTION_PARAMETERS_dumper (uint8_t *start, uint8_t *data, int indent) {
  PROCESS_AUX_CHANNEL_TRANSACTION_PARAMETERS *d = (PROCESS_AUX_CHANNEL_TRANSACTION_PARAMETERS *) data;
  int i;
  if (d) {
    printf ("%s%04x:  USHORT lpAuxRequest%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->lpAuxRequest)-start), FILL(18), d->lpAuxRequest, d->lpAuxRequest);
    printf ("%s%04x:  USHORT lpDataOut%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->lpDataOut)-start), FILL(15), d->lpDataOut, d->lpDataOut);
    printf ("%s%04x:  UCHAR ucChannelID%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucChannelID)-start), FILL(16), d->ucChannelID, d->ucChannelID);
    printf ("%s  <unparsable> line 3798:  union\n%sskipping...\n", IND(indent), IND(indent));
  }
  return sizeof (PROCESS_AUX_CHANNEL_TRANSACTION_PARAMETERS);
}
int PROCESS_AUX_CHANNEL_TRANSACTION_PARAMETERS_V2_dumper (uint8_t *start, uint8_t *data, int indent) {
  PROCESS_AUX_CHANNEL_TRANSACTION_PARAMETERS_V2 *d = (PROCESS_AUX_CHANNEL_TRANSACTION_PARAMETERS_V2 *) data;
  int i;
  if (d) {
    printf ("%s%04x:  USHORT lpAuxRequest%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->lpAuxRequest)-start), FILL(18), d->lpAuxRequest, d->lpAuxRequest);
    printf ("%s%04x:  USHORT lpDataOut%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->lpDataOut)-start), FILL(15), d->lpDataOut, d->lpDataOut);
    printf ("%s%04x:  UCHAR ucChannelID%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucChannelID)-start), FILL(16), d->ucChannelID, d->ucChannelID);
    printf ("%s  <unparsable> line 3813:  union\n%sskipping...\n", IND(indent), IND(indent));
  }
  return sizeof (PROCESS_AUX_CHANNEL_TRANSACTION_PARAMETERS_V2);
}
int DP_ENCODER_SERVICE_PARAMETERS_dumper (uint8_t *start, uint8_t *data, int indent) {
  DP_ENCODER_SERVICE_PARAMETERS *d = (DP_ENCODER_SERVICE_PARAMETERS *) data;
  int i;
  if (d) {
    printf ("%s%04x:  USHORT ucLinkClock%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucLinkClock)-start), FILL(17), d->ucLinkClock, d->ucLinkClock);
    printf ("%s  <unparsable> line 3829:  union\n%sskipping...\n", IND(indent), IND(indent));
  }
  return sizeof (DP_ENCODER_SERVICE_PARAMETERS);
}
int DP_ENCODER_SERVICE_PARAMETERS_V2_dumper (uint8_t *start, uint8_t *data, int indent) {
  DP_ENCODER_SERVICE_PARAMETERS_V2 *d = (DP_ENCODER_SERVICE_PARAMETERS_V2 *) data;
  int i;
  if (d) {
    printf ("%s%04x:  USHORT usExtEncoderObjId%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usExtEncoderObjId)-start), FILL(23), d->usExtEncoderObjId, d->usExtEncoderObjId);
    printf ("%s%04x:  UCHAR ucAuxId%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucAuxId)-start), FILL(12), d->ucAuxId, d->ucAuxId);
    printf ("%s%04x:  UCHAR ucAction%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucAction)-start), FILL(13), d->ucAction, d->ucAction);
    printf ("%s%04x:  UCHAR ucSinkType%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucSinkType)-start), FILL(15), d->ucSinkType, d->ucSinkType);
    printf ("%s%04x:  UCHAR ucHPDId%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucHPDId)-start), FILL(12), d->ucHPDId, d->ucHPDId);
    for (i = 0; i < 2; i++) {
      printf ("%s%04x:  UCHAR ucReserved%s [%d] = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucReserved[i])-start), FILL(19+(i>9)), i, d->ucReserved[i], d->ucReserved[i]); }
  }
  return sizeof (DP_ENCODER_SERVICE_PARAMETERS_V2);
}
int DP_ENCODER_SERVICE_PS_ALLOCATION_V2_dumper (uint8_t *start, uint8_t *data, int indent) {
  DP_ENCODER_SERVICE_PS_ALLOCATION_V2 *d = (DP_ENCODER_SERVICE_PS_ALLOCATION_V2 *) data;
  int i;
  if (d) {
    printf ("%s%04x:  DP_ENCODER_SERVICE_PARAMETERS_V2 asDPServiceParam%s :\n", IND(indent), (int)(((uint8_t*)&d->asDPServiceParam)-start), FILL(48)); DP_ENCODER_SERVICE_PARAMETERS_V2_dumper (start, (uint8_t*) &d->asDPServiceParam, indent+1);
    printf ("%s%04x:  PROCESS_AUX_CHANNEL_TRANSACTION_PARAMETERS_V2 asAuxParam%s :\n", IND(indent), (int)(((uint8_t*)&d->asAuxParam)-start), FILL(55)); PROCESS_AUX_CHANNEL_TRANSACTION_PARAMETERS_V2_dumper (start, (uint8_t*) &d->asAuxParam, indent+1);
  }
  return sizeof (DP_ENCODER_SERVICE_PS_ALLOCATION_V2);
}
int PROCESS_I2C_CHANNEL_TRANSACTION_PARAMETERS_dumper (uint8_t *start, uint8_t *data, int indent) {
  PROCESS_I2C_CHANNEL_TRANSACTION_PARAMETERS *d = (PROCESS_I2C_CHANNEL_TRANSACTION_PARAMETERS *) data;
  int i;
  if (d) {
    printf ("%s%04x:  UCHAR ucI2CSpeed%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucI2CSpeed)-start), FILL(15), d->ucI2CSpeed, d->ucI2CSpeed);
    printf ("%s  <unparsable> line 3859:   union\n%sskipping...\n", IND(indent), IND(indent));
  }
  return sizeof (PROCESS_I2C_CHANNEL_TRANSACTION_PARAMETERS);
}
int SET_HWBLOCK_INSTANCE_PARAMETER_V2_dumper (uint8_t *start, uint8_t *data, int indent) {
  SET_HWBLOCK_INSTANCE_PARAMETER_V2 *d = (SET_HWBLOCK_INSTANCE_PARAMETER_V2 *) data;
  int i;
  if (d) {
    printf ("%s%04x:  UCHAR ucHWBlkInst%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucHWBlkInst)-start), FILL(16), d->ucHWBlkInst, d->ucHWBlkInst);
    for (i = 0; i < 3; i++) {
      printf ("%s%04x:  UCHAR ucReserved%s [%d] = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucReserved[i])-start), FILL(19+(i>9)), i, d->ucReserved[i], d->ucReserved[i]); }
  }
  return sizeof (SET_HWBLOCK_INSTANCE_PARAMETER_V2);
}
int ATOM_DAC_INFO_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_DAC_INFO *d = (ATOM_DAC_INFO *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ATOM_COMMON_TABLE_HEADER sHeader%s :\n", IND(indent), (int)(((uint8_t*)&d->sHeader)-start), FILL(31)); ATOM_COMMON_TABLE_HEADER_dumper (start, (uint8_t*) &d->sHeader, indent+1);
    printf ("%s%04x:  USHORT usMaxFrequency%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usMaxFrequency)-start), FILL(20), d->usMaxFrequency, d->usMaxFrequency);
    printf ("%s%04x:  USHORT usReserved%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usReserved)-start), FILL(16), d->usReserved, d->usReserved);
  }
  return sizeof (ATOM_DAC_INFO);
}
int COMPASSIONATE_DATA_dumper (uint8_t *start, uint8_t *data, int indent) {
  COMPASSIONATE_DATA *d = (COMPASSIONATE_DATA *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ATOM_COMMON_TABLE_HEADER sHeader%s :\n", IND(indent), (int)(((uint8_t*)&d->sHeader)-start), FILL(31)); ATOM_COMMON_TABLE_HEADER_dumper (start, (uint8_t*) &d->sHeader, indent+1);
    printf ("%s%04x:  UCHAR ucDAC1_BG_Adjustment%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucDAC1_BG_Adjustment)-start), FILL(25), d->ucDAC1_BG_Adjustment, d->ucDAC1_BG_Adjustment);
    printf ("%s%04x:  UCHAR ucDAC1_DAC_Adjustment%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucDAC1_DAC_Adjustment)-start), FILL(26), d->ucDAC1_DAC_Adjustment, d->ucDAC1_DAC_Adjustment);
    printf ("%s%04x:  USHORT usDAC1_FORCE_Data%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usDAC1_FORCE_Data)-start), FILL(23), d->usDAC1_FORCE_Data, d->usDAC1_FORCE_Data);
    printf ("%s%04x:  UCHAR ucDAC2_CRT2_BG_Adjustment%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucDAC2_CRT2_BG_Adjustment)-start), FILL(30), d->ucDAC2_CRT2_BG_Adjustment, d->ucDAC2_CRT2_BG_Adjustment);
    printf ("%s%04x:  UCHAR ucDAC2_CRT2_DAC_Adjustment%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucDAC2_CRT2_DAC_Adjustment)-start), FILL(31), d->ucDAC2_CRT2_DAC_Adjustment, d->ucDAC2_CRT2_DAC_Adjustment);
    printf ("%s%04x:  USHORT usDAC2_CRT2_FORCE_Data%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usDAC2_CRT2_FORCE_Data)-start), FILL(28), d->usDAC2_CRT2_FORCE_Data, d->usDAC2_CRT2_FORCE_Data);
    printf ("%s%04x:  USHORT usDAC2_CRT2_MUX_RegisterIndex%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usDAC2_CRT2_MUX_RegisterIndex)-start), FILL(35), d->usDAC2_CRT2_MUX_RegisterIndex, d->usDAC2_CRT2_MUX_RegisterIndex);
    printf ("%s%04x:  UCHAR ucDAC2_CRT2_MUX_RegisterInfo%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucDAC2_CRT2_MUX_RegisterInfo)-start), FILL(33), d->ucDAC2_CRT2_MUX_RegisterInfo, d->ucDAC2_CRT2_MUX_RegisterInfo);
    printf ("%s%04x:  UCHAR ucDAC2_NTSC_BG_Adjustment%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucDAC2_NTSC_BG_Adjustment)-start), FILL(30), d->ucDAC2_NTSC_BG_Adjustment, d->ucDAC2_NTSC_BG_Adjustment);
    printf ("%s%04x:  UCHAR ucDAC2_NTSC_DAC_Adjustment%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucDAC2_NTSC_DAC_Adjustment)-start), FILL(31), d->ucDAC2_NTSC_DAC_Adjustment, d->ucDAC2_NTSC_DAC_Adjustment);
    printf ("%s%04x:  USHORT usDAC2_TV1_FORCE_Data%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usDAC2_TV1_FORCE_Data)-start), FILL(27), d->usDAC2_TV1_FORCE_Data, d->usDAC2_TV1_FORCE_Data);
    printf ("%s%04x:  USHORT usDAC2_TV1_MUX_RegisterIndex%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usDAC2_TV1_MUX_RegisterIndex)-start), FILL(34), d->usDAC2_TV1_MUX_RegisterIndex, d->usDAC2_TV1_MUX_RegisterIndex);
    printf ("%s%04x:  UCHAR ucDAC2_TV1_MUX_RegisterInfo%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucDAC2_TV1_MUX_RegisterInfo)-start), FILL(32), d->ucDAC2_TV1_MUX_RegisterInfo, d->ucDAC2_TV1_MUX_RegisterInfo);
    printf ("%s%04x:  UCHAR ucDAC2_CV_BG_Adjustment%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucDAC2_CV_BG_Adjustment)-start), FILL(28), d->ucDAC2_CV_BG_Adjustment, d->ucDAC2_CV_BG_Adjustment);
    printf ("%s%04x:  UCHAR ucDAC2_CV_DAC_Adjustment%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucDAC2_CV_DAC_Adjustment)-start), FILL(29), d->ucDAC2_CV_DAC_Adjustment, d->ucDAC2_CV_DAC_Adjustment);
    printf ("%s%04x:  USHORT usDAC2_CV_FORCE_Data%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usDAC2_CV_FORCE_Data)-start), FILL(26), d->usDAC2_CV_FORCE_Data, d->usDAC2_CV_FORCE_Data);
    printf ("%s%04x:  USHORT usDAC2_CV_MUX_RegisterIndex%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usDAC2_CV_MUX_RegisterIndex)-start), FILL(33), d->usDAC2_CV_MUX_RegisterIndex, d->usDAC2_CV_MUX_RegisterIndex);
    printf ("%s%04x:  UCHAR ucDAC2_CV_MUX_RegisterInfo%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucDAC2_CV_MUX_RegisterInfo)-start), FILL(31), d->ucDAC2_CV_MUX_RegisterInfo, d->ucDAC2_CV_MUX_RegisterInfo);
    printf ("%s%04x:  UCHAR ucDAC2_PAL_BG_Adjustment%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucDAC2_PAL_BG_Adjustment)-start), FILL(29), d->ucDAC2_PAL_BG_Adjustment, d->ucDAC2_PAL_BG_Adjustment);
    printf ("%s%04x:  UCHAR ucDAC2_PAL_DAC_Adjustment%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucDAC2_PAL_DAC_Adjustment)-start), FILL(30), d->ucDAC2_PAL_DAC_Adjustment, d->ucDAC2_PAL_DAC_Adjustment);
    printf ("%s%04x:  USHORT usDAC2_TV2_FORCE_Data%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usDAC2_TV2_FORCE_Data)-start), FILL(27), d->usDAC2_TV2_FORCE_Data, d->usDAC2_TV2_FORCE_Data);
  }
  return sizeof (COMPASSIONATE_DATA);
}
int ATOM_CONNECTOR_INFO_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_CONNECTOR_INFO *d = (ATOM_CONNECTOR_INFO *) data;
  int i;
  if (d) {
    printf ("%s       UCHAR bfAssociatedDAC:4%s = 0x%02x       (%d)\n", IND(indent), FILL(22), d->bfAssociatedDAC, d->bfAssociatedDAC);
    printf ("%s       UCHAR bfConnectorType:4%s = 0x%02x       (%d)\n", IND(indent), FILL(22), d->bfConnectorType, d->bfConnectorType);
  }
  return sizeof (ATOM_CONNECTOR_INFO);
}
int ATOM_CONNECTOR_INFO_ACCESS_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_CONNECTOR_INFO_ACCESS *d = (ATOM_CONNECTOR_INFO_ACCESS *) data;
  int i;
  if (d) {
    printf ("%s%04x:  (union) ATOM_CONNECTOR_INFO sbfAccess%s :\n", IND(indent), (int)(((uint8_t*)&d->sbfAccess)-start), FILL(36)); ATOM_CONNECTOR_INFO_dumper (start, (uint8_t*) &d->sbfAccess, indent+1);
    printf ("%s%04x:  (union) UCHAR ucAccess%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucAccess)-start), FILL(21), d->ucAccess, d->ucAccess);
  }
  return sizeof (ATOM_CONNECTOR_INFO_ACCESS);
}
int ATOM_CONNECTOR_INFO_I2C_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_CONNECTOR_INFO_I2C *d = (ATOM_CONNECTOR_INFO_I2C *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ATOM_CONNECTOR_INFO_ACCESS sucConnectorInfo%s :\n", IND(indent), (int)(((uint8_t*)&d->sucConnectorInfo)-start), FILL(42)); ATOM_CONNECTOR_INFO_ACCESS_dumper (start, (uint8_t*) &d->sucConnectorInfo, indent+1);
    printf ("%s%04x:  ATOM_I2C_ID_CONFIG_ACCESS sucI2cId%s :\n", IND(indent), (int)(((uint8_t*)&d->sucI2cId)-start), FILL(33)); ATOM_I2C_ID_CONFIG_ACCESS_dumper (start, (uint8_t*) &d->sucI2cId, indent+1);
  }
  return sizeof (ATOM_CONNECTOR_INFO_I2C);
}
int ATOM_SUPPORTED_DEVICES_INFO_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_SUPPORTED_DEVICES_INFO *d = (ATOM_SUPPORTED_DEVICES_INFO *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ATOM_COMMON_TABLE_HEADER sHeader%s :\n", IND(indent), (int)(((uint8_t*)&d->sHeader)-start), FILL(31)); ATOM_COMMON_TABLE_HEADER_dumper (start, (uint8_t*) &d->sHeader, indent+1);
    printf ("%s%04x:  USHORT usDeviceSupport%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usDeviceSupport)-start), FILL(21), d->usDeviceSupport, d->usDeviceSupport);
    for (i = 0; i < 10; i++) {
      printf ("%s%04x:  ATOM_CONNECTOR_INFO_I2C asConnInfo%s [%d] :\n", IND(indent), (int)(((uint8_t*)&d->asConnInfo[i])-start), FILL(37+(i>9)), i); ATOM_CONNECTOR_INFO_I2C_dumper (start, (uint8_t*) &d->asConnInfo[i], indent+1); }
  }
  return sizeof (ATOM_SUPPORTED_DEVICES_INFO);
}
int ATOM_CONNECTOR_INC_SRC_BITMAP_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_CONNECTOR_INC_SRC_BITMAP *d = (ATOM_CONNECTOR_INC_SRC_BITMAP *) data;
  int i;
  if (d) {
    printf ("%s%04x:  UCHAR ucIntSrcBitmap%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucIntSrcBitmap)-start), FILL(19), d->ucIntSrcBitmap, d->ucIntSrcBitmap);
  }
  return sizeof (ATOM_CONNECTOR_INC_SRC_BITMAP);
}
int ATOM_SUPPORTED_DEVICES_INFO_2_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_SUPPORTED_DEVICES_INFO_2 *d = (ATOM_SUPPORTED_DEVICES_INFO_2 *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ATOM_COMMON_TABLE_HEADER sHeader%s :\n", IND(indent), (int)(((uint8_t*)&d->sHeader)-start), FILL(31)); ATOM_COMMON_TABLE_HEADER_dumper (start, (uint8_t*) &d->sHeader, indent+1);
    printf ("%s%04x:  USHORT usDeviceSupport%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usDeviceSupport)-start), FILL(21), d->usDeviceSupport, d->usDeviceSupport);
    for (i = 0; i < 10; i++) {
      printf ("%s%04x:  ATOM_CONNECTOR_INFO_I2C asConnInfo%s [%d] :\n", IND(indent), (int)(((uint8_t*)&d->asConnInfo[i])-start), FILL(37+(i>9)), i); ATOM_CONNECTOR_INFO_I2C_dumper (start, (uint8_t*) &d->asConnInfo[i], indent+1); }
    for (i = 0; i < 10; i++) {
      printf ("%s%04x:  ATOM_CONNECTOR_INC_SRC_BITMAP asIntSrcInfo%s [%d] :\n", IND(indent), (int)(((uint8_t*)&d->asIntSrcInfo[i])-start), FILL(45+(i>9)), i); ATOM_CONNECTOR_INC_SRC_BITMAP_dumper (start, (uint8_t*) &d->asIntSrcInfo[i], indent+1); }
  }
  return sizeof (ATOM_SUPPORTED_DEVICES_INFO_2);
}
int ATOM_SUPPORTED_DEVICES_INFO_2d1_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_SUPPORTED_DEVICES_INFO_2d1 *d = (ATOM_SUPPORTED_DEVICES_INFO_2d1 *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ATOM_COMMON_TABLE_HEADER sHeader%s :\n", IND(indent), (int)(((uint8_t*)&d->sHeader)-start), FILL(31)); ATOM_COMMON_TABLE_HEADER_dumper (start, (uint8_t*) &d->sHeader, indent+1);
    printf ("%s%04x:  USHORT usDeviceSupport%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usDeviceSupport)-start), FILL(21), d->usDeviceSupport, d->usDeviceSupport);
    for (i = 0; i < 16; i++) {
      printf ("%s%04x:  ATOM_CONNECTOR_INFO_I2C asConnInfo%s [%d] :\n", IND(indent), (int)(((uint8_t*)&d->asConnInfo[i])-start), FILL(37+(i>9)), i); ATOM_CONNECTOR_INFO_I2C_dumper (start, (uint8_t*) &d->asConnInfo[i], indent+1); }
    for (i = 0; i < 16; i++) {
      printf ("%s%04x:  ATOM_CONNECTOR_INC_SRC_BITMAP asIntSrcInfo%s [%d] :\n", IND(indent), (int)(((uint8_t*)&d->asIntSrcInfo[i])-start), FILL(45+(i>9)), i); ATOM_CONNECTOR_INC_SRC_BITMAP_dumper (start, (uint8_t*) &d->asIntSrcInfo[i], indent+1); }
  }
  return sizeof (ATOM_SUPPORTED_DEVICES_INFO_2d1);
}
int ATOM_MISC_CONTROL_INFO_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_MISC_CONTROL_INFO *d = (ATOM_MISC_CONTROL_INFO *) data;
  int i;
  if (d) {
    printf ("%s%04x:  USHORT usFrequency%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usFrequency)-start), FILL(17), d->usFrequency, d->usFrequency);
    printf ("%s%04x:  UCHAR ucPLL_ChargePump%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucPLL_ChargePump)-start), FILL(21), d->ucPLL_ChargePump, d->ucPLL_ChargePump);
    printf ("%s%04x:  UCHAR ucPLL_DutyCycle%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucPLL_DutyCycle)-start), FILL(20), d->ucPLL_DutyCycle, d->ucPLL_DutyCycle);
    printf ("%s%04x:  UCHAR ucPLL_VCO_Gain%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucPLL_VCO_Gain)-start), FILL(19), d->ucPLL_VCO_Gain, d->ucPLL_VCO_Gain);
    printf ("%s%04x:  UCHAR ucPLL_VoltageSwing%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucPLL_VoltageSwing)-start), FILL(23), d->ucPLL_VoltageSwing, d->ucPLL_VoltageSwing);
  }
  return sizeof (ATOM_MISC_CONTROL_INFO);
}
int ATOM_TMDS_INFO_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_TMDS_INFO *d = (ATOM_TMDS_INFO *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ATOM_COMMON_TABLE_HEADER sHeader%s :\n", IND(indent), (int)(((uint8_t*)&d->sHeader)-start), FILL(31)); ATOM_COMMON_TABLE_HEADER_dumper (start, (uint8_t*) &d->sHeader, indent+1);
    printf ("%s%04x:  USHORT usMaxFrequency%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usMaxFrequency)-start), FILL(20), d->usMaxFrequency, d->usMaxFrequency);
    for (i = 0; i < 4; i++) {
      printf ("%s%04x:  ATOM_MISC_CONTROL_INFO asMiscInfo%s [%d] :\n", IND(indent), (int)(((uint8_t*)&d->asMiscInfo[i])-start), FILL(36+(i>9)), i); ATOM_MISC_CONTROL_INFO_dumper (start, (uint8_t*) &d->asMiscInfo[i], indent+1); }
  }
  return sizeof (ATOM_TMDS_INFO);
}
int ATOM_ENCODER_ANALOG_ATTRIBUTE_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_ENCODER_ANALOG_ATTRIBUTE *d = (ATOM_ENCODER_ANALOG_ATTRIBUTE *) data;
  int i;
  if (d) {
    printf ("%s%04x:  UCHAR ucTVStandard%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucTVStandard)-start), FILL(17), d->ucTVStandard, d->ucTVStandard);
    for (i = 0; i < 1; i++) {
      printf ("%s%04x:  UCHAR ucPadding%s [%d] = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucPadding[i])-start), FILL(18+(i>9)), i, d->ucPadding[i], d->ucPadding[i]); }
  }
  return sizeof (ATOM_ENCODER_ANALOG_ATTRIBUTE);
}
int ATOM_ENCODER_DIGITAL_ATTRIBUTE_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_ENCODER_DIGITAL_ATTRIBUTE *d = (ATOM_ENCODER_DIGITAL_ATTRIBUTE *) data;
  int i;
  if (d) {
    printf ("%s%04x:  UCHAR ucAttribute%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucAttribute)-start), FILL(16), d->ucAttribute, d->ucAttribute);
    for (i = 0; i < 1; i++) {
      printf ("%s%04x:  UCHAR ucPadding%s [%d] = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucPadding[i])-start), FILL(18+(i>9)), i, d->ucPadding[i], d->ucPadding[i]); }
  }
  return sizeof (ATOM_ENCODER_DIGITAL_ATTRIBUTE);
}
int ATOM_ENCODER_ATTRIBUTE_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_ENCODER_ATTRIBUTE *d = (ATOM_ENCODER_ATTRIBUTE *) data;
  int i;
  if (d) {
    printf ("%s%04x:  (union) ATOM_ENCODER_ANALOG_ATTRIBUTE sAlgAttrib%s :\n", IND(indent), (int)(((uint8_t*)&d->sAlgAttrib)-start), FILL(47)); ATOM_ENCODER_ANALOG_ATTRIBUTE_dumper (start, (uint8_t*) &d->sAlgAttrib, indent+1);
    printf ("%s%04x:  (union) ATOM_ENCODER_DIGITAL_ATTRIBUTE sDigAttrib%s :\n", IND(indent), (int)(((uint8_t*)&d->sDigAttrib)-start), FILL(48)); ATOM_ENCODER_DIGITAL_ATTRIBUTE_dumper (start, (uint8_t*) &d->sDigAttrib, indent+1);
  }
  return sizeof (ATOM_ENCODER_ATTRIBUTE);
}
int DVO_ENCODER_CONTROL_PARAMETERS_dumper (uint8_t *start, uint8_t *data, int indent) {
  DVO_ENCODER_CONTROL_PARAMETERS *d = (DVO_ENCODER_CONTROL_PARAMETERS *) data;
  int i;
  if (d) {
    printf ("%s%04x:  USHORT usPixelClock%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usPixelClock)-start), FILL(18), d->usPixelClock, d->usPixelClock);
    printf ("%s%04x:  USHORT usEncoderID%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usEncoderID)-start), FILL(17), d->usEncoderID, d->usEncoderID);
    printf ("%s%04x:  UCHAR ucDeviceType%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucDeviceType)-start), FILL(17), d->ucDeviceType, d->ucDeviceType);
    printf ("%s%04x:  UCHAR ucAction%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucAction)-start), FILL(13), d->ucAction, d->ucAction);
    printf ("%s%04x:  ATOM_ENCODER_ATTRIBUTE usDevAttr%s :\n", IND(indent), (int)(((uint8_t*)&d->usDevAttr)-start), FILL(31)); ATOM_ENCODER_ATTRIBUTE_dumper (start, (uint8_t*) &d->usDevAttr, indent+1);
  }
  return sizeof (DVO_ENCODER_CONTROL_PARAMETERS);
}
int DVO_ENCODER_CONTROL_PS_ALLOCATION_dumper (uint8_t *start, uint8_t *data, int indent) {
  DVO_ENCODER_CONTROL_PS_ALLOCATION *d = (DVO_ENCODER_CONTROL_PS_ALLOCATION *) data;
  int i;
  if (d) {
    printf ("%s%04x:  DVO_ENCODER_CONTROL_PARAMETERS sDVOEncoder%s :\n", IND(indent), (int)(((uint8_t*)&d->sDVOEncoder)-start), FILL(41)); DVO_ENCODER_CONTROL_PARAMETERS_dumper (start, (uint8_t*) &d->sDVOEncoder, indent+1);
    printf ("%s%04x:  WRITE_ONE_BYTE_HW_I2C_DATA_PARAMETERS sReserved%s :\n", IND(indent), (int)(((uint8_t*)&d->sReserved)-start), FILL(46)); WRITE_ONE_BYTE_HW_I2C_DATA_PARAMETERS_dumper (start, (uint8_t*) &d->sReserved, indent+1);
  }
  return sizeof (DVO_ENCODER_CONTROL_PS_ALLOCATION);
}
int ATOM_XTMDS_INFO_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_XTMDS_INFO *d = (ATOM_XTMDS_INFO *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ATOM_COMMON_TABLE_HEADER sHeader%s :\n", IND(indent), (int)(((uint8_t*)&d->sHeader)-start), FILL(31)); ATOM_COMMON_TABLE_HEADER_dumper (start, (uint8_t*) &d->sHeader, indent+1);
    printf ("%s%04x:  USHORT usSingleLinkMaxFrequency%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usSingleLinkMaxFrequency)-start), FILL(30), d->usSingleLinkMaxFrequency, d->usSingleLinkMaxFrequency);
    printf ("%s%04x:  ATOM_I2C_ID_CONFIG_ACCESS sucI2cId%s :\n", IND(indent), (int)(((uint8_t*)&d->sucI2cId)-start), FILL(33)); ATOM_I2C_ID_CONFIG_ACCESS_dumper (start, (uint8_t*) &d->sucI2cId, indent+1);
    printf ("%s%04x:  UCHAR ucXtransimitterID%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucXtransimitterID)-start), FILL(22), d->ucXtransimitterID, d->ucXtransimitterID);
    printf ("%s%04x:  UCHAR ucSupportedLink%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucSupportedLink)-start), FILL(20), d->ucSupportedLink, d->ucSupportedLink);
    printf ("%s%04x:  UCHAR ucSequnceAlterID%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucSequnceAlterID)-start), FILL(21), d->ucSequnceAlterID, d->ucSequnceAlterID);
    printf ("%s%04x:  UCHAR ucMasterAddress%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucMasterAddress)-start), FILL(20), d->ucMasterAddress, d->ucMasterAddress);
    printf ("%s%04x:  UCHAR ucSlaveAddress%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucSlaveAddress)-start), FILL(19), d->ucSlaveAddress, d->ucSlaveAddress);
  }
  return sizeof (ATOM_XTMDS_INFO);
}
int DFP_DPMS_STATUS_CHANGE_PARAMETERS_dumper (uint8_t *start, uint8_t *data, int indent) {
  DFP_DPMS_STATUS_CHANGE_PARAMETERS *d = (DFP_DPMS_STATUS_CHANGE_PARAMETERS *) data;
  int i;
  if (d) {
    printf ("%s%04x:  UCHAR ucEnable%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucEnable)-start), FILL(13), d->ucEnable, d->ucEnable);
    printf ("%s%04x:  UCHAR ucDevice%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucDevice)-start), FILL(13), d->ucDevice, d->ucDevice);
    for (i = 0; i < 2; i++) {
      printf ("%s%04x:  UCHAR ucPadding%s [%d] = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucPadding[i])-start), FILL(18+(i>9)), i, d->ucPadding[i], d->ucPadding[i]); }
  }
  return sizeof (DFP_DPMS_STATUS_CHANGE_PARAMETERS);
}
int ATOM_POWERMODE_INFO_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_POWERMODE_INFO *d = (ATOM_POWERMODE_INFO *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ULONG ulMiscInfo%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulMiscInfo)-start), FILL(15), d->ulMiscInfo, d->ulMiscInfo);
    printf ("%s%04x:  ULONG ulReserved1%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulReserved1)-start), FILL(16), d->ulReserved1, d->ulReserved1);
    printf ("%s%04x:  ULONG ulReserved2%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulReserved2)-start), FILL(16), d->ulReserved2, d->ulReserved2);
    printf ("%s%04x:  USHORT usEngineClock%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usEngineClock)-start), FILL(19), d->usEngineClock, d->usEngineClock);
    printf ("%s%04x:  USHORT usMemoryClock%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usMemoryClock)-start), FILL(19), d->usMemoryClock, d->usMemoryClock);
    printf ("%s%04x:  UCHAR ucVoltageDropIndex%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucVoltageDropIndex)-start), FILL(23), d->ucVoltageDropIndex, d->ucVoltageDropIndex);
    printf ("%s%04x:  UCHAR ucSelectedPanel_RefreshRate%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucSelectedPanel_RefreshRate)-start), FILL(32), d->ucSelectedPanel_RefreshRate, d->ucSelectedPanel_RefreshRate);
    printf ("%s%04x:  UCHAR ucMinTemperature%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucMinTemperature)-start), FILL(21), d->ucMinTemperature, d->ucMinTemperature);
    printf ("%s%04x:  UCHAR ucMaxTemperature%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucMaxTemperature)-start), FILL(21), d->ucMaxTemperature, d->ucMaxTemperature);
    printf ("%s%04x:  UCHAR ucNumPciELanes%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucNumPciELanes)-start), FILL(19), d->ucNumPciELanes, d->ucNumPciELanes);
  }
  return sizeof (ATOM_POWERMODE_INFO);
}
int ATOM_POWERMODE_INFO_V2_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_POWERMODE_INFO_V2 *d = (ATOM_POWERMODE_INFO_V2 *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ULONG ulMiscInfo%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulMiscInfo)-start), FILL(15), d->ulMiscInfo, d->ulMiscInfo);
    printf ("%s%04x:  ULONG ulMiscInfo2%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulMiscInfo2)-start), FILL(16), d->ulMiscInfo2, d->ulMiscInfo2);
    printf ("%s%04x:  ULONG ulEngineClock%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulEngineClock)-start), FILL(18), d->ulEngineClock, d->ulEngineClock);
    printf ("%s%04x:  ULONG ulMemoryClock%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulMemoryClock)-start), FILL(18), d->ulMemoryClock, d->ulMemoryClock);
    printf ("%s%04x:  UCHAR ucVoltageDropIndex%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucVoltageDropIndex)-start), FILL(23), d->ucVoltageDropIndex, d->ucVoltageDropIndex);
    printf ("%s%04x:  UCHAR ucSelectedPanel_RefreshRate%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucSelectedPanel_RefreshRate)-start), FILL(32), d->ucSelectedPanel_RefreshRate, d->ucSelectedPanel_RefreshRate);
    printf ("%s%04x:  UCHAR ucMinTemperature%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucMinTemperature)-start), FILL(21), d->ucMinTemperature, d->ucMinTemperature);
    printf ("%s%04x:  UCHAR ucMaxTemperature%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucMaxTemperature)-start), FILL(21), d->ucMaxTemperature, d->ucMaxTemperature);
    printf ("%s%04x:  UCHAR ucNumPciELanes%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucNumPciELanes)-start), FILL(19), d->ucNumPciELanes, d->ucNumPciELanes);
  }
  return sizeof (ATOM_POWERMODE_INFO_V2);
}
int ATOM_POWERMODE_INFO_V3_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_POWERMODE_INFO_V3 *d = (ATOM_POWERMODE_INFO_V3 *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ULONG ulMiscInfo%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulMiscInfo)-start), FILL(15), d->ulMiscInfo, d->ulMiscInfo);
    printf ("%s%04x:  ULONG ulMiscInfo2%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulMiscInfo2)-start), FILL(16), d->ulMiscInfo2, d->ulMiscInfo2);
    printf ("%s%04x:  ULONG ulEngineClock%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulEngineClock)-start), FILL(18), d->ulEngineClock, d->ulEngineClock);
    printf ("%s%04x:  ULONG ulMemoryClock%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulMemoryClock)-start), FILL(18), d->ulMemoryClock, d->ulMemoryClock);
    printf ("%s%04x:  UCHAR ucVoltageDropIndex%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucVoltageDropIndex)-start), FILL(23), d->ucVoltageDropIndex, d->ucVoltageDropIndex);
    printf ("%s%04x:  UCHAR ucSelectedPanel_RefreshRate%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucSelectedPanel_RefreshRate)-start), FILL(32), d->ucSelectedPanel_RefreshRate, d->ucSelectedPanel_RefreshRate);
    printf ("%s%04x:  UCHAR ucMinTemperature%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucMinTemperature)-start), FILL(21), d->ucMinTemperature, d->ucMinTemperature);
    printf ("%s%04x:  UCHAR ucMaxTemperature%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucMaxTemperature)-start), FILL(21), d->ucMaxTemperature, d->ucMaxTemperature);
    printf ("%s%04x:  UCHAR ucNumPciELanes%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucNumPciELanes)-start), FILL(19), d->ucNumPciELanes, d->ucNumPciELanes);
    printf ("%s%04x:  UCHAR ucVDDCI_VoltageDropIndex%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucVDDCI_VoltageDropIndex)-start), FILL(29), d->ucVDDCI_VoltageDropIndex, d->ucVDDCI_VoltageDropIndex);
  }
  return sizeof (ATOM_POWERMODE_INFO_V3);
}
int ATOM_POWERPLAY_INFO_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_POWERPLAY_INFO *d = (ATOM_POWERPLAY_INFO *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ATOM_COMMON_TABLE_HEADER sHeader%s :\n", IND(indent), (int)(((uint8_t*)&d->sHeader)-start), FILL(31)); ATOM_COMMON_TABLE_HEADER_dumper (start, (uint8_t*) &d->sHeader, indent+1);
    printf ("%s%04x:  UCHAR ucOverdriveThermalController%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucOverdriveThermalController)-start), FILL(33), d->ucOverdriveThermalController, d->ucOverdriveThermalController);
    printf ("%s%04x:  UCHAR ucOverdriveI2cLine%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucOverdriveI2cLine)-start), FILL(23), d->ucOverdriveI2cLine, d->ucOverdriveI2cLine);
    printf ("%s%04x:  UCHAR ucOverdriveIntBitmap%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucOverdriveIntBitmap)-start), FILL(25), d->ucOverdriveIntBitmap, d->ucOverdriveIntBitmap);
    printf ("%s%04x:  UCHAR ucOverdriveControllerAddress%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucOverdriveControllerAddress)-start), FILL(33), d->ucOverdriveControllerAddress, d->ucOverdriveControllerAddress);
    printf ("%s%04x:  UCHAR ucSizeOfPowerModeEntry%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucSizeOfPowerModeEntry)-start), FILL(27), d->ucSizeOfPowerModeEntry, d->ucSizeOfPowerModeEntry);
    printf ("%s%04x:  UCHAR ucNumOfPowerModeEntries%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucNumOfPowerModeEntries)-start), FILL(28), d->ucNumOfPowerModeEntries, d->ucNumOfPowerModeEntries);
    for (i = 0; i < 8; i++) {
      printf ("%s%04x:  ATOM_POWERMODE_INFO asPowerPlayInfo%s [%d] :\n", IND(indent), (int)(((uint8_t*)&d->asPowerPlayInfo[i])-start), FILL(38+(i>9)), i); ATOM_POWERMODE_INFO_dumper (start, (uint8_t*) &d->asPowerPlayInfo[i], indent+1); }
  }
  return sizeof (ATOM_POWERPLAY_INFO);
}
int ATOM_POWERPLAY_INFO_V2_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_POWERPLAY_INFO_V2 *d = (ATOM_POWERPLAY_INFO_V2 *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ATOM_COMMON_TABLE_HEADER sHeader%s :\n", IND(indent), (int)(((uint8_t*)&d->sHeader)-start), FILL(31)); ATOM_COMMON_TABLE_HEADER_dumper (start, (uint8_t*) &d->sHeader, indent+1);
    printf ("%s%04x:  UCHAR ucOverdriveThermalController%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucOverdriveThermalController)-start), FILL(33), d->ucOverdriveThermalController, d->ucOverdriveThermalController);
    printf ("%s%04x:  UCHAR ucOverdriveI2cLine%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucOverdriveI2cLine)-start), FILL(23), d->ucOverdriveI2cLine, d->ucOverdriveI2cLine);
    printf ("%s%04x:  UCHAR ucOverdriveIntBitmap%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucOverdriveIntBitmap)-start), FILL(25), d->ucOverdriveIntBitmap, d->ucOverdriveIntBitmap);
    printf ("%s%04x:  UCHAR ucOverdriveControllerAddress%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucOverdriveControllerAddress)-start), FILL(33), d->ucOverdriveControllerAddress, d->ucOverdriveControllerAddress);
    printf ("%s%04x:  UCHAR ucSizeOfPowerModeEntry%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucSizeOfPowerModeEntry)-start), FILL(27), d->ucSizeOfPowerModeEntry, d->ucSizeOfPowerModeEntry);
    printf ("%s%04x:  UCHAR ucNumOfPowerModeEntries%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucNumOfPowerModeEntries)-start), FILL(28), d->ucNumOfPowerModeEntries, d->ucNumOfPowerModeEntries);
    for (i = 0; i < 8; i++) {
      printf ("%s%04x:  ATOM_POWERMODE_INFO_V2 asPowerPlayInfo%s [%d] :\n", IND(indent), (int)(((uint8_t*)&d->asPowerPlayInfo[i])-start), FILL(41+(i>9)), i); ATOM_POWERMODE_INFO_V2_dumper (start, (uint8_t*) &d->asPowerPlayInfo[i], indent+1); }
  }
  return sizeof (ATOM_POWERPLAY_INFO_V2);
}
int ATOM_POWERPLAY_INFO_V3_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_POWERPLAY_INFO_V3 *d = (ATOM_POWERPLAY_INFO_V3 *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ATOM_COMMON_TABLE_HEADER sHeader%s :\n", IND(indent), (int)(((uint8_t*)&d->sHeader)-start), FILL(31)); ATOM_COMMON_TABLE_HEADER_dumper (start, (uint8_t*) &d->sHeader, indent+1);
    printf ("%s%04x:  UCHAR ucOverdriveThermalController%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucOverdriveThermalController)-start), FILL(33), d->ucOverdriveThermalController, d->ucOverdriveThermalController);
    printf ("%s%04x:  UCHAR ucOverdriveI2cLine%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucOverdriveI2cLine)-start), FILL(23), d->ucOverdriveI2cLine, d->ucOverdriveI2cLine);
    printf ("%s%04x:  UCHAR ucOverdriveIntBitmap%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucOverdriveIntBitmap)-start), FILL(25), d->ucOverdriveIntBitmap, d->ucOverdriveIntBitmap);
    printf ("%s%04x:  UCHAR ucOverdriveControllerAddress%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucOverdriveControllerAddress)-start), FILL(33), d->ucOverdriveControllerAddress, d->ucOverdriveControllerAddress);
    printf ("%s%04x:  UCHAR ucSizeOfPowerModeEntry%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucSizeOfPowerModeEntry)-start), FILL(27), d->ucSizeOfPowerModeEntry, d->ucSizeOfPowerModeEntry);
    printf ("%s%04x:  UCHAR ucNumOfPowerModeEntries%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucNumOfPowerModeEntries)-start), FILL(28), d->ucNumOfPowerModeEntries, d->ucNumOfPowerModeEntries);
    for (i = 0; i < 8; i++) {
      printf ("%s%04x:  ATOM_POWERMODE_INFO_V3 asPowerPlayInfo%s [%d] :\n", IND(indent), (int)(((uint8_t*)&d->asPowerPlayInfo[i])-start), FILL(41+(i>9)), i); ATOM_POWERMODE_INFO_V3_dumper (start, (uint8_t*) &d->asPowerPlayInfo[i], indent+1); }
  }
  return sizeof (ATOM_POWERPLAY_INFO_V3);
}
int ATOM_PPLIB_THERMALCONTROLLER_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_PPLIB_THERMALCONTROLLER *d = (ATOM_PPLIB_THERMALCONTROLLER *) data;
  int i;
  if (d) {
    printf ("%s%04x:  UCHAR ucType%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucType)-start), FILL(11), d->ucType, d->ucType);
    printf ("%s%04x:  UCHAR ucI2cLine%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucI2cLine)-start), FILL(14), d->ucI2cLine, d->ucI2cLine);
    printf ("%s%04x:  UCHAR ucI2cAddress%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucI2cAddress)-start), FILL(17), d->ucI2cAddress, d->ucI2cAddress);
    printf ("%s%04x:  UCHAR ucFanParameters%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucFanParameters)-start), FILL(20), d->ucFanParameters, d->ucFanParameters);
    printf ("%s%04x:  UCHAR ucFanMinRPM%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucFanMinRPM)-start), FILL(16), d->ucFanMinRPM, d->ucFanMinRPM);
    printf ("%s%04x:  UCHAR ucFanMaxRPM%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucFanMaxRPM)-start), FILL(16), d->ucFanMaxRPM, d->ucFanMaxRPM);
    printf ("%s%04x:  UCHAR ucReserved%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucReserved)-start), FILL(15), d->ucReserved, d->ucReserved);
    printf ("%s%04x:  UCHAR ucFlags%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucFlags)-start), FILL(12), d->ucFlags, d->ucFlags);
  }
  return sizeof (ATOM_PPLIB_THERMALCONTROLLER);
}
int ATOM_PPLIB_STATE_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_PPLIB_STATE *d = (ATOM_PPLIB_STATE *) data;
  int i;
  if (d) {
    printf ("%s%04x:  UCHAR ucNonClockStateIndex%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucNonClockStateIndex)-start), FILL(25), d->ucNonClockStateIndex, d->ucNonClockStateIndex);
    for (i = 0; i < 1; i++) {
      printf ("%s%04x:  UCHAR ucClockStateIndices%s [%d] = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucClockStateIndices[i])-start), FILL(28+(i>9)), i, d->ucClockStateIndices[i], d->ucClockStateIndices[i]); }
  }
  return sizeof (ATOM_PPLIB_STATE);
}
int ATOM_PPLIB_FANTABLE_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_PPLIB_FANTABLE *d = (ATOM_PPLIB_FANTABLE *) data;
  int i;
  if (d) {
    printf ("%s%04x:  UCHAR ucFanTableFormat%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucFanTableFormat)-start), FILL(21), d->ucFanTableFormat, d->ucFanTableFormat);
    printf ("%s%04x:  UCHAR ucTHyst%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucTHyst)-start), FILL(12), d->ucTHyst, d->ucTHyst);
    printf ("%s%04x:  USHORT usTMin%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usTMin)-start), FILL(12), d->usTMin, d->usTMin);
    printf ("%s%04x:  USHORT usTMed%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usTMed)-start), FILL(12), d->usTMed, d->usTMed);
    printf ("%s%04x:  USHORT usTHigh%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usTHigh)-start), FILL(13), d->usTHigh, d->usTHigh);
    printf ("%s%04x:  USHORT usPWMMin%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usPWMMin)-start), FILL(14), d->usPWMMin, d->usPWMMin);
    printf ("%s%04x:  USHORT usPWMMed%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usPWMMed)-start), FILL(14), d->usPWMMed, d->usPWMMed);
    printf ("%s%04x:  USHORT usPWMHigh%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usPWMHigh)-start), FILL(15), d->usPWMHigh, d->usPWMHigh);
  }
  return sizeof (ATOM_PPLIB_FANTABLE);
}
int ATOM_PPLIB_EXTENDEDHEADER_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_PPLIB_EXTENDEDHEADER *d = (ATOM_PPLIB_EXTENDEDHEADER *) data;
  int i;
  if (d) {
    printf ("%s%04x:  USHORT usSize%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usSize)-start), FILL(12), d->usSize, d->usSize);
    printf ("%s%04x:  ULONG ulMaxEngineClock%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulMaxEngineClock)-start), FILL(21), d->ulMaxEngineClock, d->ulMaxEngineClock);
    printf ("%s%04x:  ULONG ulMaxMemoryClock%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulMaxMemoryClock)-start), FILL(21), d->ulMaxMemoryClock, d->ulMaxMemoryClock);
  }
  return sizeof (ATOM_PPLIB_EXTENDEDHEADER);
}
int ATOM_PPLIB_POWERPLAYTABLE_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_PPLIB_POWERPLAYTABLE *d = (ATOM_PPLIB_POWERPLAYTABLE *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ATOM_COMMON_TABLE_HEADER sHeader%s :\n", IND(indent), (int)(((uint8_t*)&d->sHeader)-start), FILL(31)); ATOM_COMMON_TABLE_HEADER_dumper (start, (uint8_t*) &d->sHeader, indent+1);
    printf ("%s%04x:  UCHAR ucDataRevision%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucDataRevision)-start), FILL(19), d->ucDataRevision, d->ucDataRevision);
    printf ("%s%04x:  UCHAR ucNumStates%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucNumStates)-start), FILL(16), d->ucNumStates, d->ucNumStates);
    printf ("%s%04x:  UCHAR ucStateEntrySize%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucStateEntrySize)-start), FILL(21), d->ucStateEntrySize, d->ucStateEntrySize);
    printf ("%s%04x:  UCHAR ucClockInfoSize%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucClockInfoSize)-start), FILL(20), d->ucClockInfoSize, d->ucClockInfoSize);
    printf ("%s%04x:  UCHAR ucNonClockSize%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucNonClockSize)-start), FILL(19), d->ucNonClockSize, d->ucNonClockSize);
    printf ("%s%04x:  USHORT usStateArrayOffset%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usStateArrayOffset)-start), FILL(24), d->usStateArrayOffset, d->usStateArrayOffset);
    printf ("%s%04x:  USHORT usClockInfoArrayOffset%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usClockInfoArrayOffset)-start), FILL(28), d->usClockInfoArrayOffset, d->usClockInfoArrayOffset);
    printf ("%s%04x:  USHORT usNonClockInfoArrayOffset%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usNonClockInfoArrayOffset)-start), FILL(31), d->usNonClockInfoArrayOffset, d->usNonClockInfoArrayOffset);
    printf ("%s%04x:  USHORT usBackbiasTime%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usBackbiasTime)-start), FILL(20), d->usBackbiasTime, d->usBackbiasTime);
    printf ("%s%04x:  USHORT usVoltageTime%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usVoltageTime)-start), FILL(19), d->usVoltageTime, d->usVoltageTime);
    printf ("%s%04x:  USHORT usTableSize%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usTableSize)-start), FILL(17), d->usTableSize, d->usTableSize);
    printf ("%s%04x:  ULONG ulPlatformCaps%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulPlatformCaps)-start), FILL(19), d->ulPlatformCaps, d->ulPlatformCaps);
    printf ("%s%04x:  ATOM_PPLIB_THERMALCONTROLLER sThermalController%s :\n", IND(indent), (int)(((uint8_t*)&d->sThermalController)-start), FILL(46)); ATOM_PPLIB_THERMALCONTROLLER_dumper (start, (uint8_t*) &d->sThermalController, indent+1);
    printf ("%s%04x:  USHORT usBootClockInfoOffset%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usBootClockInfoOffset)-start), FILL(27), d->usBootClockInfoOffset, d->usBootClockInfoOffset);
    printf ("%s%04x:  USHORT usBootNonClockInfoOffset%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usBootNonClockInfoOffset)-start), FILL(30), d->usBootNonClockInfoOffset, d->usBootNonClockInfoOffset);
  }
  return sizeof (ATOM_PPLIB_POWERPLAYTABLE);
}
int ATOM_PPLIB_POWERPLAYTABLE2_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_PPLIB_POWERPLAYTABLE2 *d = (ATOM_PPLIB_POWERPLAYTABLE2 *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ATOM_PPLIB_POWERPLAYTABLE basicTable%s :\n", IND(indent), (int)(((uint8_t*)&d->basicTable)-start), FILL(35)); ATOM_PPLIB_POWERPLAYTABLE_dumper (start, (uint8_t*) &d->basicTable, indent+1);
    printf ("%s%04x:  UCHAR ucNumCustomThermalPolicy%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucNumCustomThermalPolicy)-start), FILL(29), d->ucNumCustomThermalPolicy, d->ucNumCustomThermalPolicy);
    printf ("%s%04x:  USHORT usCustomThermalPolicyArrayOffset%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usCustomThermalPolicyArrayOffset)-start), FILL(38), d->usCustomThermalPolicyArrayOffset, d->usCustomThermalPolicyArrayOffset);
  }
  return sizeof (ATOM_PPLIB_POWERPLAYTABLE2);
}
int ATOM_PPLIB_POWERPLAYTABLE3_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_PPLIB_POWERPLAYTABLE3 *d = (ATOM_PPLIB_POWERPLAYTABLE3 *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ATOM_PPLIB_POWERPLAYTABLE2 basicTable2%s :\n", IND(indent), (int)(((uint8_t*)&d->basicTable2)-start), FILL(37)); ATOM_PPLIB_POWERPLAYTABLE2_dumper (start, (uint8_t*) &d->basicTable2, indent+1);
    printf ("%s%04x:  USHORT usFormatID%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usFormatID)-start), FILL(16), d->usFormatID, d->usFormatID);
    printf ("%s%04x:  USHORT usFanTableOffset%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usFanTableOffset)-start), FILL(22), d->usFanTableOffset, d->usFanTableOffset);
    printf ("%s%04x:  USHORT usExtendendedHeaderOffset%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usExtendendedHeaderOffset)-start), FILL(31), d->usExtendendedHeaderOffset, d->usExtendendedHeaderOffset);
  }
  return sizeof (ATOM_PPLIB_POWERPLAYTABLE3);
}
int ATOM_PPLIB_POWERPLAYTABLE4_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_PPLIB_POWERPLAYTABLE4 *d = (ATOM_PPLIB_POWERPLAYTABLE4 *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ATOM_PPLIB_POWERPLAYTABLE3 basicTable3%s :\n", IND(indent), (int)(((uint8_t*)&d->basicTable3)-start), FILL(37)); ATOM_PPLIB_POWERPLAYTABLE3_dumper (start, (uint8_t*) &d->basicTable3, indent+1);
    printf ("%s%04x:  ULONG ulGoldenPPID%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulGoldenPPID)-start), FILL(17), d->ulGoldenPPID, d->ulGoldenPPID);
    printf ("%s%04x:  ULONG ulGoldenRevision%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulGoldenRevision)-start), FILL(21), d->ulGoldenRevision, d->ulGoldenRevision);
    printf ("%s%04x:  USHORT usVddcDependencyOnSCLKOffset%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usVddcDependencyOnSCLKOffset)-start), FILL(34), d->usVddcDependencyOnSCLKOffset, d->usVddcDependencyOnSCLKOffset);
    printf ("%s%04x:  USHORT usVddciDependencyOnMCLKOffset%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usVddciDependencyOnMCLKOffset)-start), FILL(35), d->usVddciDependencyOnMCLKOffset, d->usVddciDependencyOnMCLKOffset);
    printf ("%s%04x:  USHORT usVddcDependencyOnMCLKOffset%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usVddcDependencyOnMCLKOffset)-start), FILL(34), d->usVddcDependencyOnMCLKOffset, d->usVddcDependencyOnMCLKOffset);
    printf ("%s%04x:  USHORT usMaxClockVoltageOnDCOffset%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usMaxClockVoltageOnDCOffset)-start), FILL(33), d->usMaxClockVoltageOnDCOffset, d->usMaxClockVoltageOnDCOffset);
    for (i = 0; i < 2; i++) {
      printf ("%s%04x:  USHORT usReserved%s [%d] = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usReserved[i])-start), FILL(20+(i>9)), i, d->usReserved[i], d->usReserved[i]); }
  }
  return sizeof (ATOM_PPLIB_POWERPLAYTABLE4);
}
int ATOM_PPLIB_POWERPLAYTABLE5_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_PPLIB_POWERPLAYTABLE5 *d = (ATOM_PPLIB_POWERPLAYTABLE5 *) data;
  int i;
  if (d) {
    printf ("%s%04x:  ATOM_PPLIB_POWERPLAYTABLE4 basicTable4%s :\n", IND(indent), (int)(((uint8_t*)&d->basicTable4)-start), FILL(37)); ATOM_PPLIB_POWERPLAYTABLE4_dumper (start, (uint8_t*) &d->basicTable4, indent+1);
    printf ("%s%04x:  ULONG ulTDPLimit%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulTDPLimit)-start), FILL(15), d->ulTDPLimit, d->ulTDPLimit);
    printf ("%s%04x:  ULONG ulNearTDPLimit%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulNearTDPLimit)-start), FILL(19), d->ulNearTDPLimit, d->ulNearTDPLimit);
    printf ("%s%04x:  ULONG ulSQRampingThreshold%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulSQRampingThreshold)-start), FILL(25), d->ulSQRampingThreshold, d->ulSQRampingThreshold);
    printf ("%s%04x:  USHORT usCACLeakageTableOffset%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usCACLeakageTableOffset)-start), FILL(29), d->usCACLeakageTableOffset, d->usCACLeakageTableOffset);
    printf ("%s%04x:  ULONG ulCACLeakage%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulCACLeakage)-start), FILL(17), d->ulCACLeakage, d->ulCACLeakage);
    printf ("%s%04x:  ULONG ulReserved%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulReserved)-start), FILL(15), d->ulReserved, d->ulReserved);
  }
  return sizeof (ATOM_PPLIB_POWERPLAYTABLE5);
}
int ATOM_PPLIB_THERMAL_STATE_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_PPLIB_THERMAL_STATE *d = (ATOM_PPLIB_THERMAL_STATE *) data;
  int i;
  if (d) {
    printf ("%s%04x:  UCHAR ucMinTemperature%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucMinTemperature)-start), FILL(21), d->ucMinTemperature, d->ucMinTemperature);
    printf ("%s%04x:  UCHAR ucMaxTemperature%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucMaxTemperature)-start), FILL(21), d->ucMaxTemperature, d->ucMaxTemperature);
    printf ("%s%04x:  UCHAR ucThermalAction%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucThermalAction)-start), FILL(20), d->ucThermalAction, d->ucThermalAction);
  }
  return sizeof (ATOM_PPLIB_THERMAL_STATE);
}
int ATOM_PPLIB_NONCLOCK_INFO_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_PPLIB_NONCLOCK_INFO *d = (ATOM_PPLIB_NONCLOCK_INFO *) data;
  int i;
  if (d) {
    printf ("%s%04x:  USHORT usClassification%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usClassification)-start), FILL(22), d->usClassification, d->usClassification);
    printf ("%s%04x:  UCHAR ucMinTemperature%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucMinTemperature)-start), FILL(21), d->ucMinTemperature, d->ucMinTemperature);
    printf ("%s%04x:  UCHAR ucMaxTemperature%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucMaxTemperature)-start), FILL(21), d->ucMaxTemperature, d->ucMaxTemperature);
    printf ("%s%04x:  ULONG ulCapsAndSettings%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulCapsAndSettings)-start), FILL(22), d->ulCapsAndSettings, d->ulCapsAndSettings);
    printf ("%s%04x:  UCHAR ucRequiredPower%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucRequiredPower)-start), FILL(20), d->ucRequiredPower, d->ucRequiredPower);
    printf ("%s%04x:  USHORT usClassification2%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usClassification2)-start), FILL(23), d->usClassification2, d->usClassification2);
    printf ("%s%04x:  ULONG ulVCLK%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulVCLK)-start), FILL(11), d->ulVCLK, d->ulVCLK);
    printf ("%s%04x:  ULONG ulDCLK%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulDCLK)-start), FILL(11), d->ulDCLK, d->ulDCLK);
    for (i = 0; i < 5; i++) {
      printf ("%s%04x:  UCHAR ucUnused%s [%d] = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucUnused[i])-start), FILL(17+(i>9)), i, d->ucUnused[i], d->ucUnused[i]); }
  }
  return sizeof (ATOM_PPLIB_NONCLOCK_INFO);
}
int ATOM_PPLIB_R600_CLOCK_INFO_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_PPLIB_R600_CLOCK_INFO *d = (ATOM_PPLIB_R600_CLOCK_INFO *) data;
  int i;
  if (d) {
    printf ("%s%04x:  USHORT usEngineClockLow%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usEngineClockLow)-start), FILL(22), d->usEngineClockLow, d->usEngineClockLow);
    printf ("%s%04x:  UCHAR ucEngineClockHigh%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucEngineClockHigh)-start), FILL(22), d->ucEngineClockHigh, d->ucEngineClockHigh);
    printf ("%s%04x:  USHORT usMemoryClockLow%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usMemoryClockLow)-start), FILL(22), d->usMemoryClockLow, d->usMemoryClockLow);
    printf ("%s%04x:  UCHAR ucMemoryClockHigh%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucMemoryClockHigh)-start), FILL(22), d->ucMemoryClockHigh, d->ucMemoryClockHigh);
    printf ("%s%04x:  USHORT usVDDC%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usVDDC)-start), FILL(12), d->usVDDC, d->usVDDC);
    printf ("%s%04x:  USHORT usUnused1%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usUnused1)-start), FILL(15), d->usUnused1, d->usUnused1);
    printf ("%s%04x:  USHORT usUnused2%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usUnused2)-start), FILL(15), d->usUnused2, d->usUnused2);
    printf ("%s%04x:  ULONG ulFlags%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulFlags)-start), FILL(12), d->ulFlags, d->ulFlags);
  }
  return sizeof (ATOM_PPLIB_R600_CLOCK_INFO);
}
int ATOM_PPLIB_EVERGREEN_CLOCK_INFO_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_PPLIB_EVERGREEN_CLOCK_INFO *d = (ATOM_PPLIB_EVERGREEN_CLOCK_INFO *) data;
  int i;
  if (d) {
    printf ("%s%04x:  USHORT usEngineClockLow%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usEngineClockLow)-start), FILL(22), d->usEngineClockLow, d->usEngineClockLow);
    printf ("%s%04x:  UCHAR ucEngineClockHigh%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucEngineClockHigh)-start), FILL(22), d->ucEngineClockHigh, d->ucEngineClockHigh);
    printf ("%s%04x:  USHORT usMemoryClockLow%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usMemoryClockLow)-start), FILL(22), d->usMemoryClockLow, d->usMemoryClockLow);
    printf ("%s%04x:  UCHAR ucMemoryClockHigh%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucMemoryClockHigh)-start), FILL(22), d->ucMemoryClockHigh, d->ucMemoryClockHigh);
    printf ("%s%04x:  USHORT usVDDC%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usVDDC)-start), FILL(12), d->usVDDC, d->usVDDC);
    printf ("%s%04x:  USHORT usVDDCI%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usVDDCI)-start), FILL(13), d->usVDDCI, d->usVDDCI);
    printf ("%s%04x:  USHORT usUnused%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usUnused)-start), FILL(14), d->usUnused, d->usUnused);
    printf ("%s%04x:  ULONG ulFlags%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulFlags)-start), FILL(12), d->ulFlags, d->ulFlags);
  }
  return sizeof (ATOM_PPLIB_EVERGREEN_CLOCK_INFO);
}
int ATOM_PPLIB_RS780_CLOCK_INFO_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_PPLIB_RS780_CLOCK_INFO *d = (ATOM_PPLIB_RS780_CLOCK_INFO *) data;
  int i;
  if (d) {
    printf ("%s%04x:  USHORT usLowEngineClockLow%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usLowEngineClockLow)-start), FILL(25), d->usLowEngineClockLow, d->usLowEngineClockLow);
    printf ("%s%04x:  UCHAR ucLowEngineClockHigh%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucLowEngineClockHigh)-start), FILL(25), d->ucLowEngineClockHigh, d->ucLowEngineClockHigh);
    printf ("%s%04x:  USHORT usHighEngineClockLow%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usHighEngineClockLow)-start), FILL(26), d->usHighEngineClockLow, d->usHighEngineClockLow);
    printf ("%s%04x:  UCHAR ucHighEngineClockHigh%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucHighEngineClockHigh)-start), FILL(26), d->ucHighEngineClockHigh, d->ucHighEngineClockHigh);
    printf ("%s%04x:  USHORT usMemoryClockLow%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usMemoryClockLow)-start), FILL(22), d->usMemoryClockLow, d->usMemoryClockLow);
    printf ("%s%04x:  UCHAR ucMemoryClockHigh%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucMemoryClockHigh)-start), FILL(22), d->ucMemoryClockHigh, d->ucMemoryClockHigh);
    printf ("%s%04x:  UCHAR ucPadding%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucPadding)-start), FILL(14), d->ucPadding, d->ucPadding);
    printf ("%s%04x:  USHORT usVDDC%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usVDDC)-start), FILL(12), d->usVDDC, d->usVDDC);
    printf ("%s%04x:  UCHAR ucMaxHTLinkWidth%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucMaxHTLinkWidth)-start), FILL(21), d->ucMaxHTLinkWidth, d->ucMaxHTLinkWidth);
    printf ("%s%04x:  UCHAR ucMinHTLinkWidth%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucMinHTLinkWidth)-start), FILL(21), d->ucMinHTLinkWidth, d->ucMinHTLinkWidth);
    printf ("%s%04x:  USHORT usHTLinkFreq%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usHTLinkFreq)-start), FILL(18), d->usHTLinkFreq, d->usHTLinkFreq);
    printf ("%s%04x:  ULONG ulFlags%s = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->ulFlags)-start), FILL(12), d->ulFlags, d->ulFlags);
  }
  return sizeof (ATOM_PPLIB_RS780_CLOCK_INFO);
}
int ATOM_PPLIB_SUMO_CLOCK_INFO_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_PPLIB_SUMO_CLOCK_INFO *d = (ATOM_PPLIB_SUMO_CLOCK_INFO *) data;
  int i;
  if (d) {
    printf ("%s%04x:  USHORT usEngineClockLow%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usEngineClockLow)-start), FILL(22), d->usEngineClockLow, d->usEngineClockLow);
    printf ("%s%04x:  UCHAR ucEngineClockHigh%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucEngineClockHigh)-start), FILL(22), d->ucEngineClockHigh, d->ucEngineClockHigh);
    printf ("%s%04x:  UCHAR vddcIndex%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->vddcIndex)-start), FILL(14), d->vddcIndex, d->vddcIndex);
    printf ("%s%04x:  UCHAR leakage%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->leakage)-start), FILL(12), d->leakage, d->leakage);
    printf ("%s%04x:  UCHAR rsv%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->rsv)-start), FILL(8), d->rsv, d->rsv);
    printf ("%s%04x:  USHORT rsv1%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->rsv1)-start), FILL(10), d->rsv1, d->rsv1);
    for (i = 0; i < 2; i++) {
      printf ("%s%04x:  ULONG rsv2%s [%d] = 0x%08x (%d)\n", IND(indent), (int)(((uint8_t*)&d->rsv2[i])-start), FILL(13+(i>9)), i, d->rsv2[i], d->rsv2[i]); }
  }
  return sizeof (ATOM_PPLIB_SUMO_CLOCK_INFO);
}
int ATOM_PPLIB_STATE_V2_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_PPLIB_STATE_V2 *d = (ATOM_PPLIB_STATE_V2 *) data;
  int i;
  if (d) {
    printf ("%s%04x:  UCHAR ucNumDPMLevels%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucNumDPMLevels)-start), FILL(19), d->ucNumDPMLevels, d->ucNumDPMLevels);
    printf ("%s%04x:  UCHAR nonClockInfoIndex%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->nonClockInfoIndex)-start), FILL(22), d->nonClockInfoIndex, d->nonClockInfoIndex);
    for (i = 0; i < 1; i++) {
      printf ("%s%04x:  UCHAR clockInfoIndex%s [%d] = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->clockInfoIndex[i])-start), FILL(23+(i>9)), i, d->clockInfoIndex[i], d->clockInfoIndex[i]); }
  }
  return sizeof (ATOM_PPLIB_STATE_V2);
}
int ATOM_PPLIB_Clock_Voltage_Dependency_Record_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_PPLIB_Clock_Voltage_Dependency_Record *d = (ATOM_PPLIB_Clock_Voltage_Dependency_Record *) data;
  int i;
  if (d) {
    printf ("%s%04x:  USHORT usClockLow%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usClockLow)-start), FILL(16), d->usClockLow, d->usClockLow);
    printf ("%s%04x:  UCHAR ucClockHigh%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucClockHigh)-start), FILL(16), d->ucClockHigh, d->ucClockHigh);
    printf ("%s%04x:  USHORT usVoltage%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usVoltage)-start), FILL(15), d->usVoltage, d->usVoltage);
  }
  return sizeof (ATOM_PPLIB_Clock_Voltage_Dependency_Record);
}
int ATOM_PPLIB_Clock_Voltage_Dependency_Table_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_PPLIB_Clock_Voltage_Dependency_Table *d = (ATOM_PPLIB_Clock_Voltage_Dependency_Table *) data;
  int i;
  if (d) {
    printf ("%s%04x:  UCHAR ucNumEntries%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucNumEntries)-start), FILL(17), d->ucNumEntries, d->ucNumEntries);
    for (i = 0; i < 1; i++) {
      printf ("%s%04x:  ATOM_PPLIB_Clock_Voltage_Dependency_Record entries%s [%d] :\n", IND(indent), (int)(((uint8_t*)&d->entries[i])-start), FILL(53+(i>9)), i); ATOM_PPLIB_Clock_Voltage_Dependency_Record_dumper (start, (uint8_t*) &d->entries[i], indent+1); }
  }
  return sizeof (ATOM_PPLIB_Clock_Voltage_Dependency_Table);
}
int ATOM_PPLIB_Clock_Voltage_Limit_Record_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_PPLIB_Clock_Voltage_Limit_Record *d = (ATOM_PPLIB_Clock_Voltage_Limit_Record *) data;
  int i;
  if (d) {
    printf ("%s%04x:  USHORT usSclkLow%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usSclkLow)-start), FILL(15), d->usSclkLow, d->usSclkLow);
    printf ("%s%04x:  UCHAR ucSclkHigh%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucSclkHigh)-start), FILL(15), d->ucSclkHigh, d->ucSclkHigh);
    printf ("%s%04x:  USHORT usMclkLow%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usMclkLow)-start), FILL(15), d->usMclkLow, d->usMclkLow);
    printf ("%s%04x:  UCHAR ucMclkHigh%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucMclkHigh)-start), FILL(15), d->ucMclkHigh, d->ucMclkHigh);
    printf ("%s%04x:  USHORT usVddc%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usVddc)-start), FILL(12), d->usVddc, d->usVddc);
    printf ("%s%04x:  USHORT usVddci%s = 0x%04x     (%d)\n", IND(indent), (int)(((uint8_t*)&d->usVddci)-start), FILL(13), d->usVddci, d->usVddci);
  }
  return sizeof (ATOM_PPLIB_Clock_Voltage_Limit_Record);
}
int ATOM_PPLIB_Clock_Voltage_Limit_Table_dumper (uint8_t *start, uint8_t *data, int indent) {
  ATOM_PPLIB_Clock_Voltage_Limit_Table *d = (ATOM_PPLIB_Clock_Voltage_Limit_Table *) data;
  int i;
  if (d) {
    printf ("%s%04x:  UCHAR ucNumEntries%s = 0x%02x       (%d)\n", IND(indent), (int)(((uint8_t*)&d->ucNumEntries)-start), FILL(17), d->ucNumEntries, d->ucNumEntries);
    for (i = 0; i < 1; i++) {
      printf ("%s%04x:  ATOM_PPLIB_Clock_Voltage_Limit_Record entries%s [%d] :\n", IND(indent), (int)(((uint8_t*)&d->entries[i])-start), FILL(48+(i>9)), i); ATOM_PPLIB_Clock_Voltage_Limit_Record_dumper (start, (uint8_t*) &d->entries[i], indent+1); }
  }
  return sizeof (ATOM_PPLIB_Clock_Voltage_Limit_Table);
}
