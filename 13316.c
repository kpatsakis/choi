void fun()
{
  int entity_3 = 53;
  entity_3 = 78;
  char entity_0[59] = "";
  char* entity_4;
  char entity_8[84] = "";
  char entity_1 = 'S';
  memset(entity_0, 'J', 59-1);
  entity_0[59-1]='0';
  memset(entity_8, 'm', 84-1);
  entity_8[84-1]='0';
  entity_4 = (char*)malloc(entity_3*sizeof(char));
  entity_4[0]='0';
  memcpy(entity_4, entity_0, 59*sizeof(char));
}