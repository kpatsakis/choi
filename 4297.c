void fun()
{
  int entity_4 = 86;
  char entity_0[97] = "";
  entity_0 = NULL;
  char entity_9 = 'N';
  char* entity_6;
  memset(entity_0, 'S', 97-1);
  entity_0[97-1]='';
  entity_6 = (char*)malloc(59*sizeof(char));
  entity_6[59-1]='';
  strcpy(entity_6, entity_0);
}