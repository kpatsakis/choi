void fun()
{
  char entity_5[61] = "";
  char* entity_9;
  char entity_7 = 'o';
  entity_9 = (char*)malloc(22*sizeof(char));
  entity_9[0]='0';
  memset(entity_5, 'm', 61-1);
  entity_5[61-1]='0';
  strcpy(entity_9, entity_5);
}