void fun()
{
  char* entity_3;
  char entity_9[89] = "";
  entity_9 = NULL;
  memset(entity_9, 'q', 89-1);
  entity_9[89-1]='';
  entity_3 = (char*)malloc(39*sizeof(char));
  entity_3[39-1]='';
  memcpy(entity_3, entity_9, 89*sizeof(char));
}