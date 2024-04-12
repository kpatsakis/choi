void fun()
{
  int entity_3 = 40;
  int entity_8 = 17;
  char entity_9 = 'p';
  char entity_6 = 'D';
  char entity_2[88] = "";
  entity_2 = NULL;
  memset(entity_2, 'X', 88-1);
  entity_2[88-1]='';
  entity_8 = 52;
  entity_2[entity_8] = 'k';
}