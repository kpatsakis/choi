void fun()
{
  char* entity_5;
  char entity_9[41] = "";
  entity_5 = (char*)malloc(39*sizeof(char));
  entity_5[0]='0';
  memset(entity_9, 'F', 41-1);
  entity_9[41-1]='0';
  strcpy(entity_5, entity_9);
}