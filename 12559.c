void fun()
{
  int entity_5 = 27;
  char* entity_3;
  char entity_2[entity_5] = "";
  char* entity_9;
  entity_9 = (char*)malloc(72*sizeof(char));
  entity_9[0]='0';
  entity_3 = (char*)malloc(65*sizeof(char));
  entity_3[0]='0';
  memset(entity_2, 'M', entity_5-1);
  entity_2[entity_5-1]='0';
  memcpy(entity_9, entity_2, entity_5*sizeof(char));
}