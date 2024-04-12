void fun()
{
  int entity_3 = 54;
  char entity_4[8] = "";
  entity_4 = NULL;
  char* entity_0;
  char entity_8[49] = "";
  entity_8 = NULL;
  memset(entity_4, 'T', 8-1);
  entity_4[8-1]='';
  entity_0 = (char*)malloc(26*sizeof(char));
  entity_0[26-1]='';
  memset(entity_8, 'Z', 49-1);
  entity_8[49-1]='';
  memcpy(entity_0, entity_8, 49*sizeof(char));
}