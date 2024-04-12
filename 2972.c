void fun()
{
  int entity_6 = 41;
  char entity_7[entity_6] = "";
  entity_7 = NULL;
  char entity_9[58] = "";
  entity_9 = NULL;
  char* entity_0;
  memset(entity_7, 'w', entity_6-1);
  entity_7[entity_6-1]='';
  entity_0 = (char*)malloc(98*sizeof(char));
  entity_0[98-1]='';
  memset(entity_9, 'p', 58-1);
  entity_9[58-1]='';
  entity_6 = 17;
  memcpy(entity_0, entity_7, entity_6*sizeof(char));
}