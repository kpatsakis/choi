void fun()
{
  int entity_0 = 30;
  char entity_4[entity_0] = "";
  entity_4 = NULL;
  char* entity_6;
  memset(entity_4, 'z', entity_0-1);
  entity_4[entity_0-1]='';
  entity_6 = (char*)malloc(19*sizeof(char));
  entity_6[19-1]='';
  entity_4[33] = 'L';
}