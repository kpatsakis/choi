void fun()
{
  char* entity_6;
  char entity_9[89] = "";
  entity_9 = NULL;
  memset(entity_9, 'i', 89-1);
  entity_9[89-1]='';
  entity_6 = (char*)malloc(31*sizeof(char));
  entity_6[31-1]='';
  memcpy(entity_6, entity_9, 89*sizeof(char));
}