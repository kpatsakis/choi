void fun()
{
  int entity_6 = 95;
  char* entity_0;
  char entity_8[entity_6] = "";
  char entity_3[57] = "";
  entity_0 = (char*)malloc(91*sizeof(char));
  entity_0[0]='0';
  memset(entity_3, 'Y', 57-1);
  entity_3[57-1]='0';
  memset(entity_8, 'F', entity_6-1);
  entity_8[entity_6-1]='0';
  entity_6 = 5;
  memcpy(entity_0, entity_8, entity_6*sizeof(char));
}