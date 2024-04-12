void fun()
{
  int entity_7 = 43;
  char entity_8[67] = "";
  char entity_2[96] = "";
  char* entity_5;
  char* entity_4;
  entity_5 = (char*)malloc(31*sizeof(char));
  entity_5[0]='0';
  memset(entity_8, 'g', 67-1);
  entity_8[67-1]='0';
  memset(entity_2, 'j', 96-1);
  entity_2[96-1]='0';
  entity_4 = (char*)malloc(47*sizeof(char));
  entity_4[0]='0';
  memcpy(entity_4, entity_8, 67*sizeof(char));
}