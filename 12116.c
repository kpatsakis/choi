void fun()
{
  int entity_1 = 82;
  char* entity_8;
  char entity_2[entity_1] = "";
  char entity_4 = 'Q';
  entity_8 = (char*)malloc(31*sizeof(char));
  entity_8[0]='0';
  memset(entity_2, 'N', entity_1-1);
  entity_2[entity_1-1]='0';
  memcpy(entity_8, entity_2, entity_1*sizeof(char));
}