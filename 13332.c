void fun()
{
  int entity_2 = 4;
  entity_2 = 24;
  char entity_0[entity_2] = "";
  char entity_6[72] = "";
  char* entity_9;
  entity_9 = (char*)malloc(94*sizeof(char));
  entity_9[0]='0';
  memset(entity_0, 'F', entity_2-1);
  entity_0[entity_2-1]='0';
  memset(entity_6, 'f', 72-1);
  entity_6[72-1]='0';
  memcpy(entity_9, entity_0, entity_2*sizeof(char));
}