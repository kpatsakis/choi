void fun()
{
  int entity_9 = 56;
  char entity_2[19] = "";
  char* entity_3;
  char entity_4[entity_9] = "";
  memset(entity_4, 's', entity_9-1);
  entity_4[entity_9-1]='0';
  memset(entity_2, 'V', 19-1);
  entity_2[19-1]='0';
  entity_3 = (char*)malloc(64*sizeof(char));
  entity_3[0]='0';
  entity_9 = 95;
  memcpy(entity_3, entity_4, entity_9*sizeof(char));
}