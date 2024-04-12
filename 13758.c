void fun()
{
  int entity_6 = 65;
  entity_6 = 50;
  char entity_5[95] = "";
  char* entity_9;
  entity_9 = (char*)malloc(entity_6*sizeof(char));
  entity_9[0]='0';
  memset(entity_5, 'e', 95-1);
  entity_5[95-1]='0';
  memcpy(entity_9, entity_5, 95*sizeof(char));
}