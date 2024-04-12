void fun()
{
  int entity_3 = 77;
  char* entity_9;
  char entity_8[7] = "";
  char entity_0[79] = "";
  char entity_7 = 'p';
  memset(entity_0, 'n', 79-1);
  entity_0[79-1]='0';
  entity_9 = (char*)malloc(entity_3*sizeof(char));
  entity_9[0]='0';
  memset(entity_8, 'x', 7-1);
  entity_8[7-1]='0';
  entity_3 = 19;
  memcpy(entity_9, entity_8, 7*sizeof(char));
}