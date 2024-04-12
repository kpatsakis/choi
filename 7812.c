void fun()
{
  int entity_6 = 94;
  char* entity_8;
  char entity_1 = 'e';
  char entity_9[14] = "";
  entity_9 = NULL;
  entity_8 = (char*)malloc(20*sizeof(char));
  entity_8[20-1]='';
  memset(entity_9, 'c', 14-1);
  entity_9[14-1]='';
  memcpy(entity_8, entity_9, 14*sizeof(char));
}