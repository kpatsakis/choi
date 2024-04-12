void fun()
{
  int entity_1 = 97;
  char entity_3[entity_1] = "";
  entity_3 = NULL;
  char entity_6 = 'z';
  char entity_9 = 'f';
  char entity_0 = 'y';
  memset(entity_3, 'h', entity_1-1);
  entity_3[entity_1-1]='';
  entity_3[85] = 'k';
}