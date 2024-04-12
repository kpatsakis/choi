void fun()
{
  int entity_9 = 96;
  char entity_7[62] = "";
  entity_7 = NULL;
  char* entity_5;
  char entity_2 = 'c';
  entity_5 = (char*)malloc(entity_9*sizeof(char));
  entity_5[entity_9-1]='';
  memset(entity_7, 'J', 62-1);
  entity_7[62-1]='';
  entity_9 = 25;
  memcpy(entity_5, entity_7, 62*sizeof(char));
}