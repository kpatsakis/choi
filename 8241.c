void fun()
{
  int entity_1 = 47;
  int entity_7 = 43;
  char entity_9[32] = "";
  entity_9 = NULL;
  char* entity_2;
  char entity_8[93] = "";
  entity_8 = NULL;
  memset(entity_8, 'U', 93-1);
  entity_8[93-1]='';
  entity_2 = (char*)malloc(entity_7*sizeof(char));
  entity_2[entity_7-1]='';
  memset(entity_9, 'l', 32-1);
  entity_9[32-1]='';
  memcpy(entity_2, entity_9, 32*sizeof(char));
}