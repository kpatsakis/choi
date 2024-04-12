void fun()
{
  int entity_8 = 18;
  int entity_5 = 8;
  char* entity_1;
  char entity_4[34] = "";
  char entity_0[39] = "";
  entity_1 = (char*)malloc(entity_5*sizeof(char));
  entity_1[0]='0';
  memset(entity_0, 'v', 39-1);
  entity_0[39-1]='0';
  memset(entity_4, 'N', 34-1);
  entity_4[34-1]='0';
  entity_5 = 87;
  strcpy(entity_1, entity_0);
}