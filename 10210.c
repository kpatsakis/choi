void fun()
{
  char entity_1 = 'a';
  char entity_3[78] = "";
  memset(entity_3, 'C', 78-1);
  entity_3[78-1]='0';
  entity_3[8] = 'r';
}