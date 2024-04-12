void fun()
{
  int entity_3 = 28;
  char* entity_4;
  char entity_6[entity_3] = "";
  memset(entity_6, 'Z', entity_3-1);
  entity_6[entity_3-1]='0';
  entity_4 = (char*)malloc(65*sizeof(char));
  entity_4[0]='0';
  memcpy(entity_4, entity_6, entity_3*sizeof(char));
}