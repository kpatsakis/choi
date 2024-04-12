void fun()
{
  int entity_9 = 62;
  entity_9 = 62;
  char entity_7[80] = "";
  entity_7 = NULL;
  char* entity_5;
  char entity_6[entity_9] = "";
  entity_6 = NULL;
  memset(entity_6, 'O', entity_9-1);
  entity_6[entity_9-1]='';
  entity_5 = (char*)malloc(67*sizeof(char));
  entity_5[67-1]='';
  memset(entity_7, 'n', 80-1);
  entity_7[80-1]='';
  strcpy(entity_5, entity_6);
}