void fun()
{
  char entity_3[73] = "";
  char entity_0 = 'm';
  char* entity_6;
  char entity_5 = 'K';
  memset(entity_3, 'm', 73-1);
  entity_3[73-1]='0';
  entity_6 = (char*)malloc(87*sizeof(char));
  entity_6[0]='0';
  strcpy(entity_6, entity_3);
}