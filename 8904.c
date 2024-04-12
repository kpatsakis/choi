void fun()
{
  int entity_4 = 64;
  char* entity_5;
  char entity_1[entity_4] = "";
  entity_1 = NULL;
  char entity_8[62] = "";
  entity_8 = NULL;
  memset(entity_8, 'r', 62-1);
  entity_8[62-1]='';
  memset(entity_1, 'H', entity_4-1);
  entity_1[entity_4-1]='';
  entity_5 = (char*)malloc(53*sizeof(char));
  entity_5[53-1]='';
  entity_1[63] = 'i';
}