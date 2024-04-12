void fun()
{
  char* entity_1;
  char entity_9[16] = "";
  entity_9 = NULL;
  entity_1 = (char*)malloc(27*sizeof(char));
  entity_1[27-1]='';
  memset(entity_9, 'Z', 16-1);
  entity_9[16-1]='';
  strcpy(entity_1, entity_9);
}