void fun()
{
  int entity_3 = 100;
  int entity_5 = 58;
  char entity_0[entity_3] = "";
  entity_0 = NULL;
  char* entity_6;
  memset(entity_0, 't', entity_3-1);
  entity_0[entity_3-1]='';
  entity_6 = (char*)malloc(58*sizeof(char));
  entity_6[58-1]='';
  strcpy(entity_6, entity_0);
}