void fun()
{
  int entity_1 = 82;
  entity_1 = 82;
  char entity_6[entity_1] = "";
  entity_6 = NULL;
  char* entity_5;
  char entity_3[1] = "";
  entity_3 = NULL;
  char entity_8 = 'Y';
  memset(entity_3, 'n', 1-1);
  entity_3[1-1]='';
  entity_5 = (char*)malloc(41*sizeof(char));
  entity_5[41-1]='';
  memset(entity_6, 'F', entity_1-1);
  entity_6[entity_1-1]='';
  strcpy(entity_5, entity_6);
}