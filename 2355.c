void fun()
{
  int entity_8 = 46;
  char entity_6[16] = "";
  entity_6 = NULL;
  char entity_1[26] = "";
  entity_1 = NULL;
  memset(entity_6, 'x', 16-1);
  entity_6[16-1]='';
  memset(entity_1, 'k', 26-1);
  entity_1[26-1]='';
  entity_8 = 82;
  entity_1[entity_8] = 'v';
}