void fun()
{
  int entity_4 = 57;
  char* entity_9;
  char entity_5[92] = "";
  char entity_0[entity_4] = "";
  memset(entity_0, 'u', entity_4-1);
  entity_0[entity_4-1]='0';
  entity_9 = (char*)malloc(83*sizeof(char));
  entity_9[0]='0';
  memset(entity_5, 'H', 92-1);
  entity_5[92-1]='0';
  entity_4 = 67;
  memcpy(entity_9, entity_0, entity_4*sizeof(char));
}