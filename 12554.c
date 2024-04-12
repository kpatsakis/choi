void fun()
{
  int entity_5 = 92;
  char* entity_7;
  char entity_2[entity_5] = "";
  char entity_8 = 'y';
  memset(entity_2, 'v', entity_5-1);
  entity_2[entity_5-1]='0';
  entity_7 = (char*)malloc(83*sizeof(char));
  entity_7[0]='0';
  memcpy(entity_7, entity_2, entity_5*sizeof(char));
}