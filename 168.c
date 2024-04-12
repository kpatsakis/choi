void fun()
{
  int entity_4 = 19;
  int entity_7 = 88;
  int entity_8 = 38;
  int entity_3 = 12;
  entity_8 = 91;
  char entity_9[entity_8] = "";
  entity_9 = NULL;
  char* entity_5;
  memset(entity_9, 'N', entity_8-1);
  entity_9[entity_8-1]='';
  entity_5 = (char*)malloc(58*sizeof(char));
  entity_5[58-1]='';
  memcpy(entity_5, entity_9, entity_8*sizeof(char));
}