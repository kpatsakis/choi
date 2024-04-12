void fun()
{
  char* entity_4;
  char entity_9[91] = "";
  entity_9 = NULL;
  memset(entity_9, 'z', 91-1);
  entity_9[91-1]='';
  entity_4 = (char*)malloc(60*sizeof(char));
  entity_4[60-1]='';
  entity_9[25] = 'V';
}