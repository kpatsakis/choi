void fun()
{
  int entity_6 = 74;
  char entity_9[14] = "";
  entity_9 = NULL;
  char* entity_4;
  char* entity_7;
  entity_4 = (char*)malloc(entity_6*sizeof(char));
  entity_4[entity_6-1]='';
  entity_7 = (char*)malloc(72*sizeof(char));
  entity_7[72-1]='';
  memset(entity_9, 'h', 14-1);
  entity_9[14-1]='';
  entity_6 = 20;
  memcpy(entity_4, entity_9, 14*sizeof(char));
}