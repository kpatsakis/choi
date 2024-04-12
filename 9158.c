void fun()
{
  int entity_1 = 73;
  entity_1 = 95;
  char entity_5[68] = "";
  entity_5 = NULL;
  char* entity_4;
  char entity_3[32] = "";
  entity_3 = NULL;
  entity_4 = (char*)malloc(entity_1*sizeof(char));
  entity_4[entity_1-1]='';
  memset(entity_3, 'O', 32-1);
  entity_3[32-1]='';
  memset(entity_5, 'k', 68-1);
  entity_5[68-1]='';
  strcpy(entity_4, entity_3);
}