void fun()
{
  int entity_4 = 53;
  char entity_8[13] = "";
  entity_8 = NULL;
  char entity_0[entity_4] = "";
  entity_0 = NULL;
  char* entity_5;
  char entity_3[89] = "";
  entity_3 = NULL;
  memset(entity_0, 'G', entity_4-1);
  entity_0[entity_4-1]='';
  memset(entity_8, 'C', 13-1);
  entity_8[13-1]='';
  memset(entity_3, 'A', 89-1);
  entity_3[89-1]='';
  entity_5 = (char*)malloc(41*sizeof(char));
  entity_5[41-1]='';
  entity_4 = 35;
  memcpy(entity_5, entity_0, entity_4*sizeof(char));
}