void fun()
{
  int entity_5 = 98;
  char entity_0[93] = "";
  entity_0 = NULL;
  char* entity_3;
  memset(entity_0, 'T', 93-1);
  entity_0[93-1]='';
  entity_3 = (char*)malloc(entity_5*sizeof(char));
  entity_3[entity_5-1]='';
  strcpy(entity_3, entity_0);
}