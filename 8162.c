void fun()
{
  int entity_5 = 53;
  char entity_7[21] = "";
  entity_7 = NULL;
  char* entity_9;
  entity_9 = (char*)malloc(entity_5*sizeof(char));
  entity_9[entity_5-1]='';
  memset(entity_7, 'H', 21-1);
  entity_7[21-1]='';
  strcpy(entity_9, entity_7);
}