void fun()
{
  int entity_6 = 69;
  char entity_9[99] = "";
  entity_9 = NULL;
  char* entity_5;
  char entity_1 = 'C';
  char entity_7[entity_6] = "";
  entity_7 = NULL;
  memset(entity_9, 'R', 99-1);
  entity_9[99-1]='';
  entity_5 = (char*)malloc(71*sizeof(char));
  entity_5[71-1]='';
  memset(entity_7, 'q', entity_6-1);
  entity_7[entity_6-1]='';
  memcpy(entity_5, entity_7, entity_6*sizeof(char));
}