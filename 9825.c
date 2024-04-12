void fun()
{
  int entity_3 = 99;
  int entity_5 = 98;
  int entity_4 = 4;
  entity_5 = 98;
  char entity_8[entity_5] = "";
  entity_8 = NULL;
  char* entity_9;
  entity_9 = (char*)malloc(94*sizeof(char));
  entity_9[94-1]='';
  memset(entity_8, 'J', entity_5-1);
  entity_8[entity_5-1]='';
  strcpy(entity_9, entity_8);
}