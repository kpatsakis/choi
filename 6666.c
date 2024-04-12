void fun()
{
  int entity_8 = 95;
  char entity_0[73] = "";
  entity_0 = NULL;
  char* entity_6;
  char entity_5[23] = "";
  entity_5 = NULL;
  entity_6 = (char*)malloc(entity_8*sizeof(char));
  entity_6[entity_8-1]='';
  memset(entity_5, 'o', 23-1);
  entity_5[23-1]='';
  memset(entity_0, 'G', 73-1);
  entity_0[73-1]='';
  memcpy(entity_6, entity_0, 73*sizeof(char));
}