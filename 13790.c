void fun()
{
  int entity_2 = 58;
  char entity_4[entity_2] = "";
  char entity_8[36] = "";
  char* entity_5;
  char entity_9 = 'x';
  entity_5 = (char*)malloc(43*sizeof(char));
  entity_5[0]='0';
  memset(entity_8, 'p', 36-1);
  entity_8[36-1]='0';
  memset(entity_4, 'E', entity_2-1);
  entity_4[entity_2-1]='0';
  entity_2 = 57;
  memcpy(entity_5, entity_4, entity_2*sizeof(char));
}