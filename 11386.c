void fun()
{
  char* entity_2;
  char entity_3 = 'n';
  char entity_9[77] = "";
  char entity_4[14] = "";
  entity_2 = (char*)malloc(16*sizeof(char));
  entity_2[0]='0';
  memset(entity_4, 'U', 14-1);
  entity_4[14-1]='0';
  memset(entity_9, 'J', 77-1);
  entity_9[77-1]='0';
  strcpy(entity_2, entity_9);
}