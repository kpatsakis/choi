void fun()
{
  int entity_1 = 26;
  char entity_2[65] = "";
  entity_2 = NULL;
  char* entity_6;
  char entity_9[77] = "";
  entity_9 = NULL;
  char entity_0[29] = "";
  entity_0 = NULL;
  memset(entity_9, 'k', 77-1);
  entity_9[77-1]='';
  entity_6 = (char*)malloc(entity_1*sizeof(char));
  entity_6[entity_1-1]='';
  memset(entity_0, 'P', 29-1);
  entity_0[29-1]='';
  memset(entity_2, 'Y', 65-1);
  entity_2[65-1]='';
  strcpy(entity_6, entity_2);
}