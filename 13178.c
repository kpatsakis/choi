void fun()
{
  int entity_5 = 64;
  char* entity_6;
  char* entity_4;
  char entity_2[entity_5] = "";
  memset(entity_2, 'm', entity_5-1);
  entity_2[entity_5-1]='0';
  entity_6 = (char*)malloc(54*sizeof(char));
  entity_6[0]='0';
  entity_4 = (char*)malloc(60*sizeof(char));
  entity_4[0]='0';
  entity_5 = 54;
  memcpy(entity_6, entity_2, entity_5*sizeof(char));
}