void fun()
{
  int entity_6 = 2;
  entity_6 = 91;
  char entity_5[entity_6] = "";
  entity_5 = NULL;
  char* entity_0;
  memset(entity_5, 'H', entity_6-1);
  entity_5[entity_6-1]='';
  entity_0 = (char*)malloc(60*sizeof(char));
  entity_0[60-1]='';
  memcpy(entity_0, entity_5, entity_6*sizeof(char));
}