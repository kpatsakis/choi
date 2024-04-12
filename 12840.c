void fun()
{
  int entity_5 = 17;
  char entity_0[59] = "";
  char* entity_6;
  char* entity_2;
  char entity_3 = 'U';
  entity_6 = (char*)malloc(34*sizeof(char));
  entity_6[0]='0';
  memset(entity_0, 'z', 59-1);
  entity_0[59-1]='0';
  entity_2 = (char*)malloc(entity_5*sizeof(char));
  entity_2[0]='0';
  strcpy(entity_2, entity_0);
}