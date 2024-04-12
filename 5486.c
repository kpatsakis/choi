void fun()
{
  char* entity_4;
  char entity_6[9] = "";
  entity_6 = NULL;
  char entity_9 = 'H';
  memset(entity_6, 'Z', 9-1);
  entity_6[9-1]='';
  entity_4 = (char*)malloc(27*sizeof(char));
  entity_4[27-1]='';
  strcpy(entity_4, entity_6);
}