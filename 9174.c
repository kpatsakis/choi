void fun()
{
  int entity_7 = 46;
  int entity_6 = 19;
  char* entity_5;
  char entity_1[88] = "";
  entity_1 = NULL;
  memset(entity_1, 'g', 88-1);
  entity_1[88-1]='';
  entity_5 = (char*)malloc(entity_7*sizeof(char));
  entity_5[entity_7-1]='';
  strcpy(entity_5, entity_1);
}