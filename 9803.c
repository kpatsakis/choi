void fun()
{
  int entity_0 = 5;
  int entity_9 = 41;
  char entity_6[4] = "";
  entity_6 = NULL;
  char entity_3[91] = "";
  entity_3 = NULL;
  char* entity_7;
  entity_7 = (char*)malloc(entity_0*sizeof(char));
  entity_7[entity_0-1]='';
  memset(entity_3, 'p', 91-1);
  entity_3[91-1]='';
  memset(entity_6, 'p', 4-1);
  entity_6[4-1]='';
  strcpy(entity_7, entity_6);
}