void fun()
{
  int entity_1 = 76;
  char* entity_7;
  char entity_0[60] = "";
  entity_0 = NULL;
  char entity_6[76] = "";
  entity_6 = NULL;
  entity_7 = (char*)malloc(entity_1*sizeof(char));
  entity_7[entity_1-1]='';
  memset(entity_0, 'l', 60-1);
  entity_0[60-1]='';
  memset(entity_6, 'X', 76-1);
  entity_6[76-1]='';
  entity_1 = 27;
  strcpy(entity_7, entity_6);
}