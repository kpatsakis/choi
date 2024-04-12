void fun()
{
  int entity_7 = 46;
  int entity_2 = 27;
  entity_2 = 26;
  char* entity_0;
  char entity_9[98] = "";
  entity_9 = NULL;
  char entity_3 = 'p';
  char* entity_4;
  entity_4 = (char*)malloc(entity_2*sizeof(char));
  entity_4[entity_2-1]='';
  entity_0 = (char*)malloc(20*sizeof(char));
  entity_0[20-1]='';
  memset(entity_9, 'K', 98-1);
  entity_9[98-1]='';
  memcpy(entity_4, entity_9, 98*sizeof(char));
}