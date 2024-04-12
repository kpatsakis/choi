void fun()
{
  int entity_1 = 82;
  char entity_4[7] = "";
  entity_4 = NULL;
  char* entity_6;
  char* entity_2;
  char entity_0[17] = "";
  entity_0 = NULL;
  entity_2 = (char*)malloc(74*sizeof(char));
  entity_2[74-1]='';
  memset(entity_0, 'z', 17-1);
  entity_0[17-1]='';
  entity_6 = (char*)malloc(80*sizeof(char));
  entity_6[80-1]='';
  memset(entity_4, 'Z', 7-1);
  entity_4[7-1]='';
  strcpy(entity_2, entity_0);
}