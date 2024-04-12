void fun()
{
  int entity_7 = 95;
  char entity_8[85] = "";
  entity_8 = NULL;
  char entity_1[83] = "";
  entity_1 = NULL;
  char entity_2[20] = "";
  entity_2 = NULL;
  char* entity_5;
  memset(entity_8, 'z', 85-1);
  entity_8[85-1]='';
  memset(entity_1, 'h', 83-1);
  entity_1[83-1]='';
  entity_5 = (char*)malloc(8*sizeof(char));
  entity_5[8-1]='';
  memset(entity_2, 'C', 20-1);
  entity_2[20-1]='';
  entity_1[entity_7] = 'G';
}