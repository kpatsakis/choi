void fun()
{
  int entity_9 = 16;
  char* entity_8;
  char* entity_2;
  char entity_3[entity_9] = "";
  entity_2 = (char*)malloc(10*sizeof(char));
  entity_2[0]='0';
  entity_8 = (char*)malloc(16*sizeof(char));
  entity_8[0]='0';
  memset(entity_3, 'a', entity_9-1);
  entity_3[entity_9-1]='0';
  memcpy(entity_8, entity_3, entity_9*sizeof(char));
}