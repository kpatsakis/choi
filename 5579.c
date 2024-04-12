void fun()
{
  int entity_8 = 29;
  char* entity_5;
  char entity_6[93] = "";
  entity_6 = NULL;
  char entity_3 = 's';
  char entity_9[94] = "";
  entity_9 = NULL;
  entity_5 = (char*)malloc(entity_8*sizeof(char));
  entity_5[entity_8-1]='';
  memset(entity_6, 'Q', 93-1);
  entity_6[93-1]='';
  memset(entity_9, 'a', 94-1);
  entity_9[94-1]='';
  strcpy(entity_5, entity_9);
}