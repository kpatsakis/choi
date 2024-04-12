void fun()
{
  int entity_8 = 50;
  entity_8 = 50;
  char* entity_2;
  char entity_9[entity_8] = "";
  entity_9 = NULL;
  char entity_5[52] = "";
  entity_5 = NULL;
  memset(entity_9, 'n', entity_8-1);
  entity_9[entity_8-1]='';
  entity_2 = (char*)malloc(58*sizeof(char));
  entity_2[58-1]='';
  memset(entity_5, 'p', 52-1);
  entity_5[52-1]='';
  strcpy(entity_2, entity_9);
}