void fun()
{
  int entity_5 = 37;
  char* entity_3;
  char entity_0[75] = "";
  entity_0 = NULL;
  memset(entity_0, 'J', 75-1);
  entity_0[75-1]='';
  entity_3 = (char*)malloc(entity_5*sizeof(char));
  entity_3[entity_5-1]='';
  strcpy(entity_3, entity_0);
}