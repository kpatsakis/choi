void fun()
{
  int entity_1 = 26;
  int entity_4 = 23;
  char entity_0[entity_4] = "";
  entity_0 = NULL;
  char* entity_2;
  memset(entity_0, 'q', entity_4-1);
  entity_0[entity_4-1]='';
  entity_2 = (char*)malloc(81*sizeof(char));
  entity_2[81-1]='';
  strcpy(entity_2, entity_0);
}