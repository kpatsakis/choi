void fun()
{
  int entity_7 = 59;
  int entity_5 = 32;
  char* entity_1;
  char entity_9[entity_5] = "";
  entity_9 = NULL;
  char entity_8 = 'C';
  memset(entity_9, 'f', entity_5-1);
  entity_9[entity_5-1]='';
  entity_1 = (char*)malloc(4*sizeof(char));
  entity_1[4-1]='';
  memcpy(entity_1, entity_9, entity_5*sizeof(char));
}