void fun()
{
  int entity_2 = 99;
  char entity_6[entity_2] = "";
  entity_6 = NULL;
  char* entity_0;
  memset(entity_6, 'x', entity_2-1);
  entity_6[entity_2-1]='';
  entity_0 = (char*)malloc(79*sizeof(char));
  entity_0[79-1]='';
  strcpy(entity_0, entity_6);
}