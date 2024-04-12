void fun()
{
  int entity_4 = 90;
  char entity_9[entity_4] = "";
  char* entity_7;
  char* entity_3;
  entity_7 = (char*)malloc(20*sizeof(char));
  entity_7[0]='0';
  entity_3 = (char*)malloc(42*sizeof(char));
  entity_3[0]='0';
  memset(entity_9, 'M', entity_4-1);
  entity_9[entity_4-1]='0';
  memcpy(entity_7, entity_9, entity_4*sizeof(char));
}