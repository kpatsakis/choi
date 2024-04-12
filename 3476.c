void fun()
{
  int entity_4 = 90;
  char entity_2[entity_4] = "";
  entity_2 = NULL;
  char* entity_0;
  memset(entity_2, 'i', entity_4-1);
  entity_2[entity_4-1]='';
  entity_0 = (char*)malloc(32*sizeof(char));
  entity_0[32-1]='';
  entity_4 = 39;
  strcpy(entity_0, entity_2);
}