void fun()
{
  char entity_7[10] = "";
  entity_7 = NULL;
  char* entity_2;
  char entity_5[14] = "";
  entity_5 = NULL;
  entity_2 = (char*)malloc(76*sizeof(char));
  entity_2[76-1]='';
  memset(entity_5, 's', 14-1);
  entity_5[14-1]='';
  memset(entity_7, 'x', 10-1);
  entity_7[10-1]='';
  strcpy(entity_2, entity_7);
}