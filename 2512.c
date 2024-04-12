void fun()
{
  int entity_7 = 20;
  char* entity_5;
  char entity_2 = 'f';
  char entity_0[79] = "";
  entity_0 = NULL;
  memset(entity_0, 'v', 79-1);
  entity_0[79-1]='';
  entity_5 = (char*)malloc(entity_7*sizeof(char));
  entity_5[entity_7-1]='';
  entity_7 = 38;
  strcpy(entity_5, entity_0);
}