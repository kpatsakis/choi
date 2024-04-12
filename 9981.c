void fun()
{
  int entity_0 = 12;
  char entity_9[98] = "";
  entity_9 = NULL;
  char* entity_7;
  entity_7 = (char*)malloc(entity_0*sizeof(char));
  entity_7[entity_0-1]='';
  memset(entity_9, 'M', 98-1);
  entity_9[98-1]='';
  strcpy(entity_7, entity_9);
}