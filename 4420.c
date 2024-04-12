void fun()
{
  int entity_5 = 3;
  entity_5 = 84;
  char entity_9 = 'M';
  char* entity_3;
  char entity_0[13] = "";
  entity_0 = NULL;
  memset(entity_0, 'W', 13-1);
  entity_0[13-1]='';
  entity_3 = (char*)malloc(entity_5*sizeof(char));
  entity_3[entity_5-1]='';
  strcpy(entity_3, entity_0);
}