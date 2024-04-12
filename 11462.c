void fun()
{
  char entity_6[21] = "";
  char* entity_2;
  char* entity_9;
  memset(entity_6, 'x', 21-1);
  entity_6[21-1]='0';
  entity_2 = (char*)malloc(24*sizeof(char));
  entity_2[0]='0';
  entity_9 = (char*)malloc(39*sizeof(char));
  entity_9[0]='0';
  strcpy(entity_9, entity_6);
}