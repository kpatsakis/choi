void fun()
{
  int entity_2 = 59;
  char* entity_8;
  char entity_9[entity_2] = "";
  entity_9 = NULL;
  memset(entity_9, 'W', entity_2-1);
  entity_9[entity_2-1]='';
  entity_8 = (char*)malloc(98*sizeof(char));
  entity_8[98-1]='';
  memcpy(entity_8, entity_9, entity_2*sizeof(char));
}