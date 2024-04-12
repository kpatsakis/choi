void fun()
{
  int entity_1 = 54;
  entity_1 = 57;
  char entity_8[69] = "";
  entity_8 = NULL;
  char* entity_6;
  char* entity_0;
  char entity_3[15] = "";
  entity_3 = NULL;
  memset(entity_3, 'C', 15-1);
  entity_3[15-1]='';
  entity_6 = (char*)malloc(entity_1*sizeof(char));
  entity_6[entity_1-1]='';
  entity_0 = (char*)malloc(73*sizeof(char));
  entity_0[73-1]='';
  memset(entity_8, 'R', 69-1);
  entity_8[69-1]='';
  memcpy(entity_6, entity_8, 69*sizeof(char));
}