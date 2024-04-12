void fun()
{
  int entity_5 = 21;
  int entity_0 = 47;
  int entity_4 = 46;
  int entity_3 = 64;
  char entity_9[entity_4] = "";
  entity_9 = NULL;
  char* entity_1;
  memset(entity_9, 'i', entity_4-1);
  entity_9[entity_4-1]='';
  entity_1 = (char*)malloc(22*sizeof(char));
  entity_1[22-1]='';
  memcpy(entity_1, entity_9, entity_4*sizeof(char));
}