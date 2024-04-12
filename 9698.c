void fun()
{
  int entity_8 = 35;
  int entity_2 = 24;
  char* entity_5;
  char entity_1[76] = "";
  entity_1 = NULL;
  entity_5 = (char*)malloc(entity_8*sizeof(char));
  entity_5[entity_8-1]='';
  memset(entity_1, 'R', 76-1);
  entity_1[76-1]='';
  strcpy(entity_5, entity_1);
}