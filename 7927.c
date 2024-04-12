void fun()
{
  int entity_4 = 62;
  char entity_3[39] = "";
  entity_3 = NULL;
  char entity_6[entity_4] = "";
  entity_6 = NULL;
  char* entity_5;
  memset(entity_3, 'Z', 39-1);
  entity_3[39-1]='';
  entity_5 = (char*)malloc(6*sizeof(char));
  entity_5[6-1]='';
  memset(entity_6, 'b', entity_4-1);
  entity_6[entity_4-1]='';
  memcpy(entity_5, entity_6, entity_4*sizeof(char));
}