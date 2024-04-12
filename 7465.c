void fun()
{
  int entity_8 = 24;
  int entity_3 = 62;
  char* entity_5;
  char* entity_0;
  char entity_2[50] = "";
  entity_2 = NULL;
  memset(entity_2, 'C', 50-1);
  entity_2[50-1]='';
  entity_5 = (char*)malloc(entity_3*sizeof(char));
  entity_5[entity_3-1]='';
  entity_0 = (char*)malloc(59*sizeof(char));
  entity_0[59-1]='';
  entity_3 = 9;
  memcpy(entity_5, entity_2, 50*sizeof(char));
}