void fun()
{
  int entity_9 = 58;
  int entity_6 = 17;
  int entity_3 = 55;
  char* entity_7;
  char entity_1[40] = "";
  entity_1 = NULL;
  memset(entity_1, 'Q', 40-1);
  entity_1[40-1]='';
  entity_7 = (char*)malloc(entity_9*sizeof(char));
  entity_7[entity_9-1]='';
  strcpy(entity_7, entity_1);
}