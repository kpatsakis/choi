void fun()
{
  char entity_6[62] = "";
  char entity_3[14] = "";
  memset(entity_3, 'g', 14-1);
  entity_3[14-1]='0';
  memset(entity_6, 'u', 62-1);
  entity_6[62-1]='0';
  entity_3[78] = 'b';
}