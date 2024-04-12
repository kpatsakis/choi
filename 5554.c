void fun()
{
  char entity_9[29] = "";
  entity_9 = NULL;
  char* entity_6;
  entity_6 = (char*)malloc(15*sizeof(char));
  entity_6[15-1]='';
  memset(entity_9, 'b', 29-1);
  entity_9[29-1]='';
  strcpy(entity_6, entity_9);
}