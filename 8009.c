void fun()
{
  char* entity_9;
  char entity_6[61] = "";
  entity_6 = NULL;
  entity_9 = (char*)malloc(96*sizeof(char));
  entity_9[96-1]='';
  memset(entity_6, 'y', 61-1);
  entity_6[61-1]='';
  strcpy(entity_9, entity_6);
}