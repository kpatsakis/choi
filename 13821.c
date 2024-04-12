void fun()
{
  int entity_7 = 33;
  char* entity_4;
  char* entity_3;
  char entity_8[72] = "";
  char entity_9 = 'I';
  char entity_2[29] = "";
  memset(entity_8, 'E', 72-1);
  entity_8[72-1]='0';
  entity_3 = (char*)malloc(entity_7*sizeof(char));
  entity_3[0]='0';
  entity_4 = (char*)malloc(99*sizeof(char));
  entity_4[0]='0';
  memset(entity_2, 'f', 29-1);
  entity_2[29-1]='0';
  entity_7 = 88;
  strcpy(entity_3, entity_2);
}