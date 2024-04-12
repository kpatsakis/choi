void fun()
{
  int entity_1 = 3;
  char entity_3[entity_1] = "";
  char* entity_5;
  memset(entity_3, 'v', entity_1-1);
  entity_3[entity_1-1]='0';
  entity_5 = (char*)malloc(6*sizeof(char));
  entity_5[0]='0';
  memcpy(entity_5, entity_3, entity_1*sizeof(char));
}