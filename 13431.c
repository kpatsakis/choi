void fun()
{
  int entity_5 = 34;
  char entity_2[entity_5] = "";
  char* entity_8;
  char entity_4 = 'o';
  entity_8 = (char*)malloc(54*sizeof(char));
  entity_8[0]='0';
  memset(entity_2, 'g', entity_5-1);
  entity_2[entity_5-1]='0';
  entity_5 = 93;
  memcpy(entity_8, entity_2, entity_5*sizeof(char));
}