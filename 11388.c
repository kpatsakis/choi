void fun()
{
  int entity_3 = 96;
  char entity_5[90] = "";
  char entity_8[23] = "";
  char* entity_4;
  entity_4 = (char*)malloc(42*sizeof(char));
  entity_4[0]='0';
  memset(entity_5, 'X', 90-1);
  entity_5[90-1]='0';
  memset(entity_8, 'a', 23-1);
  entity_8[23-1]='0';
  memcpy(entity_4, entity_5, 90*sizeof(char));
}