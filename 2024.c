void fun()
{
  char entity_4[99] = "";
  entity_4 = NULL;
  char* entity_1;
  char entity_0[90] = "";
  entity_0 = NULL;
  memset(entity_0, 'H', 90-1);
  entity_0[90-1]='';
  entity_1 = (char*)malloc(95*sizeof(char));
  entity_1[95-1]='';
  memset(entity_4, 'w', 99-1);
  entity_4[99-1]='';
  strcpy(entity_1, entity_0);
}