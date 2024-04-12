void fun()
{
  int entity_3 = 74;
  int entity_4 = 19;
  char entity_1[74] = "";
  entity_1 = NULL;
  char* entity_5;
  memset(entity_1, 'q', 74-1);
  entity_1[74-1]='';
  entity_5 = (char*)malloc(entity_4*sizeof(char));
  entity_5[entity_4-1]='';
  strcpy(entity_5, entity_1);
}