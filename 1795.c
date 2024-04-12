void fun()
{
  int entity_9 = 7;
  char entity_2[35] = "";
  entity_2 = NULL;
  char entity_1[entity_9] = "";
  entity_1 = NULL;
  char* entity_5;
  char entity_8[33] = "";
  entity_8 = NULL;
  entity_5 = (char*)malloc(49*sizeof(char));
  entity_5[49-1]='';
  memset(entity_8, 'l', 33-1);
  entity_8[33-1]='';
  memset(entity_2, 'I', 35-1);
  entity_2[35-1]='';
  memset(entity_1, 'P', entity_9-1);
  entity_1[entity_9-1]='';
  strcpy(entity_5, entity_1);
}