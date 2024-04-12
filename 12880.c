void fun()
{
  int entity_9 = 4;
  char* entity_2;
  char entity_3[entity_9] = "";
  entity_2 = (char*)malloc(100*sizeof(char));
  entity_2[0]='0';
  memset(entity_3, 'D', entity_9-1);
  entity_3[entity_9-1]='0';
  memcpy(entity_2, entity_3, entity_9*sizeof(char));
}