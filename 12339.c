void fun()
{
  int entity_6 = 56;
  char* entity_7;
  char entity_9[entity_6] = "";
  memset(entity_9, 'M', entity_6-1);
  entity_9[entity_6-1]='0';
  entity_7 = (char*)malloc(81*sizeof(char));
  entity_7[0]='0';
  memcpy(entity_7, entity_9, entity_6*sizeof(char));
}