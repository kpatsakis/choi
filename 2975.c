void fun()
{
  int entity_1 = 69;
  int entity_3 = 90;
  int entity_4 = 99;
  char entity_0[97] = "";
  entity_0 = NULL;
  char entity_7[entity_4] = "";
  entity_7 = NULL;
  char* entity_9;
  memset(entity_7, 'm', entity_4-1);
  entity_7[entity_4-1]='';
  entity_9 = (char*)malloc(5*sizeof(char));
  entity_9[5-1]='';
  memset(entity_0, 'U', 97-1);
  entity_0[97-1]='';
  memcpy(entity_9, entity_7, entity_4*sizeof(char));
}