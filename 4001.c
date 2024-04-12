void fun()
{
  int entity_6 = 4;
  entity_6 = 88;
  char* entity_5;
  char entity_9[entity_6] = "";
  entity_9 = NULL;
  char entity_8[93] = "";
  entity_8 = NULL;
  memset(entity_9, 'c', entity_6-1);
  entity_9[entity_6-1]='';
  memset(entity_8, 'O', 93-1);
  entity_8[93-1]='';
  entity_5 = (char*)malloc(55*sizeof(char));
  entity_5[55-1]='';
  memcpy(entity_5, entity_9, entity_6*sizeof(char));
}