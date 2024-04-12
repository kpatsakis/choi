void fun()
{
  int entity_3 = 13;
  char entity_8[73] = "";
  entity_8 = NULL;
  char entity_5[3] = "";
  entity_5 = NULL;
  char* entity_7;
  char entity_4[10] = "";
  entity_4 = NULL;
  memset(entity_4, 'B', 10-1);
  entity_4[10-1]='';
  memset(entity_5, 'w', 3-1);
  entity_5[3-1]='';
  memset(entity_8, 'l', 73-1);
  entity_8[73-1]='';
  entity_7 = (char*)malloc(entity_3*sizeof(char));
  entity_7[entity_3-1]='';
  memcpy(entity_7, entity_4, 10*sizeof(char));
}