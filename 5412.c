void fun()
{
  char* entity_9;
  char entity_6[19] = "";
  entity_6 = NULL;
  entity_9 = (char*)malloc(18*sizeof(char));
  entity_9[18-1]='';
  memset(entity_6, 'c', 19-1);
  entity_6[19-1]='';
  memcpy(entity_9, entity_6, 19*sizeof(char));
}