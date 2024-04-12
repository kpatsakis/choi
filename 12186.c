void fun()
{
  int entity_2 = 92;
  int entity_9 = 84;
  char entity_0[entity_2] = "";
  char entity_6 = 'n';
  char* entity_7;
  memset(entity_0, 'G', entity_2-1);
  entity_0[entity_2-1]='0';
  entity_7 = (char*)malloc(43*sizeof(char));
  entity_7[0]='0';
  memcpy(entity_7, entity_0, entity_2*sizeof(char));
}