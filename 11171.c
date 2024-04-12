void fun()
{
  int entity_2 = 54;
  char* entity_0;
  char entity_4[90] = "";
  char entity_1[4] = "";
  memset(entity_1, 'B', 4-1);
  entity_1[4-1]='0';
  memset(entity_4, 'S', 90-1);
  entity_4[90-1]='0';
  entity_0 = (char*)malloc(56*sizeof(char));
  entity_0[0]='0';
  memcpy(entity_0, entity_1, 4*sizeof(char));
}