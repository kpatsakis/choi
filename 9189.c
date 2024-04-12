void fun()
{
  int entity_5 = 68;
  int entity_3 = 36;
  char* entity_1;
  char entity_0 = 'y';
  char entity_9[53] = "";
  entity_9 = NULL;
  entity_1 = (char*)malloc(entity_3*sizeof(char));
  entity_1[entity_3-1]='';
  memset(entity_9, 'P', 53-1);
  entity_9[53-1]='';
  memcpy(entity_1, entity_9, 53*sizeof(char));
}