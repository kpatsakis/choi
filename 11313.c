void fun()
{
  int entity_3 = 64;
  char entity_6 = 'G';
  char entity_1[4] = "";
  char* entity_0;
  char entity_4[18] = "";
  entity_0 = (char*)malloc(58*sizeof(char));
  entity_0[0]='0';
  memset(entity_1, 'q', 4-1);
  entity_1[4-1]='0';
  memset(entity_4, 'P', 18-1);
  entity_4[18-1]='0';
  strcpy(entity_0, entity_4);
}