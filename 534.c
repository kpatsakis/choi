void fun()
{
  int entity_7 = 52;
  int entity_3 = 34;
  char entity_5[34] = "";
  entity_5 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(entity_7*sizeof(char));
  entity_1[entity_7-1]='';
  memset(entity_5, 'h', 34-1);
  entity_5[34-1]='';
  strcpy(entity_1, entity_5);
}