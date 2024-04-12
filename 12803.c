void fun()
{
  int entity_3 = 68;
  char* entity_6;
  char entity_1[entity_3] = "";
  entity_6 = (char*)malloc(21*sizeof(char));
  entity_6[0]='0';
  memset(entity_1, 'b', entity_3-1);
  entity_1[entity_3-1]='0';
  memcpy(entity_6, entity_1, entity_3*sizeof(char));
}