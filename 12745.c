void fun()
{
  int entity_1 = 60;
  char entity_8[entity_1] = "";
  char* entity_6;
  memset(entity_8, 'v', entity_1-1);
  entity_8[entity_1-1]='0';
  entity_6 = (char*)malloc(5*sizeof(char));
  entity_6[0]='0';
  memcpy(entity_6, entity_8, entity_1*sizeof(char));
}