void fun()
{
  int entity_4 = 21;
  entity_4 = 87;
  char entity_8[entity_4] = "";
  entity_8 = NULL;
  memset(entity_8, 'V', entity_4-1);
  entity_8[entity_4-1]='';
  entity_8[78] = 'L';
}