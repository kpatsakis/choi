void fun()
{
  int entity_4 = 39;
  entity_4 = 39;
  char* entity_8;
  char entity_5[entity_4] = "";
  char entity_9 = 'K';
  entity_8 = (char*)malloc(42*sizeof(char));
  entity_8[0]='0';
  memset(entity_5, 'z', entity_4-1);
  entity_5[entity_4-1]='0';
  strcpy(entity_8, entity_5);
}