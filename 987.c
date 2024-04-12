void fun()
{
  int entity_6 = 37;
  char entity_5[93] = "";
  entity_5 = NULL;
  char entity_3[20] = "";
  entity_3 = NULL;
  char* entity_1;
  memset(entity_3, 'f', 20-1);
  entity_3[20-1]='';
  entity_1 = (char*)malloc(entity_6*sizeof(char));
  entity_1[entity_6-1]='';
  memset(entity_5, 'k', 93-1);
  entity_5[93-1]='';
  strcpy(entity_1, entity_3);
}