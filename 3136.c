void fun()
{
  int entity_8 = 41;
  char entity_4[89] = "";
  entity_4 = NULL;
  char* entity_7;
  char entity_1[47] = "";
  entity_1 = NULL;
  memset(entity_4, 'E', 89-1);
  entity_4[89-1]='';
  entity_7 = (char*)malloc(50*sizeof(char));
  entity_7[50-1]='';
  memset(entity_1, 'l', 47-1);
  entity_1[47-1]='';
  strcpy(entity_7, entity_4);
}