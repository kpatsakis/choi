void fun()
{
  int entity_8 = 7;
  char entity_0[72] = "";
  entity_0 = NULL;
  char entity_6[0] = "";
  entity_6 = NULL;
  char* entity_5;
  entity_5 = (char*)malloc(entity_8*sizeof(char));
  entity_5[entity_8-1]='';
  memset(entity_6, 'Z', 0-1);
  entity_6[0-1]='';
  memset(entity_0, 't', 72-1);
  entity_0[72-1]='';
  entity_8 = 50;
  strcpy(entity_5, entity_0);
}