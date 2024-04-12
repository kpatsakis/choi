void fun()
{
  int entity_9 = 55;
  int entity_0 = 58;
  char entity_4[24] = "";
  char entity_8[entity_9] = "";
  char* entity_2;
  entity_2 = (char*)malloc(91*sizeof(char));
  entity_2[0]='0';
  memset(entity_8, 'D', entity_9-1);
  entity_8[entity_9-1]='0';
  memset(entity_4, 'h', 24-1);
  entity_4[24-1]='0';
  entity_9 = 70;
  strcpy(entity_2, entity_8);
}