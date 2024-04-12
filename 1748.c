void fun()
{
  int entity_0 = 2;
  char entity_4[entity_0] = "";
  entity_4 = NULL;
  char* entity_9;
  memset(entity_4, 'Y', entity_0-1);
  entity_4[entity_0-1]='';
  entity_9 = (char*)malloc(98*sizeof(char));
  entity_9[98-1]='';
  entity_0 = 86;
  memcpy(entity_9, entity_4, entity_0*sizeof(char));
}