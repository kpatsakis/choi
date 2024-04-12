void fun()
{
  int entity_0 = 37;
  char entity_6[84] = "";
  entity_6 = NULL;
  char* entity_7;
  char* entity_8;
  char entity_3[67] = "";
  entity_3 = NULL;
  entity_8 = (char*)malloc(entity_0*sizeof(char));
  entity_8[entity_0-1]='';
  entity_7 = (char*)malloc(45*sizeof(char));
  entity_7[45-1]='';
  memset(entity_3, 'x', 67-1);
  entity_3[67-1]='';
  memset(entity_6, 'e', 84-1);
  entity_6[84-1]='';
  strcpy(entity_8, entity_3);
}