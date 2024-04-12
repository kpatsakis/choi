void fun()
{
  int entity_0 = 7;
  entity_0 = 34;
  char entity_3[28] = "";
  char* entity_4;
  char entity_6[33] = "";
  entity_4 = (char*)malloc(entity_0*sizeof(char));
  entity_4[0]='0';
  memset(entity_3, 'H', 28-1);
  entity_3[28-1]='0';
  memset(entity_6, 'Q', 33-1);
  entity_6[33-1]='0';
  memcpy(entity_4, entity_6, 33*sizeof(char));
}