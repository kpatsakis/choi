void fun()
{
  int entity_8 = 1;
  int entity_0 = 10;
  char entity_2[19] = "";
  char* entity_6;
  char entity_1[46] = "";
  memset(entity_2, 'H', 19-1);
  entity_2[19-1]='0';
  entity_6 = (char*)malloc(entity_8*sizeof(char));
  entity_6[0]='0';
  memset(entity_1, 'L', 46-1);
  entity_1[46-1]='0';
  memcpy(entity_6, entity_1, 46*sizeof(char));
}