void fun()
{
  int entity_3 = 63;
  entity_3 = 86;
  char* entity_4;
  char entity_9[entity_3] = "";
  entity_9 = NULL;
  entity_4 = (char*)malloc(67*sizeof(char));
  entity_4[67-1]='';
  memset(entity_9, 'n', entity_3-1);
  entity_9[entity_3-1]='';
  entity_9[54] = 'L';
}