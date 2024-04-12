void fun()
{
  int entity_4 = 93;
  entity_4 = 93;
  char entity_3[entity_4] = "";
  entity_3 = NULL;
  char* entity_0;
  memset(entity_3, 'T', entity_4-1);
  entity_3[entity_4-1]='';
  entity_0 = (char*)malloc(88*sizeof(char));
  entity_0[88-1]='';
  strcpy(entity_0, entity_3);
}