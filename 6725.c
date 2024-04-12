void fun()
{
  char* entity_3;
  char entity_9[88] = "";
  entity_9 = NULL;
  char entity_6[6] = "";
  entity_6 = NULL;
  char entity_5[61] = "";
  entity_5 = NULL;
  entity_3 = (char*)malloc(79*sizeof(char));
  entity_3[79-1]='';
  memset(entity_9, 'I', 88-1);
  entity_9[88-1]='';
  memset(entity_6, 'g', 6-1);
  entity_6[6-1]='';
  memset(entity_5, 'Y', 61-1);
  entity_5[61-1]='';
  strcpy(entity_3, entity_6);
}