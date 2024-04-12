void fun()
{
  int entity_3 = 98;
  int entity_6 = 58;
  char entity_1 = 'a';
  char* entity_4;
  char entity_9[91] = "";
  entity_9 = NULL;
  entity_4 = (char*)malloc(entity_3*sizeof(char));
  entity_4[entity_3-1]='';
  memset(entity_9, 'Z', 91-1);
  entity_9[91-1]='';
  memcpy(entity_4, entity_9, 91*sizeof(char));
}