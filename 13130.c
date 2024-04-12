void fun()
{
  int entity_2 = 7;
  int entity_0 = 68;
  int entity_4 = 6;
  char* entity_5;
  char entity_8[10] = "";
  memset(entity_8, 'M', 10-1);
  entity_8[10-1]='0';
  entity_5 = (char*)malloc(entity_0*sizeof(char));
  entity_5[0]='0';
  entity_0 = 60;
  memcpy(entity_5, entity_8, 10*sizeof(char));
}