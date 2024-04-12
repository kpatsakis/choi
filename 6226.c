void fun()
{
  int entity_3 = 5;
  char entity_6[entity_3] = "";
  entity_6 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(5*sizeof(char));
  entity_0[5-1]='';
  memset(entity_6, 'h', entity_3-1);
  entity_6[entity_3-1]='';
  strcpy(entity_0, entity_6);
}