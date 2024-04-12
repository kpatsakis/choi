void fun()
{
  int entity_6 = 99;
  entity_6 = 16;
  char* entity_8;
  char entity_0[entity_6] = "";
  entity_8 = (char*)malloc(45*sizeof(char));
  entity_8[0]='0';
  memset(entity_0, 'C', entity_6-1);
  entity_0[entity_6-1]='0';
  memcpy(entity_8, entity_0, entity_6*sizeof(char));
}