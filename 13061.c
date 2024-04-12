void fun()
{
  int entity_5 = 66;
  char entity_9 = 'q';
  char* entity_0;
  char entity_8[entity_5] = "";
  char* entity_7;
  memset(entity_8, 'j', entity_5-1);
  entity_8[entity_5-1]='0';
  entity_7 = (char*)malloc(90*sizeof(char));
  entity_7[0]='0';
  entity_0 = (char*)malloc(4*sizeof(char));
  entity_0[0]='0';
  entity_5 = 21;
  memcpy(entity_7, entity_8, entity_5*sizeof(char));
}