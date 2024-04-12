void fun()
{
  int entity_3 = 19;
  int entity_6 = 68;
  char entity_4[76] = "";
  entity_4 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(entity_3*sizeof(char));
  entity_0[entity_3-1]='';
  memset(entity_4, 'W', 76-1);
  entity_4[76-1]='';
  strcpy(entity_0, entity_4);
}