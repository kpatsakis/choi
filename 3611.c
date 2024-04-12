void fun()
{
  int entity_5 = 40;
  char* entity_7;
  char entity_2[1] = "";
  entity_2 = NULL;
  char* entity_6;
  char entity_9[entity_5] = "";
  entity_9 = NULL;
  entity_6 = (char*)malloc(78*sizeof(char));
  entity_6[78-1]='';
  entity_7 = (char*)malloc(28*sizeof(char));
  entity_7[28-1]='';
  memset(entity_2, 'h', 1-1);
  entity_2[1-1]='';
  memset(entity_9, 'r', entity_5-1);
  entity_9[entity_5-1]='';
  strcpy(entity_6, entity_9);
}