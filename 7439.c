void fun()
{
  int entity_5 = 24;
  int entity_2 = 67;
  char* entity_1;
  char entity_9[56] = "";
  entity_9 = NULL;
  entity_1 = (char*)malloc(entity_5*sizeof(char));
  entity_1[entity_5-1]='';
  memset(entity_9, 'g', 56-1);
  entity_9[56-1]='';
  entity_5 = 17;
  memcpy(entity_1, entity_9, 56*sizeof(char));
}