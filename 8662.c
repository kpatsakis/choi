void fun()
{
  int entity_8 = 9;
  int entity_7 = 37;
  int entity_9 = 0;
  char entity_5[63] = "";
  entity_5 = NULL;
  char* entity_1;
  char entity_2 = 'I';
  memset(entity_5, 'a', 63-1);
  entity_5[63-1]='';
  entity_1 = (char*)malloc(entity_7*sizeof(char));
  entity_1[entity_7-1]='';
  entity_7 = 98;
  memcpy(entity_1, entity_5, 63*sizeof(char));
}