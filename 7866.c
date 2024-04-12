void fun()
{
  char* entity_9;
  char entity_3[31] = "";
  entity_3 = NULL;
  memset(entity_3, 'D', 31-1);
  entity_3[31-1]='';
  entity_9 = (char*)malloc(75*sizeof(char));
  entity_9[75-1]='';
  strcpy(entity_9, entity_3);
}