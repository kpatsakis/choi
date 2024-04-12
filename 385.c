void fun()
{
  int entity_5 = 80;
  int entity_7 = 10;
  char* entity_1;
  char entity_6[entity_5] = "";
  entity_6 = NULL;
  entity_1 = (char*)malloc(53*sizeof(char));
  entity_1[53-1]='';
  memset(entity_6, 'H', entity_5-1);
  entity_6[entity_5-1]='';
  strcpy(entity_1, entity_6);
}