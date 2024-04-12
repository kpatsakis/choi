void fun()
{
  int entity_8 = 60;
  int entity_5 = 70;
  entity_8 = 84;
  char entity_2[67] = "";
  entity_2 = NULL;
  memset(entity_2, 'N', 67-1);
  entity_2[67-1]='';
  entity_2[entity_8] = 'C';
}