void fun()
{
  int entity_1 = 57;
  char entity_9 = 'd';
  char entity_5[entity_1] = "";
  char* entity_6;
  entity_6 = (char*)malloc(75*sizeof(char));
  entity_6[0]='0';
  memset(entity_5, 'g', entity_1-1);
  entity_5[entity_1-1]='0';
  memcpy(entity_6, entity_5, entity_1*sizeof(char));
}