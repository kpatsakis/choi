void fun()
{
  int entity_3 = 40;
  char* entity_5;
  char entity_1[entity_3] = "";
  entity_1 = NULL;
  char entity_0 = 's';
  memset(entity_1, 'E', entity_3-1);
  entity_1[entity_3-1]='';
  entity_5 = (char*)malloc(18*sizeof(char));
  entity_5[18-1]='';
  strcpy(entity_5, entity_1);
}