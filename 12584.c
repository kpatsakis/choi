void fun()
{
  int entity_3 = 34;
  char* entity_0;
  char entity_8[entity_3] = "";
  char entity_4 = 'k';
  memset(entity_8, 'A', entity_3-1);
  entity_8[entity_3-1]='0';
  entity_0 = (char*)malloc(5*sizeof(char));
  entity_0[0]='0';
  memcpy(entity_0, entity_8, entity_3*sizeof(char));
}