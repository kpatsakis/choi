void fun()
{
  char entity_8[57] = "";
  entity_8 = NULL;
  char* entity_5;
  char entity_6[74] = "";
  entity_6 = NULL;
  entity_5 = (char*)malloc(88*sizeof(char));
  entity_5[88-1]='';
  memset(entity_8, 'T', 57-1);
  entity_8[57-1]='';
  memset(entity_6, 'C', 74-1);
  entity_6[74-1]='';
  strcpy(entity_5, entity_8);
}