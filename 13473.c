void fun()
{
  int entity_7 = 37;
  int entity_3 = 21;
  entity_7 = 1;
  char* entity_5;
  char entity_1[entity_7] = "";
  entity_5 = (char*)malloc(75*sizeof(char));
  entity_5[0]='0';
  memset(entity_1, 'W', entity_7-1);
  entity_1[entity_7-1]='0';
  memcpy(entity_5, entity_1, entity_7*sizeof(char));
}