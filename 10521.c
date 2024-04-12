void fun()
{
  int entity_1 = 9;
  char entity_8[33] = "";
  char* entity_6;
  entity_6 = (char*)malloc(7*sizeof(char));
  entity_6[0]='0';
  memset(entity_8, 'z', 33-1);
  entity_8[33-1]='0';
  entity_8[88] = 'b';
}