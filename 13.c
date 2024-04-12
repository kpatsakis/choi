void fun()
{
  int entity_6 = 96;
  int entity_1 = 72;
  char entity_0[33] = "";
  entity_0 = NULL;
  char entity_8[96] = "";
  entity_8 = NULL;
  char* entity_7;
  entity_7 = (char*)malloc(entity_6*sizeof(char));
  entity_7[entity_6-1]='';
  memset(entity_8, 'a', 96-1);
  entity_8[96-1]='';
  memset(entity_0, 'd', 33-1);
  entity_0[33-1]='';
  memcpy(entity_7, entity_0, 33*sizeof(char));
}