void fun()
{
  int entity_5 = 67;
  char* entity_7;
  char entity_0[88] = "";
  char entity_4[39] = "";
  char entity_1 = 'j';
  entity_7 = (char*)malloc(entity_5*sizeof(char));
  entity_7[0]='0';
  memset(entity_4, 'f', 39-1);
  entity_4[39-1]='0';
  memset(entity_0, 'X', 88-1);
  entity_0[88-1]='0';
  entity_5 = 52;
  memcpy(entity_7, entity_0, 88*sizeof(char));
}