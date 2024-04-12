void fun()
{
  char entity_9[18] = "";
  entity_9 = NULL;
  char* entity_5;
  char entity_4[83] = "";
  entity_4 = NULL;
  memset(entity_4, 'p', 83-1);
  entity_4[83-1]='';
  entity_5 = (char*)malloc(44*sizeof(char));
  entity_5[44-1]='';
  memset(entity_9, 'W', 18-1);
  entity_9[18-1]='';
  entity_9[61] = 't';
}