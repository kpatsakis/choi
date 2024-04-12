void fun()
{
  int entity_5 = 12;
  entity_5 = 67;
  char* entity_1;
  char entity_4[24] = "";
  entity_4 = NULL;
  memset(entity_4, 'P', 24-1);
  entity_4[24-1]='';
  entity_1 = (char*)malloc(entity_5*sizeof(char));
  entity_1[entity_5-1]='';
  strcpy(entity_1, entity_4);
}