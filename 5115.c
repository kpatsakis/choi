void fun()
{
  int entity_1 = 8;
  char entity_6[18] = "";
  entity_6 = NULL;
  char* entity_5;
  char entity_9[entity_1] = "";
  entity_9 = NULL;
  memset(entity_9, 'b', entity_1-1);
  entity_9[entity_1-1]='';
  entity_5 = (char*)malloc(73*sizeof(char));
  entity_5[73-1]='';
  memset(entity_6, 'L', 18-1);
  entity_6[18-1]='';
  strcpy(entity_5, entity_9);
}