void fun()
{
  int entity_9 = 41;
  entity_9 = 41;
  char* entity_3;
  char entity_0[entity_9] = "";
  entity_0 = NULL;
  memset(entity_0, 's', entity_9-1);
  entity_0[entity_9-1]='';
  entity_3 = (char*)malloc(98*sizeof(char));
  entity_3[98-1]='';
  strcpy(entity_3, entity_0);
}