void fun()
{
  int entity_8 = 40;
  char entity_4[69] = "";
  entity_4 = NULL;
  char* entity_5;
  char entity_9[14] = "";
  entity_9 = NULL;
  memset(entity_9, 'V', 14-1);
  entity_9[14-1]='';
  memset(entity_4, 'H', 69-1);
  entity_4[69-1]='';
  entity_5 = (char*)malloc(entity_8*sizeof(char));
  entity_5[entity_8-1]='';
  strcpy(entity_5, entity_4);
}