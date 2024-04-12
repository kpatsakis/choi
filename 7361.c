void fun()
{
  int entity_0 = 66;
  int entity_4 = 28;
  char entity_8[14] = "";
  entity_8 = NULL;
  char* entity_2;
  char entity_9[entity_4] = "";
  entity_9 = NULL;
  entity_2 = (char*)malloc(55*sizeof(char));
  entity_2[55-1]='';
  memset(entity_8, 'a', 14-1);
  entity_8[14-1]='';
  memset(entity_9, 't', entity_4-1);
  entity_9[entity_4-1]='';
  memcpy(entity_2, entity_9, entity_4*sizeof(char));
}