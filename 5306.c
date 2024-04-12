void fun()
{
  int entity_4 = 31;
  char entity_7 = 'K';
  char entity_6[74] = "";
  entity_6 = NULL;
  char entity_3[10] = "";
  entity_3 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(entity_4*sizeof(char));
  entity_1[entity_4-1]='';
  memset(entity_6, 'P', 74-1);
  entity_6[74-1]='';
  memset(entity_3, 'Y', 10-1);
  entity_3[10-1]='';
  entity_4 = 42;
  strcpy(entity_1, entity_3);
}