void fun()
{
  int entity_8 = 7;
  char* entity_0;
  char entity_3[32] = "";
  entity_3 = NULL;
  char entity_4[0] = "";
  entity_4 = NULL;
  memset(entity_3, 'D', 32-1);
  entity_3[32-1]='';
  entity_0 = (char*)malloc(entity_8*sizeof(char));
  entity_0[entity_8-1]='';
  memset(entity_4, 'M', 0-1);
  entity_4[0-1]='';
  memcpy(entity_0, entity_3, 32*sizeof(char));
}