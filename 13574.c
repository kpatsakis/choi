void fun()
{
  int entity_3 = 74;
  int entity_7 = 60;
  entity_3 = 4;
  char* entity_5;
  char* entity_2;
  char entity_0[33] = "";
  entity_5 = (char*)malloc(entity_3*sizeof(char));
  entity_5[0]='0';
  entity_2 = (char*)malloc(23*sizeof(char));
  entity_2[0]='0';
  memset(entity_0, 'I', 33-1);
  entity_0[33-1]='0';
  strcpy(entity_5, entity_0);
}