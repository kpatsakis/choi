void fun()
{
  int entity_8 = 90;
  char entity_5[82] = "";
  entity_5 = NULL;
  memset(entity_5, 'B', 82-1);
  entity_5[82-1]='';
  entity_5[95] = 'Z';
}