void fun()
{
  int entity_7 = 91;
  int entity_2 = 10;
  int entity_4 = 31;
  char entity_0[entity_7] = "";
  entity_0 = NULL;
  char* entity_9;
  memset(entity_0, 'l', entity_7-1);
  entity_0[entity_7-1]='';
  entity_9 = (char*)malloc(72*sizeof(char));
  entity_9[72-1]='';
  strcpy(entity_9, entity_0);
}