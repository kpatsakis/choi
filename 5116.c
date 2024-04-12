void fun()
{
  int entity_8 = 88;
  char* entity_5;
  char* entity_4;
  char entity_0[9] = "";
  entity_0 = NULL;
  entity_5 = (char*)malloc(5*sizeof(char));
  entity_5[5-1]='';
  memset(entity_0, 'C', 9-1);
  entity_0[9-1]='';
  entity_4 = (char*)malloc(40*sizeof(char));
  entity_4[40-1]='';
  memcpy(entity_4, entity_0, 9*sizeof(char));
}