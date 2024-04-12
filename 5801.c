void fun()
{
  int entity_2 = 52;
  int entity_4 = 96;
  char entity_3[49] = "";
  entity_3 = NULL;
  memset(entity_3, 'L', 49-1);
  entity_3[49-1]='';
  entity_3[62] = 'a';
}