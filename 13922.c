void fun()
{
  int entity_7 = 70;
  char* entity_9;
  char entity_2[entity_7] = "";
  entity_9 = (char*)malloc(27*sizeof(char));
  entity_9[0]='0';
  memset(entity_2, 'D', entity_7-1);
  entity_2[entity_7-1]='0';
  entity_7 = 30;
  memcpy(entity_9, entity_2, entity_7*sizeof(char));
}