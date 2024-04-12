void fun()
{
  char* entity_6;
  char entity_9[65] = "";
  entity_9 = NULL;
  entity_6 = (char*)malloc(98*sizeof(char));
  entity_6[98-1]='';
  memset(entity_9, 'p', 65-1);
  entity_9[65-1]='';
  entity_9[73] = 'F';
}