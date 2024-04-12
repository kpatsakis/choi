void fun()
{
  char* entity_3;
  char entity_9[36] = "";
  entity_9 = NULL;
  memset(entity_9, 'M', 36-1);
  entity_9[36-1]='';
  entity_3 = (char*)malloc(86*sizeof(char));
  entity_3[86-1]='';
  strcpy(entity_3, entity_9);
}