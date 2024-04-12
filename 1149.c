void fun()
{
  int entity_5 = 56;
  char entity_0[entity_5] = "";
  entity_0 = NULL;
  char* entity_6;
  char entity_3 = 'n';
  entity_6 = (char*)malloc(53*sizeof(char));
  entity_6[53-1]='';
  memset(entity_0, 'i', entity_5-1);
  entity_0[entity_5-1]='';
  entity_5 = 10;
  strcpy(entity_6, entity_0);
}