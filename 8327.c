void fun()
{
  int entity_5 = 25;
  int entity_6 = 64;
  char entity_7[99] = "";
  entity_7 = NULL;
  char entity_1 = 'X';
  memset(entity_7, 'T', 99-1);
  entity_7[99-1]='';
  entity_7[entity_6] = 'G';
}