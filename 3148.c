void fun()
{
  int entity_8 = 84;
  char entity_0[54] = "";
  entity_0 = NULL;
  char entity_6[48] = "";
  entity_6 = NULL;
  char* entity_4;
  memset(entity_0, 'B', 54-1);
  entity_0[54-1]='';
  memset(entity_6, 'Z', 48-1);
  entity_6[48-1]='';
  entity_4 = (char*)malloc(entity_8*sizeof(char));
  entity_4[entity_8-1]='';
  memcpy(entity_4, entity_0, 54*sizeof(char));
}