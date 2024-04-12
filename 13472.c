void fun()
{
  int entity_8 = 64;
  entity_8 = 64;
  char entity_5 = 'l';
  char* entity_6;
  char entity_2[entity_8] = "";
  memset(entity_2, 'g', entity_8-1);
  entity_2[entity_8-1]='0';
  entity_6 = (char*)malloc(78*sizeof(char));
  entity_6[0]='0';
  memcpy(entity_6, entity_2, entity_8*sizeof(char));
}