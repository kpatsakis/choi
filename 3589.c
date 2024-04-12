void fun()
{
  int entity_0 = 54;
  char entity_1[78] = "";
  entity_1 = NULL;
  char* entity_6;
  char entity_8[22] = "";
  entity_8 = NULL;
  char entity_9[20] = "";
  entity_9 = NULL;
  memset(entity_8, 'P', 22-1);
  entity_8[22-1]='';
  entity_6 = (char*)malloc(entity_0*sizeof(char));
  entity_6[entity_0-1]='';
  memset(entity_1, 't', 78-1);
  entity_1[78-1]='';
  memset(entity_9, 'I', 20-1);
  entity_9[20-1]='';
  strcpy(entity_6, entity_1);
}