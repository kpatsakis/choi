void fun()
{
  int entity_7 = 24;
  int entity_0 = 46;
  entity_0 = 99;
  char* entity_5;
  char entity_4[100] = "";
  entity_5 = (char*)malloc(entity_0*sizeof(char));
  entity_5[0]='0';
  memset(entity_4, 'r', 100-1);
  entity_4[100-1]='0';
  memcpy(entity_5, entity_4, 100*sizeof(char));
}