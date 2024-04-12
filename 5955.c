void fun()
{
  int entity_6 = 42;
  char* entity_1;
  char entity_0[37] = "";
  entity_0 = NULL;
  char* entity_4;
  memset(entity_0, 'R', 37-1);
  entity_0[37-1]='';
  entity_1 = (char*)malloc(10*sizeof(char));
  entity_1[10-1]='';
  entity_4 = (char*)malloc(65*sizeof(char));
  entity_4[65-1]='';
  memcpy(entity_4, entity_0, 37*sizeof(char));
}