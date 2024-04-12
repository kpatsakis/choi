void fun()
{
  int entity_7 = 16;
  char* entity_0;
  char entity_5[entity_7] = "";
  entity_5 = NULL;
  memset(entity_5, 'Z', entity_7-1);
  entity_5[entity_7-1]='';
  entity_0 = (char*)malloc(7*sizeof(char));
  entity_0[7-1]='';
  strcpy(entity_0, entity_5);
}