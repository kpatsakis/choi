void fun()
{
  int entity_8 = 89;
  entity_8 = 68;
  char entity_7[73] = "";
  entity_7 = NULL;
  char* entity_0;
  char entity_4[34] = "";
  entity_4 = NULL;
  memset(entity_7, 'n', 73-1);
  entity_7[73-1]='';
  memset(entity_4, 'c', 34-1);
  entity_4[34-1]='';
  entity_0 = (char*)malloc(80*sizeof(char));
  entity_0[80-1]='';
  entity_7[entity_8] = 'S';
}