void fun()
{
  int entity_4 = 58;
  char* entity_3;
  char entity_0[entity_4] = "";
  char entity_6 = 'M';
  char entity_5 = 'j';
  entity_3 = (char*)malloc(28*sizeof(char));
  entity_3[0]='0';
  memset(entity_0, 'B', entity_4-1);
  entity_0[entity_4-1]='0';
  memcpy(entity_3, entity_0, entity_4*sizeof(char));
}