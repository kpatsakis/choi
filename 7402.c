void fun()
{
  int entity_0 = 12;
  entity_0 = 33;
  char entity_6[54] = "";
  entity_6 = NULL;
  char* entity_5;
  char entity_8[60] = "";
  entity_8 = NULL;
  entity_5 = (char*)malloc(entity_0*sizeof(char));
  entity_5[entity_0-1]='';
  memset(entity_8, 'D', 60-1);
  entity_8[60-1]='';
  memset(entity_6, 'h', 54-1);
  entity_6[54-1]='';
  memcpy(entity_5, entity_6, 54*sizeof(char));
}