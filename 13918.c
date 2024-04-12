void fun()
{
  int entity_3 = 100;
  char entity_2[entity_3] = "";
  char* entity_5;
  char entity_0[87] = "";
  char entity_7 = 'l';
  memset(entity_0, 'M', 87-1);
  entity_0[87-1]='0';
  entity_5 = (char*)malloc(86*sizeof(char));
  entity_5[0]='0';
  memset(entity_2, 't', entity_3-1);
  entity_2[entity_3-1]='0';
  entity_3 = 41;
  strcpy(entity_5, entity_2);
}