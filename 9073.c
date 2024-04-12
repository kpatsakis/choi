void fun()
{
  int entity_3 = 70;
  char* entity_4;
  char entity_0[entity_3] = "";
  entity_0 = NULL;
  memset(entity_0, 'n', entity_3-1);
  entity_0[entity_3-1]='';
  entity_4 = (char*)malloc(31*sizeof(char));
  entity_4[31-1]='';
  strcpy(entity_4, entity_0);
}