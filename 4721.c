void fun()
{
  int entity_1 = 76;
  char* entity_8;
  char entity_7[49] = "";
  entity_7 = NULL;
  char entity_4[58] = "";
  entity_4 = NULL;
  char entity_0[77] = "";
  entity_0 = NULL;
  memset(entity_7, 'Z', 49-1);
  entity_7[49-1]='';
  entity_8 = (char*)malloc(entity_1*sizeof(char));
  entity_8[entity_1-1]='';
  memset(entity_0, 'O', 77-1);
  entity_0[77-1]='';
  memset(entity_4, 's', 58-1);
  entity_4[58-1]='';
  entity_1 = 40;
  memcpy(entity_8, entity_7, 49*sizeof(char));
}