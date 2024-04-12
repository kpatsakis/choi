void fun()
{
  int entity_2 = 65;
  char* entity_4;
  char entity_7[entity_2] = "";
  memset(entity_7, 'E', entity_2-1);
  entity_7[entity_2-1]='0';
  entity_4 = (char*)malloc(99*sizeof(char));
  entity_4[0]='0';
  memcpy(entity_4, entity_7, entity_2*sizeof(char));
}