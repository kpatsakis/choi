void fun()
{
  char entity_0[23] = "";
  char* entity_9;
  entity_9 = (char*)malloc(13*sizeof(char));
  entity_9[0]='0';
  memset(entity_0, 'M', 23-1);
  entity_0[23-1]='0';
  strcpy(entity_9, entity_0);
}