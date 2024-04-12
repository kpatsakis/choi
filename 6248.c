void fun()
{
  int entity_2 = 3;
  char* entity_7;
  char entity_3[42] = "";
  entity_3 = NULL;
  char entity_1[12] = "";
  entity_1 = NULL;
  char* entity_6;
  memset(entity_3, 'X', 42-1);
  entity_3[42-1]='';
  memset(entity_1, 'h', 12-1);
  entity_1[12-1]='';
  entity_7 = (char*)malloc(entity_2*sizeof(char));
  entity_7[entity_2-1]='';
  entity_6 = (char*)malloc(30*sizeof(char));
  entity_6[30-1]='';
  strcpy(entity_7, entity_3);
}