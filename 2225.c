void fun()
{
  int entity_5 = 8;
  int entity_1 = 10;
  char entity_3[82] = "";
  entity_3 = NULL;
  char entity_8 = 'P';
  memset(entity_3, 'v', 82-1);
  entity_3[82-1]='';
  entity_3[entity_5] = 'T';
}