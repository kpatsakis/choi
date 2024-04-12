void fun()
{
  char entity_8[10] = "";
  entity_8 = NULL;
  char* entity_7;
  char* entity_5;
  char entity_2[45] = "";
  entity_2 = NULL;
  memset(entity_8, 'x', 10-1);
  entity_8[10-1]='';
  memset(entity_2, 'u', 45-1);
  entity_2[45-1]='';
  entity_7 = (char*)malloc(95*sizeof(char));
  entity_7[95-1]='';
  entity_5 = (char*)malloc(21*sizeof(char));
  entity_5[21-1]='';
  strcpy(entity_5, entity_2);
}