void fun()
{
  char* entity_7;
  char entity_9[86] = "";
  entity_9 = NULL;
  memset(entity_9, 'G', 86-1);
  entity_9[86-1]='';
  entity_7 = (char*)malloc(22*sizeof(char));
  entity_7[22-1]='';
  memcpy(entity_7, entity_9, 86*sizeof(char));
}