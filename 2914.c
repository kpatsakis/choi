void fun()
{
  int entity_4 = 6;
  char entity_2[entity_4] = "";
  entity_2 = NULL;
  char* entity_9;
  entity_9 = (char*)malloc(98*sizeof(char));
  entity_9[98-1]='';
  memset(entity_2, 'U', entity_4-1);
  entity_2[entity_4-1]='';
  memcpy(entity_9, entity_2, entity_4*sizeof(char));
}