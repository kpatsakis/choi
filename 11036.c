void fun()
{
  char* entity_9;
  char entity_5[35] = "";
  entity_9 = (char*)malloc(86*sizeof(char));
  entity_9[0]='0';
  memset(entity_5, 'V', 35-1);
  entity_5[35-1]='0';
  strcpy(entity_9, entity_5);
}