void fun()
{
  int entity_8 = 36;
  char* entity_0;
  char entity_2[entity_8] = "";
  entity_2 = NULL;
  memset(entity_2, 'x', entity_8-1);
  entity_2[entity_8-1]='';
  entity_0 = (char*)malloc(86*sizeof(char));
  entity_0[86-1]='';
  strcpy(entity_0, entity_2);
}