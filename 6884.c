void fun()
{
  int entity_0 = 99;
  char* entity_9;
  char* entity_6;
  char entity_4[entity_0] = "";
  entity_4 = NULL;
  memset(entity_4, 'W', entity_0-1);
  entity_4[entity_0-1]='';
  entity_6 = (char*)malloc(8*sizeof(char));
  entity_6[8-1]='';
  entity_9 = (char*)malloc(62*sizeof(char));
  entity_9[62-1]='';
  memcpy(entity_9, entity_4, entity_0*sizeof(char));
}