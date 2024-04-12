void fun()
{
  int entity_2 = 78;
  int entity_9 = 15;
  char entity_7[entity_2] = "";
  entity_7 = NULL;
  char entity_0 = 's';
  char* entity_4;
  entity_4 = (char*)malloc(96*sizeof(char));
  entity_4[96-1]='';
  memset(entity_7, 'L', entity_2-1);
  entity_7[entity_2-1]='';
  entity_2 = 8;
  memcpy(entity_4, entity_7, entity_2*sizeof(char));
}