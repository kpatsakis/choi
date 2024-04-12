void fun()
{
  char entity_1[74] = "";
  entity_1 = NULL;
  char entity_7[1] = "";
  entity_7 = NULL;
  char* entity_3;
  char entity_4[68] = "";
  entity_4 = NULL;
  memset(entity_7, 'Q', 1-1);
  entity_7[1-1]='';
  entity_3 = (char*)malloc(6*sizeof(char));
  entity_3[6-1]='';
  memset(entity_4, 'T', 68-1);
  entity_4[68-1]='';
  memset(entity_1, 'c', 74-1);
  entity_1[74-1]='';
  strcpy(entity_3, entity_4);
}