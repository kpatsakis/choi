void fun()
{
  int entity_5 = 35;
  char* entity_1;
  char entity_4[3] = "";
  entity_4 = NULL;
  memset(entity_4, 'p', 3-1);
  entity_4[3-1]='';
  entity_1 = (char*)malloc(entity_5*sizeof(char));
  entity_1[entity_5-1]='';
  strcpy(entity_1, entity_4);
}