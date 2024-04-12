void fun()
{
  int entity_5 = 17;
  char* entity_1;
  char entity_0[entity_5] = "";
  entity_0 = NULL;
  entity_1 = (char*)malloc(62*sizeof(char));
  entity_1[62-1]='';
  memset(entity_0, 'U', entity_5-1);
  entity_0[entity_5-1]='';
  strcpy(entity_1, entity_0);
}