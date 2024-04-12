void fun()
{
  int entity_3 = 15;
  int entity_9 = 47;
  entity_3 = 46;
  char entity_8[54] = "";
  char* entity_2;
  char entity_1[56] = "";
  char entity_0 = 'b';
  memset(entity_8, 'n', 54-1);
  entity_8[54-1]='0';
  entity_2 = (char*)malloc(entity_3*sizeof(char));
  entity_2[0]='0';
  memset(entity_1, 'x', 56-1);
  entity_1[56-1]='0';
  memcpy(entity_2, entity_8, 54*sizeof(char));
}