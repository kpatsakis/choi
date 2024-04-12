void fun()
{
  int entity_3 = 5;
  int entity_0 = 75;
  char* entity_5;
  char entity_6[entity_3] = "";
  char entity_7 = 'a';
  memset(entity_6, 'j', entity_3-1);
  entity_6[entity_3-1]='0';
  entity_5 = (char*)malloc(80*sizeof(char));
  entity_5[0]='0';
  memcpy(entity_5, entity_6, entity_3*sizeof(char));
}