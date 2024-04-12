void fun()
{
  int entity_1 = 44;
  int entity_9 = 61;
  char entity_5[entity_9] = "";
  char entity_3 = 'k';
  char* entity_4;
  memset(entity_5, 'p', entity_9-1);
  entity_5[entity_9-1]='0';
  entity_4 = (char*)malloc(56*sizeof(char));
  entity_4[0]='0';
  entity_9 = 46;
  memcpy(entity_4, entity_5, entity_9*sizeof(char));
}