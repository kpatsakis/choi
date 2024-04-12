void fun()
{
  int entity_4 = 18;
  int entity_2 = 97;
  int entity_5 = 71;
  char entity_9[61] = "";
  entity_9 = NULL;
  char* entity_6;
  entity_6 = (char*)malloc(entity_5*sizeof(char));
  entity_6[entity_5-1]='';
  memset(entity_9, 'w', 61-1);
  entity_9[61-1]='';
  memcpy(entity_6, entity_9, 61*sizeof(char));
}