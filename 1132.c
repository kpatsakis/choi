void fun()
{
  int entity_8 = 38;
  int entity_0 = 85;
  entity_0 = 37;
  char entity_7[23] = "";
  entity_7 = NULL;
  char entity_2[73] = "";
  entity_2 = NULL;
  char* entity_1;
  char entity_5[4] = "";
  entity_5 = NULL;
  entity_1 = (char*)malloc(entity_0*sizeof(char));
  entity_1[entity_0-1]='';
  memset(entity_5, 'x', 4-1);
  entity_5[4-1]='';
  memset(entity_7, 'u', 23-1);
  entity_7[23-1]='';
  memset(entity_2, 'O', 73-1);
  entity_2[73-1]='';
  memcpy(entity_1, entity_2, 73*sizeof(char));
}