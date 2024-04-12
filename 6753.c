void fun()
{
  int entity_9 = 14;
  char entity_2[79] = "";
  entity_2 = NULL;
  char* entity_5;
  char entity_8[entity_9] = "";
  entity_8 = NULL;
  char entity_1 = 'k';
  memset(entity_2, 'X', 79-1);
  entity_2[79-1]='';
  entity_5 = (char*)malloc(8*sizeof(char));
  entity_5[8-1]='';
  memset(entity_8, 'm', entity_9-1);
  entity_8[entity_9-1]='';
  memcpy(entity_5, entity_8, entity_9*sizeof(char));
}