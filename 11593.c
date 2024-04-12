void fun()
{
  char entity_0[61] = "";
  char* entity_6;
  char entity_8[99] = "";
  entity_6 = (char*)malloc(49*sizeof(char));
  entity_6[0]='0';
  memset(entity_8, 'n', 99-1);
  entity_8[99-1]='0';
  memset(entity_0, 'i', 61-1);
  entity_0[61-1]='0';
  memcpy(entity_6, entity_8, 99*sizeof(char));
}