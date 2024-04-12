void fun()
{
  int entity_4 = 25;
  char* entity_1;
  char entity_0[10] = "";
  char* entity_3;
  memset(entity_0, 'A', 10-1);
  entity_0[10-1]='0';
  entity_3 = (char*)malloc(79*sizeof(char));
  entity_3[0]='0';
  entity_1 = (char*)malloc(99*sizeof(char));
  entity_1[0]='0';
  strcpy(entity_3, entity_0);
}