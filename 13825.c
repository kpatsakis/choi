void fun()
{
  int entity_9 = 1;
  entity_9 = 1;
  char entity_7[entity_9] = "";
  char* entity_4;
  char entity_8[79] = "";
  memset(entity_7, 'Q', entity_9-1);
  entity_7[entity_9-1]='0';
  memset(entity_8, 'r', 79-1);
  entity_8[79-1]='0';
  entity_4 = (char*)malloc(45*sizeof(char));
  entity_4[0]='0';
  strcpy(entity_4, entity_7);
}