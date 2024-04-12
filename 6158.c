void fun()
{
  int entity_7 = 51;
  char* entity_8;
  char entity_9 = 'B';
  char entity_4[entity_7] = "";
  entity_4 = NULL;
  entity_8 = (char*)malloc(98*sizeof(char));
  entity_8[98-1]='';
  memset(entity_4, 'K', entity_7-1);
  entity_4[entity_7-1]='';
  strcpy(entity_8, entity_4);
}