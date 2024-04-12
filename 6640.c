void fun()
{
  char entity_3[86] = "";
  entity_3 = NULL;
  char* entity_9;
  memset(entity_3, 'y', 86-1);
  entity_3[86-1]='';
  entity_9 = (char*)malloc(51*sizeof(char));
  entity_9[51-1]='';
  memcpy(entity_9, entity_3, 86*sizeof(char));
}