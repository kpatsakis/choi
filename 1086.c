void fun()
{
  int entity_0 = 95;
  char entity_1[86] = "";
  entity_1 = NULL;
  char* entity_4;
  memset(entity_1, 'O', 86-1);
  entity_1[86-1]='';
  entity_4 = (char*)malloc(entity_0*sizeof(char));
  entity_4[entity_0-1]='';
  entity_0 = 80;
  strcpy(entity_4, entity_1);
}