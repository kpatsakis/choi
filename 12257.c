void fun()
{
  int entity_4 = 19;
  int entity_7 = 34;
  char* entity_0;
  char* entity_3;
  char entity_9[entity_7] = "";
  memset(entity_9, 'r', entity_7-1);
  entity_9[entity_7-1]='0';
  entity_3 = (char*)malloc(87*sizeof(char));
  entity_3[0]='0';
  entity_0 = (char*)malloc(39*sizeof(char));
  entity_0[0]='0';
  memcpy(entity_0, entity_9, entity_7*sizeof(char));
}