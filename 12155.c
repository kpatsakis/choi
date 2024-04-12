void fun()
{
  int entity_1 = 94;
  char* entity_3;
  char entity_9[entity_1] = "";
  entity_3 = (char*)malloc(26*sizeof(char));
  entity_3[0]='0';
  memset(entity_9, 's', entity_1-1);
  entity_9[entity_1-1]='0';
  memcpy(entity_3, entity_9, entity_1*sizeof(char));
}