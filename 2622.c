void fun()
{
  int entity_5 = 13;
  char entity_2 = 'X';
  char* entity_9;
  char entity_7[entity_5] = "";
  entity_7 = NULL;
  entity_9 = (char*)malloc(24*sizeof(char));
  entity_9[24-1]='';
  memset(entity_7, 'q', entity_5-1);
  entity_7[entity_5-1]='';
  strcpy(entity_9, entity_7);
}