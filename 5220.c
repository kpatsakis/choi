void fun()
{
  int entity_5 = 17;
  entity_5 = 17;
  char* entity_0;
  char entity_2[entity_5] = "";
  entity_2 = NULL;
  entity_0 = (char*)malloc(96*sizeof(char));
  entity_0[96-1]='';
  memset(entity_2, 'h', entity_5-1);
  entity_2[entity_5-1]='';
  strcpy(entity_0, entity_2);
}