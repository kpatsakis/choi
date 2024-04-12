void fun()
{
  char* entity_9;
  char entity_4[52] = "";
  entity_4 = NULL;
  memset(entity_4, 'y', 52-1);
  entity_4[52-1]='';
  entity_9 = (char*)malloc(41*sizeof(char));
  entity_9[41-1]='';
  memcpy(entity_9, entity_4, 52*sizeof(char));
}