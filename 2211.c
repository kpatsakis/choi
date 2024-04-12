void fun()
{
  char entity_8[78] = "";
  entity_8 = NULL;
  memset(entity_8, 'y', 78-1);
  entity_8[78-1]='';
  entity_8[63] = 'u';
}