void fun()
{
  int entity_1 = 97;
  char entity_3[57] = "";
  entity_3 = NULL;
  memset(entity_3, 'r', 57-1);
  entity_3[57-1]='';
  entity_3[entity_1] = 'N';
}