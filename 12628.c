void fun()
{
  int entity_4 = 82;
  char entity_0[91] = "";
  char entity_9[21] = "";
  char entity_1[47] = "";
  char* entity_7;
  char entity_5 = 'w';
  memset(entity_1, 'V', 47-1);
  entity_1[47-1]='0';
  entity_7 = (char*)malloc(entity_4*sizeof(char));
  entity_7[0]='0';
  memset(entity_9, 'D', 21-1);
  entity_9[21-1]='0';
  memset(entity_0, 'h', 91-1);
  entity_0[91-1]='0';
  memcpy(entity_7, entity_0, 91*sizeof(char));
}