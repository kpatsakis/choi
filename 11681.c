void fun()
{
  int entity_3 = 87;
  char entity_8[81] = "";
  char* entity_6;
  char entity_4[88] = "";
  memset(entity_8, 'L', 81-1);
  entity_8[81-1]='0';
  entity_6 = (char*)malloc(49*sizeof(char));
  entity_6[0]='0';
  memset(entity_4, 't', 88-1);
  entity_4[88-1]='0';
  strcpy(entity_6, entity_8);
}