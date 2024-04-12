void fun()
{
  int entity_0 = 52;
  int entity_9 = 78;
  char entity_7[entity_0] = "";
  char* entity_5;
  char* entity_8;
  entity_5 = (char*)malloc(90*sizeof(char));
  entity_5[0]='0';
  entity_8 = (char*)malloc(61*sizeof(char));
  entity_8[0]='0';
  memset(entity_7, 'O', entity_0-1);
  entity_7[entity_0-1]='0';
  entity_0 = 59;
  memcpy(entity_8, entity_7, entity_0*sizeof(char));
}