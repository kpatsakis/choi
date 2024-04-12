void fun()
{
  int entity_0 = 14;
  char* entity_5;
  char entity_3[53] = "";
  entity_3 = NULL;
  entity_5 = (char*)malloc(entity_0*sizeof(char));
  entity_5[entity_0-1]='';
  memset(entity_3, 'H', 53-1);
  entity_3[53-1]='';
  strcpy(entity_5, entity_3);
}