void fun()
{
  int entity_4 = 88;
  char* entity_0;
  char entity_2[entity_4] = "";
  entity_2 = NULL;
  entity_0 = (char*)malloc(76*sizeof(char));
  entity_0[76-1]='';
  memset(entity_2, 'n', entity_4-1);
  entity_2[entity_4-1]='';
  entity_4 = 3;
  strcpy(entity_0, entity_2);
}