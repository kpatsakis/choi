void fun()
{
  int entity_7 = 25;
  int entity_2 = 36;
  int entity_6 = 42;
  char entity_4[74] = "";
  entity_4 = NULL;
  char* entity_3;
  memset(entity_4, 'P', 74-1);
  entity_4[74-1]='';
  entity_3 = (char*)malloc(entity_6*sizeof(char));
  entity_3[entity_6-1]='';
  strcpy(entity_3, entity_4);
}