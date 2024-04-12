void fun()
{
  int entity_0 = 7;
  char* entity_1;
  char entity_4[entity_0] = "";
  entity_4 = NULL;
  memset(entity_4, 'H', entity_0-1);
  entity_4[entity_0-1]='';
  entity_1 = (char*)malloc(98*sizeof(char));
  entity_1[98-1]='';
  strcpy(entity_1, entity_4);
}