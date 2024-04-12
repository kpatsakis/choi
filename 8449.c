void fun()
{
  char entity_9[98] = "";
  entity_9 = NULL;
  char entity_1 = 'W';
  char* entity_2;
  entity_2 = (char*)malloc(31*sizeof(char));
  entity_2[31-1]='';
  memset(entity_9, 'D', 98-1);
  entity_9[98-1]='';
  strcpy(entity_2, entity_9);
}