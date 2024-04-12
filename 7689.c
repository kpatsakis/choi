void fun()
{
  int entity_9 = 2;
  char entity_4 = 'p';
  char entity_6[entity_9] = "";
  entity_6 = NULL;
  char* entity_7;
  entity_7 = (char*)malloc(98*sizeof(char));
  entity_7[98-1]='';
  memset(entity_6, 'c', entity_9-1);
  entity_6[entity_9-1]='';
  entity_9 = 12;
  memcpy(entity_7, entity_6, entity_9*sizeof(char));
}