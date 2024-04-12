void fun()
{
  char entity_9[18] = "";
  entity_9 = NULL;
  char* entity_1;
  memset(entity_9, 'x', 18-1);
  entity_9[18-1]='';
  entity_1 = (char*)malloc(80*sizeof(char));
  entity_1[80-1]='';
  entity_9[44] = 'u';
}