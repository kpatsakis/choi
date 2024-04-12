void fun()
{
  int entity_4 = 59;
  char entity_7[entity_4] = "";
  char* entity_1;
  char entity_9 = 'g';
  entity_1 = (char*)malloc(4*sizeof(char));
  entity_1[0]='0';
  memset(entity_7, 'Z', entity_4-1);
  entity_7[entity_4-1]='0';
  entity_4 = 33;
  memcpy(entity_1, entity_7, entity_4*sizeof(char));
}