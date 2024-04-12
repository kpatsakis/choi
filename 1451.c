void fun()
{
  char* entity_6;
  char entity_8[25] = "";
  entity_8 = NULL;
  char entity_9[96] = "";
  entity_9 = NULL;
  entity_6 = (char*)malloc(91*sizeof(char));
  entity_6[91-1]='';
  memset(entity_8, 't', 25-1);
  entity_8[25-1]='';
  memset(entity_9, 'V', 96-1);
  entity_9[96-1]='';
  strcpy(entity_6, entity_8);
}