void fun()
{
  char entity_1[18] = "";
  char* entity_9;
  char entity_5 = 'i';
  memset(entity_1, 'w', 18-1);
  entity_1[18-1]='0';
  entity_9 = (char*)malloc(60*sizeof(char));
  entity_9[0]='0';
  strcpy(entity_9, entity_1);
}