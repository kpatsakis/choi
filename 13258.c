void fun()
{
  int entity_6 = 91;
  char entity_1[31] = "";
  char entity_8[3] = "";
  char* entity_0;
  entity_0 = (char*)malloc(entity_6*sizeof(char));
  entity_0[0]='0';
  memset(entity_1, 'V', 31-1);
  entity_1[31-1]='0';
  memset(entity_8, 'G', 3-1);
  entity_8[3-1]='0';
  entity_6 = 28;
  memcpy(entity_0, entity_8, 3*sizeof(char));
}