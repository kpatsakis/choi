void fun()
{
  int entity_5 = 96;
  char entity_0[66] = "";
  char entity_2[entity_5] = "";
  char* entity_6;
  char* entity_4;
  entity_4 = (char*)malloc(66*sizeof(char));
  entity_4[0]='0';
  memset(entity_0, 'q', 66-1);
  entity_0[66-1]='0';
  memset(entity_2, 'c', entity_5-1);
  entity_2[entity_5-1]='0';
  entity_6 = (char*)malloc(61*sizeof(char));
  entity_6[0]='0';
  strcpy(entity_4, entity_2);
}