void fun()
{
  int entity_4 = 45;
  char* entity_9;
  char entity_3[entity_4] = "";
  entity_3 = NULL;
  entity_9 = (char*)malloc(98*sizeof(char));
  entity_9[98-1]='';
  memset(entity_3, 'd', entity_4-1);
  entity_3[entity_4-1]='';
  memcpy(entity_9, entity_3, entity_4*sizeof(char));
}