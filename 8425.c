void fun()
{
  int entity_9 = 80;
  char* entity_6;
  char entity_5[43] = "";
  entity_5 = NULL;
  entity_6 = (char*)malloc(entity_9*sizeof(char));
  entity_6[entity_9-1]='';
  memset(entity_5, 'a', 43-1);
  entity_5[43-1]='';
  memcpy(entity_6, entity_5, 43*sizeof(char));
}