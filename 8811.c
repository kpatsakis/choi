void fun()
{
  int entity_5 = 13;
  char* entity_2;
  char entity_9[43] = "";
  entity_9 = NULL;
  memset(entity_9, 'D', 43-1);
  entity_9[43-1]='';
  entity_2 = (char*)malloc(entity_5*sizeof(char));
  entity_2[entity_5-1]='';
  entity_5 = 95;
  memcpy(entity_2, entity_9, 43*sizeof(char));
}