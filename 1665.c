void fun()
{
  int entity_1 = 78;
  char entity_2[entity_1] = "";
  entity_2 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(46*sizeof(char));
  entity_0[46-1]='';
  memset(entity_2, 'w', entity_1-1);
  entity_2[entity_1-1]='';
  strcpy(entity_0, entity_2);
}