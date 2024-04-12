void fun()
{
  char entity_9[97] = "";
  entity_9 = NULL;
  char entity_0[62] = "";
  entity_0 = NULL;
  char* entity_6;
  memset(entity_9, 'G', 97-1);
  entity_9[97-1]='';
  entity_6 = (char*)malloc(15*sizeof(char));
  entity_6[15-1]='';
  memset(entity_0, 'n', 62-1);
  entity_0[62-1]='';
  strcpy(entity_6, entity_9);
}