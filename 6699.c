void fun()
{
  int entity_7 = 56;
  char entity_5 = 't';
  char* entity_6;
  char entity_9[65] = "";
  entity_9 = NULL;
  memset(entity_9, 'Z', 65-1);
  entity_9[65-1]='';
  entity_6 = (char*)malloc(entity_7*sizeof(char));
  entity_6[entity_7-1]='';
  entity_7 = 7;
  strcpy(entity_6, entity_9);
}