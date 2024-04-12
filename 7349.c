void fun()
{
  int entity_6 = 21;
  char entity_4[entity_6] = "";
  entity_4 = NULL;
  char* entity_0;
  memset(entity_4, 'X', entity_6-1);
  entity_4[entity_6-1]='';
  entity_0 = (char*)malloc(100*sizeof(char));
  entity_0[100-1]='';
  entity_6 = 87;
  strcpy(entity_0, entity_4);
}