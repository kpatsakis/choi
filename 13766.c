void fun()
{
  int entity_5 = 33;
  char* entity_7;
  char entity_6[entity_5] = "";
  memset(entity_6, 's', entity_5-1);
  entity_6[entity_5-1]='0';
  entity_7 = (char*)malloc(57*sizeof(char));
  entity_7[0]='0';
  entity_5 = 10;
  memcpy(entity_7, entity_6, entity_5*sizeof(char));
}