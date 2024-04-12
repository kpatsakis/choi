void fun()
{
  int entity_1 = 69;
  char entity_9[entity_1] = "";
  char* entity_5;
  memset(entity_9, 'o', entity_1-1);
  entity_9[entity_1-1]='0';
  entity_5 = (char*)malloc(45*sizeof(char));
  entity_5[0]='0';
  memcpy(entity_5, entity_9, entity_1*sizeof(char));
}