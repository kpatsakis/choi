void fun()
{
  char entity_2 = 'v';
  char entity_0[60] = "";
  entity_0 = NULL;
  char* entity_9;
  entity_9 = (char*)malloc(71*sizeof(char));
  entity_9[71-1]='';
  memset(entity_0, 'Q', 60-1);
  entity_0[60-1]='';
  strcpy(entity_9, entity_0);
}