void fun()
{
  int entity_4 = 34;
  char entity_5[entity_4] = "";
  entity_5 = NULL;
  char* entity_3;
  char entity_8[11] = "";
  entity_8 = NULL;
  memset(entity_8, 'o', 11-1);
  entity_8[11-1]='';
  entity_3 = (char*)malloc(33*sizeof(char));
  entity_3[33-1]='';
  memset(entity_5, 'P', entity_4-1);
  entity_5[entity_4-1]='';
  entity_5[85] = 'j';
}