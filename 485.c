void fun()
{
  int entity_2 = 49;
  char entity_9[34] = "";
  entity_9 = NULL;
  char* entity_6;
  char entity_4 = 'U';
  char entity_1[entity_2] = "";
  entity_1 = NULL;
  memset(entity_9, 'V', 34-1);
  entity_9[34-1]='';
  memset(entity_1, 'V', entity_2-1);
  entity_1[entity_2-1]='';
  entity_6 = (char*)malloc(52*sizeof(char));
  entity_6[52-1]='';
  entity_2 = 22;
  strcpy(entity_6, entity_1);
}