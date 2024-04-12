void fun()
{
  int entity_7 = 46;
  char* entity_6;
  char entity_9 = 'k';
  char entity_8[48] = "";
  memset(entity_8, 'U', 48-1);
  entity_8[48-1]='0';
  entity_6 = (char*)malloc(entity_7*sizeof(char));
  entity_6[0]='0';
  memcpy(entity_6, entity_8, 48*sizeof(char));
}