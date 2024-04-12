void fun()
{
  int entity_0 = 13;
  char entity_5[entity_0] = "";
  entity_5 = NULL;
  char* entity_7;
  memset(entity_5, 'P', entity_0-1);
  entity_5[entity_0-1]='';
  entity_7 = (char*)malloc(85*sizeof(char));
  entity_7[85-1]='';
  entity_0 = 19;
  memcpy(entity_7, entity_5, entity_0*sizeof(char));
}