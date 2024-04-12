void fun()
{
  int entity_3 = 94;
  int entity_9 = 13;
  entity_3 = 21;
  char entity_6[entity_3] = "";
  char* entity_5;
  entity_5 = (char*)malloc(87*sizeof(char));
  entity_5[0]='0';
  memset(entity_6, 'I', entity_3-1);
  entity_6[entity_3-1]='0';
  memcpy(entity_5, entity_6, entity_3*sizeof(char));
}