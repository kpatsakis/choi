void fun()
{
  int entity_5 = 82;
  char entity_6[entity_5] = "";
  entity_6 = NULL;
  char* entity_0;
  memset(entity_6, 'u', entity_5-1);
  entity_6[entity_5-1]='';
  entity_0 = (char*)malloc(43*sizeof(char));
  entity_0[43-1]='';
  entity_5 = 55;
  strcpy(entity_0, entity_6);
}