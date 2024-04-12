void fun()
{
  char* entity_1;
  char entity_9[96] = "";
  entity_9 = NULL;
  char entity_8[29] = "";
  entity_8 = NULL;
  memset(entity_8, 'r', 29-1);
  entity_8[29-1]='';
  entity_1 = (char*)malloc(17*sizeof(char));
  entity_1[17-1]='';
  memset(entity_9, 'Y', 96-1);
  entity_9[96-1]='';
  strcpy(entity_1, entity_9);
}