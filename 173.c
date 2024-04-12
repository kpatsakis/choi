void fun()
{
  char entity_5[82] = "";
  entity_5 = NULL;
  char entity_6[40] = "";
  entity_6 = NULL;
  char* entity_0;
  memset(entity_5, 'd', 82-1);
  entity_5[82-1]='';
  entity_0 = (char*)malloc(41*sizeof(char));
  entity_0[41-1]='';
  memset(entity_6, 'C', 40-1);
  entity_6[40-1]='';
  strcpy(entity_0, entity_6);
}