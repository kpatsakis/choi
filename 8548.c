void fun()
{
  char entity_4[75] = "";
  entity_4 = NULL;
  char* entity_9;
  char entity_3 = 'a';
  entity_9 = (char*)malloc(52*sizeof(char));
  entity_9[52-1]='';
  memset(entity_4, 'W', 75-1);
  entity_4[75-1]='';
  memcpy(entity_9, entity_4, 75*sizeof(char));
}