void fun()
{
  int entity_3 = 25;
  char* entity_1;
  char* entity_0;
  char entity_8[entity_3] = "";
  char entity_6[43] = "";
  entity_0 = (char*)malloc(60*sizeof(char));
  entity_0[0]='0';
  memset(entity_8, 'j', entity_3-1);
  entity_8[entity_3-1]='0';
  memset(entity_6, 'w', 43-1);
  entity_6[43-1]='0';
  entity_1 = (char*)malloc(75*sizeof(char));
  entity_1[0]='0';
  strcpy(entity_0, entity_8);
}