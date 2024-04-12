void fun()
{
  int entity_8 = 78;
  char entity_7 = 'm';
  char* entity_5;
  char entity_9[entity_8] = "";
  char* entity_6;
  entity_6 = (char*)malloc(60*sizeof(char));
  entity_6[0]='0';
  memset(entity_9, 'j', entity_8-1);
  entity_9[entity_8-1]='0';
  entity_5 = (char*)malloc(5*sizeof(char));
  entity_5[0]='0';
  memcpy(entity_5, entity_9, entity_8*sizeof(char));
}