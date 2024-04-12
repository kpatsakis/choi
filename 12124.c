void fun()
{
  int entity_9 = 59;
  char* entity_5;
  char entity_8[entity_9] = "";
  memset(entity_8, 'P', entity_9-1);
  entity_8[entity_9-1]='0';
  entity_5 = (char*)malloc(60*sizeof(char));
  entity_5[0]='0';
  strcpy(entity_5, entity_8);
}