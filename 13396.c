void fun()
{
  int entity_6 = 56;
  entity_6 = 94;
  char entity_9 = 'P';
  char entity_5[60] = "";
  char* entity_4;
  entity_4 = (char*)malloc(entity_6*sizeof(char));
  entity_4[0]='0';
  memset(entity_5, 'S', 60-1);
  entity_5[60-1]='0';
  memcpy(entity_4, entity_5, 60*sizeof(char));
}