void fun()
{
  char entity_3[40] = "";
  entity_3 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(95*sizeof(char));
  entity_0[95-1]='';
  memset(entity_3, 'H', 40-1);
  entity_3[40-1]='';
  strcpy(entity_0, entity_3);
}