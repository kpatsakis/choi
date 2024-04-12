void fun()
{
  char entity_1[24] = "";
  char entity_8 = 'i';
  memset(entity_1, 'z', 24-1);
  entity_1[24-1]='0';
  entity_1[85] = 'Y';
}