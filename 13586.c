void fun()
{
  int entity_2 = 48;
  entity_2 = 69;
  char entity_0 = 'R';
  char entity_8[entity_2] = "";
  char* entity_5;
  memset(entity_8, 'Y', entity_2-1);
  entity_8[entity_2-1]='0';
  entity_5 = (char*)malloc(48*sizeof(char));
  entity_5[0]='0';
  memcpy(entity_5, entity_8, entity_2*sizeof(char));
}