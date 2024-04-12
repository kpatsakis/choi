void fun()
{
  int entity_8 = 77;
  int entity_0 = 78;
  char entity_7[entity_0] = "";
  entity_7 = NULL;
  char entity_6[63] = "";
  entity_6 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(73*sizeof(char));
  entity_3[73-1]='';
  memset(entity_6, 'B', 63-1);
  entity_6[63-1]='';
  memset(entity_7, 'x', entity_0-1);
  entity_7[entity_0-1]='';
  memcpy(entity_3, entity_7, entity_0*sizeof(char));
}