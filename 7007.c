void fun()
{
  int entity_9 = 74;
  char entity_5[56] = "";
  entity_5 = NULL;
  char* entity_6;
  memset(entity_5, 'a', 56-1);
  entity_5[56-1]='';
  entity_6 = (char*)malloc(entity_9*sizeof(char));
  entity_6[entity_9-1]='';
  memcpy(entity_6, entity_5, 56*sizeof(char));
}