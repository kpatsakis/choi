void fun()
{
  int entity_3 = 56;
  char* entity_7;
  char entity_5[entity_3] = "";
  entity_5 = NULL;
  char entity_0[53] = "";
  entity_0 = NULL;
  memset(entity_5, 'U', entity_3-1);
  entity_5[entity_3-1]='';
  entity_7 = (char*)malloc(54*sizeof(char));
  entity_7[54-1]='';
  memset(entity_0, 'C', 53-1);
  entity_0[53-1]='';
  entity_3 = 54;
  memcpy(entity_7, entity_5, entity_3*sizeof(char));
}