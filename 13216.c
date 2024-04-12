void fun()
{
  int entity_6 = 33;
  int entity_7 = 13;
  entity_6 = 93;
  char entity_5[95] = "";
  char* entity_3;
  char* entity_0;
  entity_3 = (char*)malloc(entity_6*sizeof(char));
  entity_3[0]='0';
  entity_0 = (char*)malloc(19*sizeof(char));
  entity_0[0]='0';
  memset(entity_5, 'R', 95-1);
  entity_5[95-1]='0';
  strcpy(entity_3, entity_5);
}