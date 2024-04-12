void fun()
{
  int entity_3 = 67;
  char entity_2[92] = "";
  entity_2 = NULL;
  char entity_6 = 'u';
  memset(entity_2, 'y', 92-1);
  entity_2[92-1]='';
  entity_2[entity_3] = 'L';
}