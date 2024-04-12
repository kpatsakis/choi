void fun()
{
  int entity_4 = 37;
  char entity_7[entity_4] = "";
  char* entity_6;
  memset(entity_7, 'd', entity_4-1);
  entity_7[entity_4-1]='0';
  entity_6 = (char*)malloc(1*sizeof(char));
  entity_6[0]='0';
  memcpy(entity_6, entity_7, entity_4*sizeof(char));
}