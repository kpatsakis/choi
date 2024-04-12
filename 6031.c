void fun()
{
  int entity_2 = 48;
  char entity_6 = 'i';
  char entity_3 = 't';
  char entity_7[2] = "";
  entity_7 = NULL;
  memset(entity_7, 'j', 2-1);
  entity_7[2-1]='';
  entity_7[entity_2] = 'L';
}