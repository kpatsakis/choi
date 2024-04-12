void fun()
{
  int entity_4 = 44;
  char entity_5[entity_4] = "";
  char* entity_6;
  char entity_1 = 'y';
  memset(entity_5, 'B', entity_4-1);
  entity_5[entity_4-1]='0';
  entity_6 = (char*)malloc(85*sizeof(char));
  entity_6[0]='0';
  entity_4 = 72;
  memcpy(entity_6, entity_5, entity_4*sizeof(char));
}