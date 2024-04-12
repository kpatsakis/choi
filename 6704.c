void fun()
{
  int entity_6 = 34;
  int entity_2 = 45;
  char* entity_1;
  char entity_3[25] = "";
  entity_3 = NULL;
  entity_1 = (char*)malloc(entity_6*sizeof(char));
  entity_1[entity_6-1]='';
  memset(entity_3, 'm', 25-1);
  entity_3[25-1]='';
  entity_6 = 11;
  strcpy(entity_1, entity_3);
}