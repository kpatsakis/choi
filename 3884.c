void fun()
{
  int entity_0 = 41;
  entity_0 = 30;
  char* entity_6;
  char entity_3[97] = "";
  entity_3 = NULL;
  char entity_8[83] = "";
  entity_8 = NULL;
  char entity_9[91] = "";
  entity_9 = NULL;
  memset(entity_9, 'B', 91-1);
  entity_9[91-1]='';
  memset(entity_3, 'e', 97-1);
  entity_3[97-1]='';
  memset(entity_8, 'q', 83-1);
  entity_8[83-1]='';
  entity_6 = (char*)malloc(entity_0*sizeof(char));
  entity_6[entity_0-1]='';
  strcpy(entity_6, entity_3);
}