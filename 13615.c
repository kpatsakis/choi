void fun()
{
  int entity_3 = 68;
  int entity_4 = 21;
  entity_3 = 82;
  char* entity_6;
  char entity_5[entity_3] = "";
  memset(entity_5, 'Q', entity_3-1);
  entity_5[entity_3-1]='0';
  entity_6 = (char*)malloc(70*sizeof(char));
  entity_6[0]='0';
  memcpy(entity_6, entity_5, entity_3*sizeof(char));
}