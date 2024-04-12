void fun()
{
  char entity_8[48] = "";
  char* entity_4;
  entity_4 = (char*)malloc(23*sizeof(char));
  entity_4[0]='0';
  memset(entity_8, 'l', 48-1);
  entity_8[48-1]='0';
  memcpy(entity_4, entity_8, 48*sizeof(char));
}