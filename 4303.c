void fun()
{
  int entity_6 = 46;
  char* entity_8;
  char entity_7[8] = "";
  entity_7 = NULL;
  char entity_0[54] = "";
  entity_0 = NULL;
  char entity_3[entity_6] = "";
  entity_3 = NULL;
  memset(entity_3, 's', entity_6-1);
  entity_3[entity_6-1]='';
  entity_8 = (char*)malloc(15*sizeof(char));
  entity_8[15-1]='';
  memset(entity_0, 'T', 54-1);
  entity_0[54-1]='';
  memset(entity_7, 'D', 8-1);
  entity_7[8-1]='';
  memcpy(entity_8, entity_3, entity_6*sizeof(char));
}