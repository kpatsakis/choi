void fun()
{
  int entity_3 = 80;
  char* entity_4;
  char entity_9[18] = "";
  entity_9 = NULL;
  char* entity_6;
  entity_4 = (char*)malloc(entity_3*sizeof(char));
  entity_4[entity_3-1]='';
  memset(entity_9, 'P', 18-1);
  entity_9[18-1]='';
  entity_6 = (char*)malloc(10*sizeof(char));
  entity_6[10-1]='';
  entity_3 = 39;
  memcpy(entity_4, entity_9, 18*sizeof(char));
}