void fun()
{
  char entity_4 = 'c';
  char entity_7[26] = "";
  char* entity_3;
  char entity_0[15] = "";
  char entity_9[37] = "";
  memset(entity_9, 'B', 37-1);
  entity_9[37-1]='0';
  memset(entity_7, 'Q', 26-1);
  entity_7[26-1]='0';
  memset(entity_0, 't', 15-1);
  entity_0[15-1]='0';
  entity_3 = (char*)malloc(7*sizeof(char));
  entity_3[0]='0';
  memcpy(entity_3, entity_7, 26*sizeof(char));
}