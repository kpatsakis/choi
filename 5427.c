void fun()
{
  char* entity_0;
  char entity_9[52] = "";
  entity_9 = NULL;
  entity_0 = (char*)malloc(30*sizeof(char));
  entity_0[30-1]='';
  memset(entity_9, 'N', 52-1);
  entity_9[52-1]='';
  memcpy(entity_0, entity_9, 52*sizeof(char));
}