void fun()
{
  int entity_3 = 15;
  entity_3 = 19;
  char* entity_0;
  char entity_5[100] = "";
  char entity_6 = 'Z';
  memset(entity_5, 'O', 100-1);
  entity_5[100-1]='0';
  entity_0 = (char*)malloc(entity_3*sizeof(char));
  entity_0[0]='0';
  memcpy(entity_0, entity_5, 100*sizeof(char));
}