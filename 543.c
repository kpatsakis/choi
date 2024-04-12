void fun()
{
  int entity_1 = 25;
  char* entity_9;
  char entity_8[98] = "";
  entity_8 = NULL;
  entity_9 = (char*)malloc(entity_1*sizeof(char));
  entity_9[entity_1-1]='';
  memset(entity_8, 'Q', 98-1);
  entity_8[98-1]='';
  strcpy(entity_9, entity_8);
}