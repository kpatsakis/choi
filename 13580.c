void fun()
{
  int entity_7 = 48;
  entity_7 = 44;
  char entity_6[6] = "";
  char* entity_2;
  char* entity_5;
  entity_5 = (char*)malloc(41*sizeof(char));
  entity_5[0]='0';
  entity_2 = (char*)malloc(entity_7*sizeof(char));
  entity_2[0]='0';
  memset(entity_6, 'h', 6-1);
  entity_6[6-1]='0';
  memcpy(entity_2, entity_6, 6*sizeof(char));
}