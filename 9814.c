void fun()
{
  int entity_8 = 68;
  char entity_1[32] = "";
  entity_1 = NULL;
  char* entity_0;
  char entity_3[entity_8] = "";
  entity_3 = NULL;
  entity_0 = (char*)malloc(55*sizeof(char));
  entity_0[55-1]='';
  memset(entity_3, 'f', entity_8-1);
  entity_3[entity_8-1]='';
  memset(entity_1, 's', 32-1);
  entity_1[32-1]='';
  memcpy(entity_0, entity_3, entity_8*sizeof(char));
}