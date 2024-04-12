void fun()
{
  int entity_6 = 41;
  char entity_5[entity_6] = "";
  entity_5 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(98*sizeof(char));
  entity_0[98-1]='';
  memset(entity_5, 'R', entity_6-1);
  entity_5[entity_6-1]='';
  memcpy(entity_0, entity_5, entity_6*sizeof(char));
}