void fun()
{
  char entity_7 = 'B';
  char* entity_1;
  char entity_9[97] = "";
  entity_1 = (char*)malloc(43*sizeof(char));
  entity_1[0]='0';
  memset(entity_9, 'N', 97-1);
  entity_9[97-1]='0';
  strcpy(entity_1, entity_9);
}