void fun()
{
  int entity_1 = 63;
  char* entity_4;
  char entity_0[24] = "";
  entity_0 = NULL;
  memset(entity_0, 'q', 24-1);
  entity_0[24-1]='';
  entity_4 = (char*)malloc(entity_1*sizeof(char));
  entity_4[entity_1-1]='';
  entity_1 = 49;
  strcpy(entity_4, entity_0);
}