void fun()
{
  int entity_9 = 81;
  char entity_8[entity_9] = "";
  char entity_6 = 'b';
  char* entity_7;
  memset(entity_8, 'z', entity_9-1);
  entity_8[entity_9-1]='0';
  entity_7 = (char*)malloc(25*sizeof(char));
  entity_7[0]='0';
  memcpy(entity_7, entity_8, entity_9*sizeof(char));
}