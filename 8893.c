void fun()
{
  int entity_2 = 78;
  char entity_0[entity_2] = "";
  entity_0 = NULL;
  char* entity_5;
  memset(entity_0, 'e', entity_2-1);
  entity_0[entity_2-1]='';
  entity_5 = (char*)malloc(32*sizeof(char));
  entity_5[32-1]='';
  entity_2 = 27;
  strcpy(entity_5, entity_0);
}