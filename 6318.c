void fun()
{
  int entity_5 = 92;
  int entity_1 = 40;
  entity_5 = 15;
  char entity_7[25] = "";
  entity_7 = NULL;
  char* entity_4;
  entity_4 = (char*)malloc(entity_5*sizeof(char));
  entity_4[entity_5-1]='';
  memset(entity_7, 'U', 25-1);
  entity_7[25-1]='';
  strcpy(entity_4, entity_7);
}