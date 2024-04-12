void fun()
{
  char entity_0[55] = "";
  char* entity_5;
  memset(entity_0, 'x', 55-1);
  entity_0[55-1]='0';
  entity_5 = (char*)malloc(66*sizeof(char));
  entity_5[0]='0';
  entity_0[99] = 'X';
}