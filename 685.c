void fun()
{
  char* entity_0;
  char entity_9[17] = "";
  entity_9 = NULL;
  memset(entity_9, 'E', 17-1);
  entity_9[17-1]='';
  entity_0 = (char*)malloc(85*sizeof(char));
  entity_0[85-1]='';
  entity_9[35] = 'm';
}