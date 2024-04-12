void fun()
{
  int entity_5 = 78;
  int entity_0 = 47;
  char* entity_1;
  char entity_3 = 'e';
  char entity_9 = 'w';
  char entity_7[entity_0] = "";
  entity_7 = NULL;
  memset(entity_7, 'X', entity_0-1);
  entity_7[entity_0-1]='';
  entity_1 = (char*)malloc(83*sizeof(char));
  entity_1[83-1]='';
  entity_0 = 75;
  strcpy(entity_1, entity_7);
}