void fun()
{
  int entity_8 = 14;
  char entity_5[74] = "";
  entity_5 = NULL;
  char entity_6[26] = "";
  entity_6 = NULL;
  char* entity_4;
  memset(entity_5, 'r', 74-1);
  entity_5[74-1]='';
  memset(entity_6, 'n', 26-1);
  entity_6[26-1]='';
  entity_4 = (char*)malloc(entity_8*sizeof(char));
  entity_4[entity_8-1]='';
  memcpy(entity_4, entity_6, 26*sizeof(char));
}