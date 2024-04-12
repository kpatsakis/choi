void fun()
{
  int entity_9 = 40;
  char* entity_6;
  char entity_5[entity_9] = "";
  entity_6 = (char*)malloc(90*sizeof(char));
  entity_6[0]='0';
  memset(entity_5, 'g', entity_9-1);
  entity_5[entity_9-1]='0';
  memcpy(entity_6, entity_5, entity_9*sizeof(char));
}