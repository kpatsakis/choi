void fun()
{
  int entity_8 = 71;
  entity_8 = 85;
  char entity_0[entity_8] = "";
  entity_0 = NULL;
  char entity_4 = 'E';
  char* entity_5;
  entity_5 = (char*)malloc(30*sizeof(char));
  entity_5[30-1]='';
  memset(entity_0, 'q', entity_8-1);
  entity_0[entity_8-1]='';
  memcpy(entity_5, entity_0, entity_8*sizeof(char));
}