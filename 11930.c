void fun()
{
  char entity_0[6] = "";
  char* entity_3;
  char entity_6[29] = "";
  memset(entity_6, 'T', 29-1);
  entity_6[29-1]='0';
  memset(entity_0, 'P', 6-1);
  entity_0[6-1]='0';
  entity_3 = (char*)malloc(14*sizeof(char));
  entity_3[0]='0';
  strcpy(entity_3, entity_0);
}