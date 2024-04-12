void fun()
{
  int entity_6 = 29;
  entity_6 = 29;
  char entity_0[95] = "";
  char entity_3[19] = "";
  char entity_2[entity_6] = "";
  char* entity_8;
  memset(entity_2, 'N', entity_6-1);
  entity_2[entity_6-1]='0';
  entity_8 = (char*)malloc(25*sizeof(char));
  entity_8[0]='0';
  memset(entity_0, 'W', 95-1);
  entity_0[95-1]='0';
  memset(entity_3, 'P', 19-1);
  entity_3[19-1]='0';
  strcpy(entity_8, entity_2);
}