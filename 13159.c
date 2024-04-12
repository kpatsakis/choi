void fun()
{
  int entity_7 = 20;
  entity_7 = 33;
  char entity_0[76] = "";
  char* entity_2;
  char entity_6[entity_7] = "";
  entity_2 = (char*)malloc(94*sizeof(char));
  entity_2[0]='0';
  memset(entity_0, 'X', 76-1);
  entity_0[76-1]='0';
  memset(entity_6, 'L', entity_7-1);
  entity_6[entity_7-1]='0';
  memcpy(entity_2, entity_6, entity_7*sizeof(char));
}