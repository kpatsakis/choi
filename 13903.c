void fun()
{
  int entity_9 = 82;
  char entity_8[entity_9] = "";
  char* entity_5;
  char* entity_6;
  char entity_3 = 'I';
  entity_6 = (char*)malloc(29*sizeof(char));
  entity_6[0]='0';
  memset(entity_8, 'r', entity_9-1);
  entity_8[entity_9-1]='0';
  entity_5 = (char*)malloc(99*sizeof(char));
  entity_5[0]='0';
  entity_9 = 24;
  memcpy(entity_6, entity_8, entity_9*sizeof(char));
}