void fun()
{
  int entity_6 = 56;
  entity_6 = 31;
  char entity_5[entity_6] = "";
  char* entity_1;
  entity_1 = (char*)malloc(14*sizeof(char));
  entity_1[0]='0';
  memset(entity_5, 'W', entity_6-1);
  entity_5[entity_6-1]='0';
  memcpy(entity_1, entity_5, entity_6*sizeof(char));
}