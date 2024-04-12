void fun()
{
  int entity_8 = 40;
  int entity_0 = 13;
  char* entity_6;
  char entity_9[61] = "";
  entity_9 = NULL;
  char entity_7[36] = "";
  entity_7 = NULL;
  memset(entity_7, 'H', 36-1);
  entity_7[36-1]='';
  entity_6 = (char*)malloc(entity_8*sizeof(char));
  entity_6[entity_8-1]='';
  memset(entity_9, 'Y', 61-1);
  entity_9[61-1]='';
  strcpy(entity_6, entity_7);
}