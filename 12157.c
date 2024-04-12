void fun()
{
  int entity_1 = 39;
  int entity_6 = 24;
  char entity_9[95] = "";
  char* entity_5;
  entity_5 = (char*)malloc(entity_1*sizeof(char));
  entity_5[0]='0';
  memset(entity_9, 'Q', 95-1);
  entity_9[95-1]='0';
  memcpy(entity_5, entity_9, 95*sizeof(char));
}