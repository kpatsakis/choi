void fun()
{
  int entity_3 = 15;
  entity_3 = 11;
  char entity_8[entity_3] = "";
  entity_8 = NULL;
  char entity_5[4] = "";
  entity_5 = NULL;
  char* entity_0;
  memset(entity_5, 'F', 4-1);
  entity_5[4-1]='';
  memset(entity_8, 'Q', entity_3-1);
  entity_8[entity_3-1]='';
  entity_0 = (char*)malloc(67*sizeof(char));
  entity_0[67-1]='';
  memcpy(entity_0, entity_8, entity_3*sizeof(char));
}