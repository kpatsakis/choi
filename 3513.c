void fun()
{
  char* entity_9;
  char entity_3[28] = "";
  entity_3 = NULL;
  char* entity_4;
  memset(entity_3, 'E', 28-1);
  entity_3[28-1]='';
  entity_9 = (char*)malloc(72*sizeof(char));
  entity_9[72-1]='';
  entity_4 = (char*)malloc(52*sizeof(char));
  entity_4[52-1]='';
  memcpy(entity_9, entity_3, 28*sizeof(char));
}