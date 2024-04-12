void fun()
{
  char* entity_8;
  char entity_4[80] = "";
  char entity_2 = 'c';
  entity_8 = (char*)malloc(64*sizeof(char));
  entity_8[0]='0';
  memset(entity_4, 'x', 80-1);
  entity_4[80-1]='0';
  entity_4[23] = 'z';
}