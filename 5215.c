void fun()
{
  int entity_2 = 29;
  char entity_9 = 'V';
  char entity_8[81] = "";
  entity_8 = NULL;
  char entity_0[81] = "";
  entity_0 = NULL;
  char* entity_7;
  memset(entity_8, 'z', 81-1);
  entity_8[81-1]='';
  entity_7 = (char*)malloc(entity_2*sizeof(char));
  entity_7[entity_2-1]='';
  memset(entity_0, 'X', 81-1);
  entity_0[81-1]='';
  strcpy(entity_7, entity_0);
}