void fun()
{
  int entity_5 = 22;
  char* entity_6;
  char entity_8[1] = "";
  char entity_3 = 'Q';
  char entity_4[27] = "";
  memset(entity_4, 'h', 27-1);
  entity_4[27-1]='0';
  memset(entity_8, 'P', 1-1);
  entity_8[1-1]='0';
  entity_6 = (char*)malloc(entity_5*sizeof(char));
  entity_6[0]='0';
  strcpy(entity_6, entity_8);
}