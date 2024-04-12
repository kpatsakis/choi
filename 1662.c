void fun()
{
  int entity_2 = 45;
  char* entity_8;
  char entity_4[84] = "";
  entity_4 = NULL;
  char entity_6[36] = "";
  entity_6 = NULL;
  char entity_0[59] = "";
  entity_0 = NULL;
  memset(entity_0, 'g', 59-1);
  entity_0[59-1]='';
  memset(entity_4, 'r', 84-1);
  entity_4[84-1]='';
  memset(entity_6, 'A', 36-1);
  entity_6[36-1]='';
  entity_8 = (char*)malloc(40*sizeof(char));
  entity_8[40-1]='';
  strcpy(entity_8, entity_4);
}