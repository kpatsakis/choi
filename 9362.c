void fun()
{
  int entity_5 = 49;
  int entity_9 = 89;
  entity_5 = 97;
  char entity_6 = 'I';
  char entity_0[6] = "";
  entity_0 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(entity_5*sizeof(char));
  entity_3[entity_5-1]='';
  memset(entity_0, 'H', 6-1);
  entity_0[6-1]='';
  strcpy(entity_3, entity_0);
}