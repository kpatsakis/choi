void fun()
{
  int entity_1 = 17;
  int entity_0 = 4;
  int entity_9 = 56;
  char* entity_5;
  char entity_4[61] = "";
  entity_4 = NULL;
  memset(entity_4, 'X', 61-1);
  entity_4[61-1]='';
  entity_5 = (char*)malloc(entity_1*sizeof(char));
  entity_5[entity_1-1]='';
  memcpy(entity_5, entity_4, 61*sizeof(char));
}