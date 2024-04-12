void fun()
{
  int entity_5 = 5;
  entity_5 = 15;
  char* entity_4;
  char* entity_9;
  char entity_1[14] = "";
  entity_1 = NULL;
  entity_4 = (char*)malloc(86*sizeof(char));
  entity_4[86-1]='';
  memset(entity_1, 'e', 14-1);
  entity_1[14-1]='';
  entity_9 = (char*)malloc(entity_5*sizeof(char));
  entity_9[entity_5-1]='';
  memcpy(entity_9, entity_1, 14*sizeof(char));
}