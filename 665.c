void fun()
{
  int entity_2 = 46;
  char entity_8[34] = "";
  entity_8 = NULL;
  char entity_3[19] = "";
  entity_3 = NULL;
  char* entity_1;
  char entity_6[69] = "";
  entity_6 = NULL;
  char entity_5 = 'i';
  memset(entity_3, 'D', 19-1);
  entity_3[19-1]='';
  entity_1 = (char*)malloc(entity_2*sizeof(char));
  entity_1[entity_2-1]='';
  memset(entity_8, 'E', 34-1);
  entity_8[34-1]='';
  memset(entity_6, 'O', 69-1);
  entity_6[69-1]='';
  strcpy(entity_1, entity_6);
}