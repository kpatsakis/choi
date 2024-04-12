void fun()
{
  char* entity_6;
  char entity_0[99] = "";
  entity_6 = (char*)malloc(22*sizeof(char));
  entity_6[0]='0';
  memset(entity_0, 'x', 99-1);
  entity_0[99-1]='0';
  entity_0[68] = 'r';
}