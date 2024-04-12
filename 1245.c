void fun()
{
  int entity_2 = 71;
  int entity_7 = 36;
  char* entity_0;
  char* entity_3;
  char entity_8[86] = "";
  entity_8 = NULL;
  entity_3 = (char*)malloc(entity_2*sizeof(char));
  entity_3[entity_2-1]='';
  entity_0 = (char*)malloc(32*sizeof(char));
  entity_0[32-1]='';
  memset(entity_8, 'K', 86-1);
  entity_8[86-1]='';
  memcpy(entity_3, entity_8, 86*sizeof(char));
}