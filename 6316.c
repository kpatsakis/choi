void fun()
{
  int entity_7 = 29;
  char entity_5[entity_7] = "";
  entity_5 = NULL;
  char* entity_0;
  memset(entity_5, 'Y', entity_7-1);
  entity_5[entity_7-1]='';
  entity_0 = (char*)malloc(10*sizeof(char));
  entity_0[10-1]='';
  entity_7 = 6;
  memcpy(entity_0, entity_5, entity_7*sizeof(char));
}