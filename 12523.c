void fun()
{
  int entity_5 = 37;
  char entity_3[46] = "";
  char* entity_6;
  char entity_1 = 'k';
  entity_6 = (char*)malloc(entity_5*sizeof(char));
  entity_6[0]='0';
  memset(entity_3, 'j', 46-1);
  entity_3[46-1]='0';
  memcpy(entity_6, entity_3, 46*sizeof(char));
}