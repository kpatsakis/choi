void fun()
{
  int entity_0 = 99;
  entity_0 = 99;
  char* entity_5;
  char entity_3[entity_0] = "";
  entity_3 = NULL;
  memset(entity_3, 'Z', entity_0-1);
  entity_3[entity_0-1]='';
  entity_5 = (char*)malloc(53*sizeof(char));
  entity_5[53-1]='';
  strcpy(entity_5, entity_3);
}