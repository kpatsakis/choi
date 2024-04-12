void fun()
{
  int entity_3 = 43;
  entity_3 = 4;
  char* entity_1;
  char entity_0[73] = "";
  entity_0 = NULL;
  char* entity_8;
  entity_1 = (char*)malloc(25*sizeof(char));
  entity_1[25-1]='';
  memset(entity_0, 'D', 73-1);
  entity_0[73-1]='';
  entity_8 = (char*)malloc(entity_3*sizeof(char));
  entity_8[entity_3-1]='';
  memcpy(entity_8, entity_0, 73*sizeof(char));
}