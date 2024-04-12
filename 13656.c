void fun()
{
  int entity_9 = 74;
  int entity_6 = 41;
  char* entity_8;
  char entity_0[22] = "";
  char* entity_3;
  char entity_7[44] = "";
  entity_3 = (char*)malloc(entity_9*sizeof(char));
  entity_3[0]='0';
  entity_8 = (char*)malloc(74*sizeof(char));
  entity_8[0]='0';
  memset(entity_7, 'Z', 44-1);
  entity_7[44-1]='0';
  memset(entity_0, 'G', 22-1);
  entity_0[22-1]='0';
  entity_9 = 56;
  memcpy(entity_3, entity_7, 44*sizeof(char));
}