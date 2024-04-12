void fun()
{
  int entity_8 = 34;
  char entity_1[14] = "";
  entity_1 = NULL;
  char* entity_5;
  memset(entity_1, 'R', 14-1);
  entity_1[14-1]='';
  entity_5 = (char*)malloc(entity_8*sizeof(char));
  entity_5[entity_8-1]='';
  strcpy(entity_5, entity_1);
}