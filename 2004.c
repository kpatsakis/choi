void fun()
{
  int entity_4 = 5;
  char* entity_2;
  char entity_0[86] = "";
  entity_0 = NULL;
  memset(entity_0, 'j', 86-1);
  entity_0[86-1]='';
  entity_2 = (char*)malloc(entity_4*sizeof(char));
  entity_2[entity_4-1]='';
  entity_4 = 14;
  strcpy(entity_2, entity_0);
}