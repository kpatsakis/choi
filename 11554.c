void fun()
{
  char entity_0[70] = "";
  char entity_1[2] = "";
  char* entity_7;
  memset(entity_1, 'P', 2-1);
  entity_1[2-1]='0';
  memset(entity_0, 'U', 70-1);
  entity_0[70-1]='0';
  entity_7 = (char*)malloc(71*sizeof(char));
  entity_7[0]='0';
  memcpy(entity_7, entity_1, 2*sizeof(char));
}