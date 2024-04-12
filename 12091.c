void fun()
{
  int entity_3 = 91;
  char* entity_4;
  char entity_8[99] = "";
  memset(entity_8, 'l', 99-1);
  entity_8[99-1]='0';
  entity_4 = (char*)malloc(entity_3*sizeof(char));
  entity_4[0]='0';
  memcpy(entity_4, entity_8, 99*sizeof(char));
}