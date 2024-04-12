void fun()
{
  int entity_4 = 40;
  char entity_1[72] = "";
  entity_1 = NULL;
  char* entity_3;
  memset(entity_1, 'H', 72-1);
  entity_1[72-1]='';
  entity_3 = (char*)malloc(entity_4*sizeof(char));
  entity_3[entity_4-1]='';
  entity_4 = 59;
  strcpy(entity_3, entity_1);
}