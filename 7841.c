void fun()
{
  int entity_2 = 49;
  char entity_9[98] = "";
  entity_9 = NULL;
  char* entity_1;
  char* entity_0;
  entity_0 = (char*)malloc(entity_2*sizeof(char));
  entity_0[entity_2-1]='';
  entity_1 = (char*)malloc(60*sizeof(char));
  entity_1[60-1]='';
  memset(entity_9, 'B', 98-1);
  entity_9[98-1]='';
  memcpy(entity_0, entity_9, 98*sizeof(char));
}