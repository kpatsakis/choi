void fun()
{
  int entity_8 = 93;
  char* entity_7;
  char entity_3 = 'U';
  char* entity_0;
  char entity_5[entity_8] = "";
  entity_5 = NULL;
  char entity_4[65] = "";
  entity_4 = NULL;
  entity_0 = (char*)malloc(75*sizeof(char));
  entity_0[75-1]='';
  entity_7 = (char*)malloc(54*sizeof(char));
  entity_7[54-1]='';
  memset(entity_4, 'g', 65-1);
  entity_4[65-1]='';
  memset(entity_5, 'x', entity_8-1);
  entity_5[entity_8-1]='';
  entity_8 = 91;
  memcpy(entity_7, entity_5, entity_8*sizeof(char));
}