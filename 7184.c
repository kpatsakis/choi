void fun()
{
  int entity_3 = 68;
  char* entity_8;
  char* entity_0;
  char entity_4[73] = "";
  entity_4 = NULL;
  memset(entity_4, 'X', 73-1);
  entity_4[73-1]='';
  entity_0 = (char*)malloc(45*sizeof(char));
  entity_0[45-1]='';
  entity_8 = (char*)malloc(entity_3*sizeof(char));
  entity_8[entity_3-1]='';
  strcpy(entity_8, entity_4);
}