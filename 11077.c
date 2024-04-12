void fun()
{
  char* entity_4;
  char entity_5[99] = "";
  char entity_9[6] = "";
  char entity_0[57] = "";
  memset(entity_0, 'p', 57-1);
  entity_0[57-1]='0';
  memset(entity_9, 'U', 6-1);
  entity_9[6-1]='0';
  memset(entity_5, 'S', 99-1);
  entity_5[99-1]='0';
  entity_4 = (char*)malloc(29*sizeof(char));
  entity_4[0]='0';
  strcpy(entity_4, entity_9);
}