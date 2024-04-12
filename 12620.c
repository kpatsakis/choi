void fun()
{
  int entity_0 = 75;
  char entity_7[100] = "";
  char* entity_1;
  memset(entity_7, 'L', 100-1);
  entity_7[100-1]='0';
  entity_1 = (char*)malloc(entity_0*sizeof(char));
  entity_1[0]='0';
  memcpy(entity_1, entity_7, 100*sizeof(char));
}