void fun()
{
  int entity_5 = 60;
  entity_5 = 8;
  char entity_7[entity_5] = "";
  char* entity_0;
  char entity_1[65] = "";
  entity_0 = (char*)malloc(70*sizeof(char));
  entity_0[0]='0';
  memset(entity_1, 'o', 65-1);
  entity_1[65-1]='0';
  memset(entity_7, 'w', entity_5-1);
  entity_7[entity_5-1]='0';
  memcpy(entity_0, entity_7, entity_5*sizeof(char));
}