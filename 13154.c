void fun()
{
  int entity_0 = 81;
  char* entity_7;
  char* entity_1;
  char entity_2[72] = "";
  entity_7 = (char*)malloc(4*sizeof(char));
  entity_7[0]='0';
  memset(entity_2, 'S', 72-1);
  entity_2[72-1]='0';
  entity_1 = (char*)malloc(entity_0*sizeof(char));
  entity_1[0]='0';
  entity_0 = 63;
  strcpy(entity_1, entity_2);
}