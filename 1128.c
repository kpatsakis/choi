void fun()
{
  char entity_9[22] = "";
  entity_9 = NULL;
  char* entity_7;
  entity_7 = (char*)malloc(21*sizeof(char));
  entity_7[21-1]='';
  memset(entity_9, 'I', 22-1);
  entity_9[22-1]='';
  strcpy(entity_7, entity_9);
}