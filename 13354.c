void fun()
{
  int entity_9 = 92;
  int entity_7 = 99;
  char entity_5[85] = "";
  char* entity_6;
  char* entity_8;
  char entity_0[20] = "";
  entity_8 = (char*)malloc(entity_9*sizeof(char));
  entity_8[0]='0';
  memset(entity_5, 'x', 85-1);
  entity_5[85-1]='0';
  entity_6 = (char*)malloc(16*sizeof(char));
  entity_6[0]='0';
  memset(entity_0, 'h', 20-1);
  entity_0[20-1]='0';
  entity_9 = 62;
  memcpy(entity_8, entity_0, 20*sizeof(char));
}