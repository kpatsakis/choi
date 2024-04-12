void fun()
{
  int entity_7 = 58;
  char entity_0[60] = "";
  entity_0 = NULL;
  char entity_3 = 'k';
  char* entity_5;
  memset(entity_0, 'n', 60-1);
  entity_0[60-1]='';
  entity_5 = (char*)malloc(entity_7*sizeof(char));
  entity_5[entity_7-1]='';
  strcpy(entity_5, entity_0);
}