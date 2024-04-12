void fun()
{
  int entity_6 = 29;
  char entity_5[17] = "";
  entity_5 = NULL;
  char* entity_0;
  char entity_8[54] = "";
  entity_8 = NULL;
  memset(entity_5, 'u', 17-1);
  entity_5[17-1]='';
  entity_0 = (char*)malloc(entity_6*sizeof(char));
  entity_0[entity_6-1]='';
  memset(entity_8, 'g', 54-1);
  entity_8[54-1]='';
  memcpy(entity_0, entity_8, 54*sizeof(char));
}