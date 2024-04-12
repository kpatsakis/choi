void fun()
{
  int entity_6 = 37;
  char* entity_4;
  char* entity_9;
  char entity_7[entity_6] = "";
  entity_7 = NULL;
  char entity_5 = 'm';
  memset(entity_7, 'X', entity_6-1);
  entity_7[entity_6-1]='';
  entity_4 = (char*)malloc(55*sizeof(char));
  entity_4[55-1]='';
  entity_9 = (char*)malloc(67*sizeof(char));
  entity_9[67-1]='';
  strcpy(entity_4, entity_7);
}