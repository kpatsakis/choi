void fun()
{
  char entity_4[34] = "";
  memset(entity_4, 'z', 34-1);
  entity_4[34-1]='0';
  entity_4[74] = 'f';
}