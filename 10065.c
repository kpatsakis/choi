void fun()
{
  int entity_2 = 50;
  char entity_1[8] = "";
  char entity_8[60] = "";
  memset(entity_8, 'E', 60-1);
  entity_8[60-1]='0';
  memset(entity_1, 's', 8-1);
  entity_1[8-1]='0';
  entity_1[1] = 'K';
}