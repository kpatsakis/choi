void fun()
{
  int entity_2 = 99;
  char* entity_4;
  char entity_9[53] = "";
  entity_9 = NULL;
  entity_4 = (char*)malloc(entity_2*sizeof(char));
  entity_4[entity_2-1]='';
  memset(entity_9, 'y', 53-1);
  entity_9[53-1]='';
  entity_2 = 48;
  memcpy(entity_4, entity_9, 53*sizeof(char));
}