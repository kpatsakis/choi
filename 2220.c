void fun()
{
  int entity_5 = 99;
  int entity_7 = 90;
  int entity_9 = 29;
  char entity_1[42] = "";
  entity_1 = NULL;
  char* entity_6;
  memset(entity_1, 'e', 42-1);
  entity_1[42-1]='';
  entity_6 = (char*)malloc(entity_5*sizeof(char));
  entity_6[entity_5-1]='';
  memcpy(entity_6, entity_1, 42*sizeof(char));
}