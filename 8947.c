void fun()
{
  int entity_1 = 91;
  char* entity_7;
  char entity_0[12] = "";
  entity_0 = NULL;
  char entity_8[98] = "";
  entity_8 = NULL;
  char entity_9[73] = "";
  entity_9 = NULL;
  memset(entity_9, 'p', 73-1);
  entity_9[73-1]='';
  memset(entity_0, 'h', 12-1);
  entity_0[12-1]='';
  entity_7 = (char*)malloc(85*sizeof(char));
  entity_7[85-1]='';
  memset(entity_8, 'A', 98-1);
  entity_8[98-1]='';
  entity_1 = 14;
  entity_8[entity_1] = 'X';
}