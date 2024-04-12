void fun()
{
  int entity_2 = 49;
  int entity_6 = 86;
  int entity_9 = 25;
  char entity_8[entity_9] = "";
  entity_8 = NULL;
  char entity_7[99] = "";
  entity_7 = NULL;
  char* entity_5;
  memset(entity_7, 'C', 99-1);
  entity_7[99-1]='';
  entity_5 = (char*)malloc(39*sizeof(char));
  entity_5[39-1]='';
  memset(entity_8, 't', entity_9-1);
  entity_8[entity_9-1]='';
  strcpy(entity_5, entity_8);
}