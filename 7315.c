void fun()
{
  int entity_5 = 87;
  int entity_0 = 3;
  entity_5 = 3;
  char* entity_4;
  char entity_9[18] = "";
  entity_9 = NULL;
  char entity_7[58] = "";
  entity_7 = NULL;
  memset(entity_9, 'X', 18-1);
  entity_9[18-1]='';
  memset(entity_7, 'G', 58-1);
  entity_7[58-1]='';
  entity_4 = (char*)malloc(entity_5*sizeof(char));
  entity_4[entity_5-1]='';
  strcpy(entity_4, entity_7);
}