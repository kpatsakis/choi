void fun()
{
  int entity_4 = 79;
  char entity_0 = 'z';
  char entity_9[entity_4] = "";
  entity_9 = NULL;
  char* entity_2;
  memset(entity_9, 'M', entity_4-1);
  entity_9[entity_4-1]='';
  entity_2 = (char*)malloc(18*sizeof(char));
  entity_2[18-1]='';
  memcpy(entity_2, entity_9, entity_4*sizeof(char));
}