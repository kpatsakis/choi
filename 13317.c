void fun()
{
  int entity_0 = 55;
  entity_0 = 66;
  char* entity_5;
  char entity_4[75] = "";
  char* entity_7;
  entity_5 = (char*)malloc(53*sizeof(char));
  entity_5[0]='0';
  memset(entity_4, 'd', 75-1);
  entity_4[75-1]='0';
  entity_7 = (char*)malloc(entity_0*sizeof(char));
  entity_7[0]='0';
  memcpy(entity_7, entity_4, 75*sizeof(char));
}