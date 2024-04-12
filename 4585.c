void fun()
{
  int entity_5 = 31;
  entity_5 = 70;
  char* entity_9;
  char entity_1[51] = "";
  entity_1 = NULL;
  memset(entity_1, 'H', 51-1);
  entity_1[51-1]='';
  entity_9 = (char*)malloc(entity_5*sizeof(char));
  entity_9[entity_5-1]='';
  memcpy(entity_9, entity_1, 51*sizeof(char));
}