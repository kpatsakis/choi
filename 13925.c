void fun()
{
  int entity_1 = 99;
  entity_1 = 62;
  char* entity_6;
  char entity_8[12] = "";
  entity_6 = (char*)malloc(entity_1*sizeof(char));
  entity_6[0]='0';
  memset(entity_8, 'a', 12-1);
  entity_8[12-1]='0';
  memcpy(entity_6, entity_8, 12*sizeof(char));
}