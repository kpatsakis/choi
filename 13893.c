void fun()
{
  int entity_2 = 34;
  char* entity_6;
  char entity_7[61] = "";
  char entity_5[46] = "";
  entity_6 = (char*)malloc(entity_2*sizeof(char));
  entity_6[0]='0';
  memset(entity_7, 'j', 61-1);
  entity_7[61-1]='0';
  memset(entity_5, 'N', 46-1);
  entity_5[46-1]='0';
  entity_2 = 47;
  memcpy(entity_6, entity_5, 46*sizeof(char));
}