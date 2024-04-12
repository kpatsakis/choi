void fun()
{
  char* entity_9;
  char entity_6[66] = "";
  entity_6 = NULL;
  entity_9 = (char*)malloc(31*sizeof(char));
  entity_9[31-1]='';
  memset(entity_6, 'v', 66-1);
  entity_6[66-1]='';
  strcpy(entity_9, entity_6);
}