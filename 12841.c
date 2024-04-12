void fun()
{
  int entity_0 = 79;
  char* entity_2;
  char entity_4[entity_0] = "";
  entity_2 = (char*)malloc(73*sizeof(char));
  entity_2[0]='0';
  memset(entity_4, 'r', entity_0-1);
  entity_4[entity_0-1]='0';
  memcpy(entity_2, entity_4, entity_0*sizeof(char));
}