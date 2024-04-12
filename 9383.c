void fun()
{
  int entity_5 = 55;
  char entity_8[entity_5] = "";
  entity_8 = NULL;
  char* entity_6;
  memset(entity_8, 'f', entity_5-1);
  entity_8[entity_5-1]='';
  entity_6 = (char*)malloc(32*sizeof(char));
  entity_6[32-1]='';
  entity_5 = 19;
  entity_8[67] = 'L';
}